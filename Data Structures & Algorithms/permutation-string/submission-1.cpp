class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        if(n > s2.size())   return false;

        for(int left = 0; left <= s2.size() - n; left++) {
            int right = left + n - 1;
            string temp = s2.substr(left, n);

            sort(temp.begin(), temp.end());
            sort(s1.begin(), s1.end());

            if(temp == s1)
                return true;
        }

        return false;
    }
};