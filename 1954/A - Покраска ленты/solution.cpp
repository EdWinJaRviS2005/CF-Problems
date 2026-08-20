#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void solve() {
    int n, m, k;
    
    if (!(cin >> n >> m >> k)) return;
 
    int min_max_frequency = (n + m - 1) / m;
    
    int max_parts_bob_needs_to_match = n - k;
    
    if (min_max_frequency < max_parts_bob_needs_to_match) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}