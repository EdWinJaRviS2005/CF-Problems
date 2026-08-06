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
 
    int a, b, c, d;
    a = b = c = d = 0;
 
    f(i, 0, n-1) {
        INT(num);
        if (num == 4) d++;
        else if (num == 3) c++;
        else if (num == 2) b++;
        else a++;
    }
 
    int ans = d;
 
    // cout << a << ' ' << b << ' ' << c << ' ' << ans << endl;
 
    int ac = min(a, c);
    ans += ac;
    a -= ac;
    c -= ac;
 
    // cout << a << ' ' << b << ' ' << c << ' ' << ans << endl;
 
    ans += b/2;
    b %= 2;
 
    // cout << a << ' ' << b << ' ' << c << ' ' << ans << endl;
 
    int ab = min(a/2, b);
    ans += ab;
    a -= 2*ab;
    b -= ab;
 
    // cout << a << ' ' << b << ' ' << c << ' ' << ans << endl;
 
    ans += c;
 
    if (b) {
    ans++;
    a = max(0LL, a - 2);
    }
 
    ans += (a + 3) / 4;
 
    cout << ans;
    
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
 