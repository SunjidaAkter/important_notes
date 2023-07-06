class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        for(char c:s){
            if(c!='#'){
                s1.push(c);
            }else{
                if(!s1.empty()){
                    s1.pop();
                }
            }
        }
        stack<char>s2;
        for(char c:t){
            if(c!='#'){
                s2.push(c);
            }else{
                if(!s2.empty()){
                    s2.pop();
                }
            }
        }
        return s1==s2;
    }
};