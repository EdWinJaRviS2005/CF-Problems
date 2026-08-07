#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,e=0,o=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                e=1;
            }
            else
                o=1;
    }
    if(e==1&&o==1){
        sort(v.begin(),v.end());
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
}