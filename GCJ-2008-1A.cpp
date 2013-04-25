/*CodeJam 2008 Round 1A- Minimum Scalar Product */
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
  FILE *f,*o;
	f=fopen64("test.txt","r");
	o=fopen64("out.txt","w");
	vector<long long> a,b;
	int t,n;
	long long tmp,p;
	fscanf(f,"%d",&t);
	for(int x=0;x<t;x++)
	{
		fscanf(f,"%d",&n);
		for(int i=0;i<n;i++)
		{
			fscanf(f,"%lld",&tmp);
			a.push_back(tmp);
		}
		for(int i=0;i<n;i++)
		{
			fscanf(f,"%lld",&tmp);
			b.push_back(tmp);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		reverse(b.begin(),b.end());
		p=0;
		for(int i=0;i<n;i++)
		{
			p=p+a[i]*b[i];
		}
		fprintf(o,"Case #%d: %lld\n",x+1,p);
		a.clear();
		b.clear();
	}
	return 0;
}
