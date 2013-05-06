#include<iostream>            /* Bulls Eye FULL SOLUTION Including large testcases */
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define put printf
#define get scanf
#define all(a) a.begin(),a.end()
#define iter vector<int>::iterator
#define szf sizeof
#define setfiles freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
template <class type>type fact(type n){return n==1?1:fact(n-1)*n;}
template <class type>type gcd(type a,type b){return b==0?a:gcd(b,a%b);}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* B.Tech,IT.,SASTRA University,Tanjore. */
int main(){
setfiles
  int t,i;
  ll a,b,_,___,__,r,e,m,s;
	get("%d",&t);
	loop(t,i)
	{
		get("%lld %lld",&a,&b);
		_=b/(2*a)+1;
		___=b;
		___/=2.0;
		___=sqrt(___);
		__=___;
		__+=10;
		if(_>__)_=__;
		r=0,__=1;
		e=_;
		while(__<=e){
			m=(__+e+1)/2;
			s=2*a*m+m*(2*m-1);
			if(s>b)e=m-1;
			else __=m+1,r=m;
		}
		put("Case #%d: %lld\n",i+1,r);
	}
return 0;}
