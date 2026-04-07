class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int m = s.size();
        int n = t.size();

        if(m==0){
            return true;
        }
        int i=0,j=0;
        for(i=0;i<m;){
            if(j<n && s[i] == t[j]){
                i++,j++;
            }else if(j<n){
                j++;
            }else{
                break;
            }
        }
        return i==m;
    }
};