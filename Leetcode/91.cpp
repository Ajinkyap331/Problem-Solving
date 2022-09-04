class Solution {
public:
    int numDecodings(string s) {
    int ans = 1, n = s.size(), pp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int cur;
        if (s[i] == '0')
            cur = 0;
        else
            cur = ans;
        if (i < n - 1 && (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7')))
            cur += pp;
        pp = ans;
        ans = cur;
    }
        if(n == 0) return 0;
        else return ans;
    }
};