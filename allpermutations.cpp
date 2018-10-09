#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  string  s;
	  cin>>s;
	  
	  sort(s.begin(),s.end());
	  do
	  {
	      cout<<s<<" ";
	  }
	  while(next_permutation(s.begin(),s.end()));
	  
	  cout<<endl;
	}
	return 0;
}