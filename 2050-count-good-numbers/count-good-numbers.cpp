class Solution {
public:
    long long mod = 1e9 + 7;

    // Fast Power Function
    long long power(long long x, long long n) {
        long long result = 1;

        while(n > 0) {
            if(n % 2 == 1) {
                result = (result * x) % mod;
            }
            x = (x * x) % mod;
            n = n / 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        
        long long even = (n + 1) / 2;  // even index count
        long long odd = n / 2;         // odd index count

        long long ans = (power(5, even) * power(4, odd)) % mod;

        return (int)ans;
    }
};