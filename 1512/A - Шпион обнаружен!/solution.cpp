#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int people,num1,bnum;
	    cin>>people>>num1;
	    int a=1,b=0;
	    for(int i=0;i<people-1;i++)
	    {
	        int num2;
	        cin>>num2;
	        if(num2==num1) a++;
	        else {
	            b++;
	            bnum=i+2;
	        }
	    }
	    if(a==1) cout<<"1
";
	    else cout<<bnum<<"
";
	}
	
	return 0;
}