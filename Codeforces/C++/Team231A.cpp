#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j=0;
        for(int i=1;i<=3;i++)
        {
            cin>>t;
            if(t==1)
                j++;

        }
        if(j>1)
            k++;
    }
    cout<<k<<endl;
}
