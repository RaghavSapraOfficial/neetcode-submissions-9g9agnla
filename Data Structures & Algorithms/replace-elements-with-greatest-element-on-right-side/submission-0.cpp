class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        vector<int>b(n,-1);
        int maxm = a[n-1];
        for(int i=n-2;i>=0;i--){
            b[i] = maxm;
            maxm = max(a[i],maxm);
        }
        return b;
    }
};