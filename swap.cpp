//swap function use in array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={10,41,2,36,51},n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);//swap function
        }
    }

    cout<< "Accending order : ";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " " ;
    }

    cout<< "\nDecending Order : ";

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            swap(a[i],a[j]);//swap function
        }
    }
      for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " " ;
    }

}
