#include <iostream>
using namespace std;
 
int main()
{
   int t,j,l1,l2;
   cin>>t;
   while(t--)
   {
   	string s1,s2;
   	cin>>s1>>s2;
   	l1=s1.size();
   	l2=s2.size();
   	
   	int count=0;
   	if(l1<l2)
   	{
   		j=l1;
   	}
   	else
   	{
   		j=l2;
   	}
   	for (int k =0;k<j; k++)
   	{
   		if(s1[k]==s2[k])
   		count++;
   	}
   	
   
   	cout<<count<<endl;
   
   }
   	
    return 0;
}
