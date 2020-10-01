#pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma") 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define FOR(i, s, r) for(ll i = (s); i < (r); i++)
#define all(x) x.begin(), x.end()
#define SUM(a) accumulate(all(a), 0)
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())
#define CNT(v, n) count(v.begin(), v.end(), (n))
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define pii pair<int, int>
#define mp make_pair
#define n_l '\n'

// dbg(var)
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: "<<to_string(__VA_ARGS__)<<n_l;
template <typename T, size_t N> int SIZE(const T (&t)[N]){ return N; } template<typename T> int SIZE(const T &t){ return t.size(); } string to_string(const string s, int x1=0, int x2=1e9){ return '"' + ((x1 < s.size()) ? s.substr(x1, x2-x1+1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } string to_string(const char c){ return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1=0, int x2=1e9){ string t = ""; for(int __iii__ = min(x1,SIZE(b)),  __jjj__ = min(x2, SIZE(b)-1); __iii__ <= __jjj__; ++__iii__){ t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1=0, int x2=1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if(l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2-x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if(e != l){ if(rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else{ t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if(l_v_l_v_l == 0) res += n_l; return res; } void dbgm(){;} template<typename Heads, typename... Tails> void dbgm(Heads H, Tails... T){ cerr << to_string(H) << " | "; dbgm(T...); } 

// dbgm(var1, var2, var3, ...)
#define dbgm(...) cerr << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cerr << endl
#define rot(s, k) rotate(s.begin(), s.begin()+ s.size()-(k%s.size()), s.end()); //+ve = right, -ve = left


ll binpow(ll a, ll b) { ll res = 1; while (b > 0) { if (b & 1) res = res * a; a = a * a; b >>= 1; } return res; }
ll mbp(ll a, ll b, ll m = 1e9+7){ a %= m; ll res = 1; while (b > 0) { if (b & 1) res = res * a % m; a = a * a % m; b >>= 1; } return res; }
bool isPrime(ll n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (ll i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }
int total(int n) { return int((-1 + sqrt(1 + 8 * n)) / 2); }


void solve() {
    
}     

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    clock_t start = clock();
    
    int t;
    cin>>t;
    while(t--) 
        solve();

    // Google KS
    // FOR(i, 1, t+1) {

    //     cout << "Case #" << i << ": ";
    //     solve();
    //     cout << "\n";
    // }

    clock_t stop = clock();
    double elapsed = (double) 10 * (stop - start) / CLOCKS_PER_SEC;
    cerr<<setprecision(5)<<fixed;
    cerr<<"\nProcess finished in: "<<elapsed<<"ms\n";

    return 0;

}
