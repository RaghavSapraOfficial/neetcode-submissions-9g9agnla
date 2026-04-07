class Solution {
public:
    int scoreOfString(string a) {
        int n = a.size();
        int res = 0;
        for(int i=0;i<n-1;i++){
            res += abs(a[i+1]-a[i]);
        }
        return res;
    }
};