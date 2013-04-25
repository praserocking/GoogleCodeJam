/*CodeJam 2010 Qualifiers- Store Credit*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
        int n,c,l,tmp,f=0;
        cin>>n;
        for(int z=0;z<n;z++)
        {
                cin>>c>>l;
                for(int i=0;i<l;i++)
                {
                        cin>>tmp;
                        a.push_back(tmp);
                }
                for(int i=0;i<l;i++)
                {
                        for (int j=0;j<l;j++)
                        {
                                if(a[i]+a[j]==c && i!=j)
                                {
                                        cout<<"Case #"<<z+1<<": "<<i+1<<" "<<j+1<<endl;
                                        f=1;
                                        break;
                                }
                        }
                        if(f==1)
                        break;
                }
                a.clear();
                f=0;
        }
        return 0;
}
