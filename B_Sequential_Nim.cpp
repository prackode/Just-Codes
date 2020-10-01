#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,par=0;
        cin>>n;
        int i=1;
        for(i=1;i<=n;i++)
        {
            long x;
            cin>>x;
            if(x!=1)
            {
                if(i&1)
                    par=1;
                else
                {
                    par=2;
                }
                break;                
            }
        }
        for(int j=i+1;j<=n;j++)
            {
                int cuda;
                cin>>cuda;
            }
        if(par==0)
        {
            if(n&1)
            {
                cout<<"First\n";
            }
            else
            {
                cout<<"Second\n";
            }
            
        }
        else
        {
            if(par==1)
                cout<<"First\n";
            else
            {
                cout<<"Second\n";
            }
            
        }
        
    }
return 0;
}