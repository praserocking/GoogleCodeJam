/*CodeJam 2013 Qualifiers- Fair and Square */
#include<math.h>
#include<stdio.h>
int palin(int n)
{
  int a=0;
	int m=n;
		while(m)
		{
			a=a*10+(m%10);
			m/=10;
		}
		if(n==a)
		{
			return 1;
		}
	return 0;
}
int issq(int n)
{
	double a=sqrt(n);
	int b=sqrt(n);
	if(a==double(b))
	return 1;
	else
	return 0;
}
int sqr(int n)
{
	int b=sqrt(n);
	return b;
}
int main()
{
	int a,x,m,n,cnt,t;
	FILE *f,*a;
	f=fopen64("testsmall.txt","r");
	a=fopen64("anssmall.txt","W");
	fscanf(f,"%d",t);
	for(x=0;x<t;x++)
	{
		fscanf(f,"%d %d",m,n);
		cnt=0;
		for(int i=m;i<=n;i++)
		{
			if(issq(i))
			if(palin(i))
			if(palin(sqr(i)))
			cnt++;
		}
		fprintf(a,"Case #%d: %d\n",x+1,cnt);
	}
	return 0;
}
