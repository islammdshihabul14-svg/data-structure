#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int value = 100;
    int pos = 2;
    for(int i=n;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;
    n++;
    
    for(int i=0;i<n;i++)
    {if(i == pos)
        {
            arr[i] = value;
        }
        cout<<arr[i]<<" ";
    }
}
