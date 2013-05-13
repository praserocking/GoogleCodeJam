/* Problem: Consonants */
import java.io.*;
import java.util.*;
class Main
{
    static int count(String b,int n)
    {
        String x;
        int c,d,cnt=0;;
            c=0;d=n;
            while(d<b.length()){
            x=b.substring(c,d);
            if(novowel(x,n))
                cnt++;
            c++;d++;
            }
            return cnt;
    }
    static boolean novowel(String b,int n){
        int cnt=0;
        char[] a=new char[n];
        a=b.toCharArray();
        for(int i=0;i<n;i++)
        {
            if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!= 'u')
            {
                cnt++;
            }
        }
        if(cnt==n) return true;
        else return false;
    }
    public static void main(String[] args)
    {
        int t,n,c,x,cnt=0;;
        String a,b;
        try{
        Scanner in = new Scanner(System.in);
        FileWriter fstream = new FileWriter("out.txt");
        BufferedWriter out = new BufferedWriter(fstream);
        t=in.nextInt();
        for(int y=0;y<t;y++)
        {
            a=in.next();
            n=in.nextInt();
            for(int i=n;i<a.length();i++){
                c=0;
                x=i;
                while(x<a.length())
                {
                    b=a.substring(c,n);
                    cnt=cnt+count(b,n);
                    c++;n++;
                }
            }
            System.out.println("Case #"+y+1+": "+cnt);
            cnt=0;
        }
        }catch(Exception e){System.out.println(e);}
    }
}






