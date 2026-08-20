#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	    int n;
	    cin>>n;
	    
	    vector<long long int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    
	    long long int x=2;
	    bool flag = false;
	    do
	    {
	        if(isPrime(x))
	        {
	            for(int i=0;i<n;i++)
	            {
	            if(gcd(v[i],x)==1)
	            {
	               flag = true;
	               break;
	            }
	            }
	            if(flag) break;
	        }
	        x++;
	    }while(1);
	    cout<<x<<"
";
	}
}