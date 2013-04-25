/*CodeJam 2010 - Round 1B- Rope Intranet */
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector<long long> a,b;
	int n,t,cnt;
	long long tmp;
	FILE *in,*out;
	in=fopen64("in.txt","r");
	out=fopen64("out.txt","w");
	fscanf(in,"%d",&t);
	for(int x=0;x<t;x++)
	{
		fscanf(in,"%d",&n);
		for(int i=0;i<n;i++)
		{
			fscanf(in,"%lld",&tmp);
			a.push_back(tmp);
			fscanf(in,"%lld",&tmp);
			b.push_back(tmp);
		}
		cnt=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((a[i]-a[j])*(b[i]-b[j])<0)
				cnt++;
			}
		}
		fprintf(out,"Case #%d: %d\n",x+1,cnt/2);
		a.clear();
		b.clear();
	}
	return 0;
}
