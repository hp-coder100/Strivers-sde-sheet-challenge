#include<algorithm>
struct meet{
    int start;
    int end;
    int pos;
};

bool static comparator(struct meet m1, meet m2) {
         if (m1.end < m2.end) return true;
         else if (m1.end > m2.end) return false;
         else if (m1.pos < m2.pos) return true;
         return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    struct meet meetings[start.size()];
    
    for(int i=0;i<start.size();i++){
        meetings[i].start = start[i];
        meetings[i].end = end[i];
        meetings[i].pos = i+1;
    }
    sort(meetings, meetings + start.size(), comparator);
    vector<int> ans;
    ans.push_back(meetings[0].pos);
    int limit = meetings[0].end;
    for(int i=1;i<start.size(); i++){
        if(meetings[i].start > limit){
            ans.push_back(meetings[i].pos);
            limit = meetings[i].end;
        }
        
    }
    
    return ans;
    
}