#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={10,20,30,40,50};

    int mn=a[0];
    int mx=a[0];
    for(int i=0;i<5;i++)
    {
        mn=min(mn,a[i]);//min function
        mx=max(mx,a[i]);//max function
    }
    cout<<mn<<endl<<mx;

    return 0;
}
