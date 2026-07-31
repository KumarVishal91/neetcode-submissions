class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double ans = 1.0;
        if (N < 0)  N = -N;
        for (long long i = 0; i < N; i++) {
            ans *= x;
        }
        if (n < 0) return 1.0 / ans;
        return ans;
    }
};