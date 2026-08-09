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
    cin >> n;
    int sq = ceil(sqrt(n));
    if (sq * sq == n) {
        cout << 0 << ' ' << sq << "
";
    } else {
        cout << "-1
";
    }
    
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
 