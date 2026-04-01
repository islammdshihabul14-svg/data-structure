#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]= {10,20,30,40,50};
    int n = 5;
    int pos = 2;
    int item = 100;
for(int i=n;i>pos+1;i--)
{
    arr[i]=arr[i-1];
}
arr[pos+1]=item;
n++;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
