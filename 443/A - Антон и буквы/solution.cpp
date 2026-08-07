#include <bits/stdc++.h>
using namespace std;
 
int main() {
	set<char> arr ;
	char ch;
	while(ch != '}')
	{
	    cin>>ch;
	    if(ch>='a' && ch<='z')
	        arr.insert(ch);
	}
	cout<<arr.size();
}