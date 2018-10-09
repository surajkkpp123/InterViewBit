#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;

ll fun(ll a,ll b)
{   
	ll res=1;
	if(b==0)
	   return 1;
	else if(b==1)
	   return a;
	while(b)
	{
		if(b&1)
		{
          res=res*a;
          res%=mod;
		}
		b/=2;
		a*=a;
		a%=mod;
	}
	
	return res; 	
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	ll n,p;
  	cin>>n;
  	cin>>p;
  	cout<<"Power of number is :"<<fun(n,p)<<endl;
  }
  return 0;
}