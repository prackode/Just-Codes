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
        int n,m;
        set<int>s,f;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            f.insert(x);
        }
        
        int flag=0;
auto itr3=f.begin();
while(itr3!=f.end())
{
    if(s.find(*itr3)!=s.end())
        {
            cout<<"YES\n";
            cout<<"1 "<<*itr3<<"\n";
            flag=1;
            break;
        }
    itr3++;
}
if(flag==0)
{
    cout<<"NO\n";
}


    }
    return 0;
}