#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int tc;
	cin>>tc;
	vector<int> v(tc);
	for(int i=0;i<tc;i++)
	{
	    cin>>v[i];
	}
	
	int sereja=0,dima=0;
	int right=tc-1,left=0;
	bool turn = true;
	
	while(left<=right)
	{
	    int addEle;
	    if(turn)
	    {
	        addEle = max(v[right],v[left]);
	        if(addEle==v[right]) right--;
	        else left++;
	        sereja+=addEle;
	        turn = !turn;
	    }
	    else
	    {
	        addEle = max(v[right],v[left]);
	        if(addEle==v[right]) right--;
	        else left++;
	        dima+=addEle;
	        turn = !turn;
	    }
	}
	
	cout<<sereja<<" "<<dima;
	
	
	
	
	return 0;
}