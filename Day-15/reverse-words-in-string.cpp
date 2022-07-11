string reverseString(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    while(left<=right){
        if(s[left]!=' '){
            temp = temp + s[left];
        }
        else if(temp != ""){
            if(ans=="")
                ans = temp;
            else
                ans = temp + ' ' + ans;
            temp = "";
        }
        left++;
    }
    if(temp != ""){
        if(ans=="") ans = temp;
        else ans = temp + ' ' + ans;
    }
    return ans;
     
}



//using space
#include<stack>
string reverseString(string str)
{
   stack<string> s;
   string temp = "";
   for(int i=0;i<str.size();i++){
       if(str[i]==' '){
           if(temp!="")
           s.push(temp);
           temp = "";
       }
       else{
           temp += str[i];
       }
   }
   string ans = "";
   if(temp != "")
       ans = temp;
    
    while(!s.empty() && s.size()!= 1){
         if(ans == "")
             ans = s.top();
         else
             ans += ' ' +s.top();
        s.pop();
    }
    if(!s.empty()){
    if(ans == "")
        ans = s.top();
    else
        ans += ' ' +s.top();
    s.pop();
    }
    return ans;
    
}