#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(auto& detail : details){
            string age = detail.substr(11, 2);
            int num = std::stoi(age);
            if(num > 60) cnt++; 
        }
        return cnt;
    }
};