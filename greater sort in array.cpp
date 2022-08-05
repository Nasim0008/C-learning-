//No increasing sort by using greater comparator

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={10,20,30,4,05,060,7090};
    sort(a,a+7,greater<int>());//non increasing sort
    for(auto u:a)
    {
        cout<<u<< " ";
    }
}
