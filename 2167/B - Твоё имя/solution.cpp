#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int testcase;
   cin>>testcase;
   for(int i=0;i<testcase;i++)
   {
   int num1;
   cin>>num1;
   string str1,str2;
   cin>>str1>>str2;
   sort(str1.begin(),str1.end());
   sort(str2.begin(),str2.end());
   
   if(str1==str2)
      cout<<"YES
";
   else 
      cout<<"NO
";
   }
   return 0;
}