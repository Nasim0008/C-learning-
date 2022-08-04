//Check diagonal matrix or matrix

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    if(row!=col)//square or not
    {
        cout<< "Not Diagonal matrix";
        return 0;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(i==j) continue;
           if(a[i][j]>0)
           {
               cout<< "Not Diagonal element"<<endl;
               return 0;
           }
        }
    }
    cout<< "Yes,It is a diagonal matrix"<<endl;

    return 0;



}

