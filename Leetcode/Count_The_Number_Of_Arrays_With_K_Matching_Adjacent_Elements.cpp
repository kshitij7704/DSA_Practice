class Solution {
private:
    using ll = long long;

    static const int MOD = 1e9 + 7;
    static const int MX = 1e5;
    ll fact[MX];
    ll invFact[MX];

    ll qpow(ll x, int n){
        ll res = 1;
        while(n != 0){
            if(n & 1){
                res = res * x % MOD;
            }
            x = x * x % MOD;
            n >>= 1;
        }
        return res;
    }

    ll comb(int n, int m){
        return fact[n] * invFact[m] % MOD * invFact[n - m] % MOD;
    }

    void init(){
        if(fact[0] != 0){
            return;
        }
        fact[0] = 1;
        for(int i=1;i<MX;i++){
            fact[i] = fact[i - 1] * i % MOD;
        }
        invFact[MX - 1] = qpow(fact[MX - 1], MOD - 2);
        for(int i=MX-1;i!=0;i--){
            invFact[i - 1] = invFact[i] * i % MOD;
        }
    }

public:
    int countGoodArrays(int n, int m, int k) {
        init();
        return comb(n - 1, k) * m % MOD * qpow(m - 1, n - k - 1) % MOD;
    }
};
