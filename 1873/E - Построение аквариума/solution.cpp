#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define f(i, a, b) for (auto i = a; i <= b; i++)
#define fr(i, a, b) for (auto i = a; i >= b; i--)
// #define push_back(i) PB(auto i);
#define fast std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "
"
#define int long long int
#define all(a) a.begin(),a.end()
#define time_taken 1.0 * clock() / CLOCKS_PER_SEC
typedef vector < int > vi;
 
template<typename T>
void read(T &x) {
    cin >> x;
}
 
template<typename T, typename... Args>
void read(T &x, Args&... args) {
    cin >> x;
    read(args...);
}
 
#define INT(...)   \
  int __VA_ARGS__; \
  read(__VA_ARGS__)
 
 
///////////////// Actual Code //////////////////////
 
void solve()
{
    int n;
    int x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int lo = 0, hi = 2'000'000'007;
    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        int tot = 0;
        for (int i = 0; i < n; i++) {
            tot += max(mid - a[i], 0LL);
        }
        if (tot <= x) {lo = mid;} 
        else {hi = mid - 1;}
    }
    cout << lo << endl;
 
}
 
//////////////// Main function /////////////////////
 
signed main()
{
    fast;
 
    INT(tc);
 
    while (tc--)
 
        solve();
    // cout << time_taken;
}
 