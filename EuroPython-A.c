/*CodeJam EuroPython 2011- Problem: Centauri Prime */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  int t;
	char a[100],l;
	FILE *in,*out;
	in=fopen64("in.txt","r");
	out=fopen64("out.txt","w");
	fscanf(in,"%d",&t);
	for(int x=0;x<t;x++)
	{
		fscanf(in,"%s",&a);
		l=a[strlen(a)-1];
		l=tolower(l);
		if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
		{
			fprintf(out,"Case #%d: %s is ruled by a queen.\n",x+1,a);
			continue;
		}
		else if(l=='y')
		{
			fprintf(out,"Case #%d: %s is ruled by nobody.\n",x+1,a);
			continue;
		}
		else
		{
			fprintf(out,"Case #%d: %s is ruled by a king.\n",x+1,a);
			continue;
		}
	}
	return 0;
}
