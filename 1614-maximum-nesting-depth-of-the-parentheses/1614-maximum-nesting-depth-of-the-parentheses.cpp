class Solution {
public:
    int maxDepth(string s) {
        int curr = 0;
        int res = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='('){
                curr++;
                res = max(res,curr);
            }
            else if(s[i] == ')'){
                curr--;
            }
        }
        return res;
        
    }
};