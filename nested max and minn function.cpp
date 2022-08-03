//find min and max function for multiple variable

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=100,b=200,c=300,d=400;
   int minimum=min(a,min(b,min(c,d)));//nested min function
   int maximum=max(a,max(b,max(c,d)));//nested max function
    cout<< "Minimum = "<<minimum<<endl<< "Maximum = "<<maximum;

    return 0;
}


