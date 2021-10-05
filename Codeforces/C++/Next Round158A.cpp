#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int array[n];

    for(int i=0;i<n;i++)
        cin>>array[i];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>0&&array[i]>=array[t-1])
            j++;
    }
    cout<<j<<endl;


}
