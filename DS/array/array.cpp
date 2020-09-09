#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b)
{
    return (a > b);
}

int main()
{
    int n;
    cin>>n;
    //Dynamic initialization of array
    int *ar = new(nothrow) int[n];
    if(ar==NULL)
    {
        cout<<"Memory allocation failed"<<endl;
    }
    else
    {
       for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n,comparator);
        for(int i =0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        delete [] ar;
    }
    return 0;
}