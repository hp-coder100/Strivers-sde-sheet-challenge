#include<bits/stdc++.h>
int romanToInt(string s) {
    unordered_map<char, int> values;
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;
    int ans = 0;
    for(int i=0;i<s.length();i++){
        if(values[s[i]] < values[s[i+1]]){
            ans += values[s[i+1]] - values[s[i]];
            i++;
            continue;
        }
        ans += values[s[i]];
        
    }
    return ans;    
    
}
