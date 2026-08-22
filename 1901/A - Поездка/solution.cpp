#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--) {
        int n,target;
        cin>>n>>target;
        
        int maxDiff = 0;
        int prev;
        cin>>prev;
        
        maxDiff=prev;
        
        for(int i=1;i<n;i++) {
            int curr;
            cin >> curr;
            maxDiff = max(maxDiff, curr - prev);
            prev = curr;
        }
        
        maxDiff = max(maxDiff,2*(target-prev));
        
        cout<<maxDiff<<"
";
    }
    
    return 0;
}