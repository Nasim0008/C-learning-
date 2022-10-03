#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
   int n;
   cout<< "Enter the N: ";
   cin>>n;
   cout<< "All prime number from 1 to N: ";
   for(int i=1;i<=n;i++)
   {
      if(isprime(i))
       {
           cout<<i<< " ";
       }
   }
   cout<<endl;
}
