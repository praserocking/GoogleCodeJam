/*Problem: Osmos */
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<string.h>
#include<queue>
#include<cstring>
#include<cctype>
#define mn(a,b) a>b?b:a
#define loop(n,i) for(int i=0;i<n;i++)
#define mx(a,b) a>b?a:b
#define PI 3.14159
#define start int main(){
#define put printf
#define get scanf
#define FO freopen
#define end return 0;}
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
/* CODER: prassi */
/* If its hard to write, it should be hard to read.. */
start
  FO("in.txt","r",stdin);
	FO("output.txt","w",stdout);
	int m,n,a[100],cnt,ans,t,sum,b[100];
	get("%d",&t);
	loop(t,i)
	{
		get("%d %d",&m,&n);
		loop(n,j) get("%d",&a[j]);
		sort(a,a+n);
		cnt=0;
		ans=sum=m;
		if(m==1)
		{
			put("Case #%d: %d\n",i+1,ans);
			continue;
		}
		loop(n,j)
		{
			if(a[j]>=sum)
			{
			b[i]=1-log2(a[i]-1)-log2(sum-1);
			sum--;
			sum<<=b[i];
			sum++;
			}
			sum+=a[i];
		}
		for(int k=1;k<n;k++) b[k]+=b[k-1];
		loop(n,j)  ans=mn(ans,b[j]+n-j-1);
		put("Case #%d: %d\n",i+1,ans);
	}
end
