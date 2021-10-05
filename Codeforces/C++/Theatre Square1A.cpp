#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    ll n,m,a,total;
    cin>>n>>m>>a;
    if(n%a==0&&m%a==0)
        total=(n/a)*(m/a);
    else if(n%a>0&&m%a==0)
        total=((n/a)+1)*(m/a);
    else if(n%a==0&&m%a>0)
        total=(n/a)*((m/a)+1);
    else if(n%a>0&&m%a>0)
        total=((n/a) +1)*((m/a)+1);
     cout<<total<<endl;
}
