#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)
	{
	    int j=0;
	    switch(int n=i%4)
	    {
	        case 0:
	        case 2:
	                for(j=0;j<col;j++)
	                {
	                    cout<<"#";
	                }
	                cout<<"
";
	                break;
	                
	        case 1: 
	                for(j=0;j<col-1;j++)
	                {
	                    cout<<".";
	                }
	                cout<<"#
";
	                break;
	                
	        case 3: cout<<"#";
	                for(j=0;j<col-1;j++)
	                {
	                    cout<<".";
	                }
	                cout<<"
";
	                break;
	    }
	}
	return 0;
}