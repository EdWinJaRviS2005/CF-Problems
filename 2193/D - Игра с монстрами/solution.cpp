#include <bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define f(i, a, b) for (auto i = a; i <= b; i++)
#define fr(i, a, b) for (auto i = a; i >= b; i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "
"
#define int long long int
#define all(a) a.begin(), a.end()
#define time_taken 1.0 * clock() / CLOCKS_PER_SEC
 
typedef vector<int> vi;
 
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
 
    // 1-based indexing
    vi a(n + 1), b(n + 1);
 
    f(i, 1, n)
        cin >> a[i];
 
    f(i, 1, n)
        cin >> b[i];
 
    int h = 0;
    int sum = 0;
    int ans = 0;
 
    sort(a.begin() + 1, a.end());
    reverse(a.begin() + 1, a.end());
 
    f(i, 1, n) {
 
        while (h < n && sum + b[h + 1] <= i) {
            h++;
            sum += b[h];
        }
 
        ans = max(ans, a[i] * h);
    }
 
    cout << ans << '
';
}
 
//////////////// Main function /////////////////////
 
signed main()
{
    fast;
 
    INT(tc);
 
    while (tc--)
        solve();
}