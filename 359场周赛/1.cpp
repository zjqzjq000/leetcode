class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str;
        for(auto& w: words) str+=w[0];
        if(str==s) return true;
        else return false;
    }
};
