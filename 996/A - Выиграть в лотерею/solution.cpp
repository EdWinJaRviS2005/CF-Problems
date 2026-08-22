#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int num;
	cin>>num;
	
	int bill=0;
	
	bill+= num/100;
	num%=100;
	bill+= num/20;
	num%=20;
	bill+= num/10;
	num%=10;
	bill+= num/5;
	num%=5;
	bill+= num/1;
	num%=1;
	
	cout<<bill;
	
	
	return 0;
}