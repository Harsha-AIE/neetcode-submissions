class Solution {
public:
    bool isValid(string s) {
      if(s.empty())return true;
      if(s.size()==1)return false;
      map<char,char> mp;
      mp[']']='[';
      mp[')']='(';
      mp['}']='{';
    
    stack<char> st;
    
    int i=0;
    while(i<s.size()){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
            i++;
            continue;
            }
        else if(st.empty() || st.top()!=mp[s[i]]){
            return false;}
        st.pop();
        i++;
    }
    return st.empty();
    }
};
