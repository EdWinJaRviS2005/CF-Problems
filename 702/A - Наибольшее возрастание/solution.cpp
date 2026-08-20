#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tc;
	cin>>tc;
	tc--;
	int num1;
	cin>>num1;
	int cnt=1;
	int maxi=cnt;
	while(tc--)
	{
	    int num2;
	    cin>>num2;
	    if(num2>num1) 
	    {
	        cnt++;
	    }
	    else cnt=1;
	    num1=num2;
	    maxi = max(cnt,maxi);
	}
	cout<<maxi;
	
	return 0;
}