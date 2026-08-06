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
    INT(n);
 
    const int MAX = 100000;
    vi cnt(MAX + 1, 0);
 
    f(i, 0, n - 1) {
        INT(x);
        cnt[x]++;
    }
 
    f(i, 1, MAX)
        cnt[i] += cnt[i - 1];
 
    INT(q);
 
    while (q--) {
        INT(m);
 
        if (m > MAX)
            cout << n << endl;
        else
            cout << cnt[m] << endl;
    }
 
    
}
 
//////////////// Main function /////////////////////
 
signed main()
{
    fast;
 
    // INT(tc);
 
    // while (tc--)
 
        solve();
    // cout << time_taken;
}
 