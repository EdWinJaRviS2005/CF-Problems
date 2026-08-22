#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin>>tc;
    
    while(tc--){
        int n,k,num;
        bool flag = true;
        int maxi = INT_MIN;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>num;
            if(maxi<=num){
                maxi = num;
            }
            else flag = false;
        }
        
        if(k>1 || flag) cout<<"Yes
";
        else cout<<"No
";
    }
    
    return 0;
}