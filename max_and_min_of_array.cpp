#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=*max_element(arr,arr+n);
    cout<<mx<<endl;
    int mn=*min_element(arr,arr+n);
    cout<<mn<<endl;
}