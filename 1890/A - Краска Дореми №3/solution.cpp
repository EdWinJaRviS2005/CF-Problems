#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tc;
	cin>>tc;
	
	while(tc--)
	{
	    int n;
	    cin>>n;
	    int a,b;
	    cin>>a;
	    int a_cnt=1;
	    int b_cnt=0;
	    bool flag = true;
	    bool flag1 = true;
	   // cout<<tc<<". ";
	    for(int i=1;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        if(flag)
	        {
	            if(num==a) a_cnt++;
	            else 
	            {
	                b=num;
	                b_cnt++;
	                flag = false;
	            }
	        }
	        else
	        {
	            if(num==a) a_cnt++;
	            else if (num==b) b_cnt++;
	            else 
	            {
	                cout<<"No
";
	                flag1 = false;
	                for(int j = i + 1; j < n; j++) cin >> num;
	                break;
	            }
	        }
	    }
	    if(!flag1) continue;
	    if(a_cnt==b_cnt-1 || a_cnt-1==b_cnt || a_cnt==b_cnt || a_cnt == n)
	        cout<<"Yes
";
	    else 
	        cout<<"No
";
	}
}