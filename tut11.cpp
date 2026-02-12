// C++ program to search an element in an array using binary search
#include <iostream>
using namespace std;
int main()
{
     int arr[10];
     int i,n,x,lo,mid,hi,flag=1;
     cout<<"Enter the number of elements: ";
        cin>>n;
        cout<<"Enter the elements in sorted order: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the element to be searched: ";
        cin>>x;
        lo=0;
        hi=n-1;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(arr[mid]==x)
            {
                flag=0;
                cout<<"Element found at position "<<mid+1<<endl;
                break;
            }
            else if(arr[mid]<x)
                lo=mid+1;
            else
                hi=mid-1;
        }
        if(flag==1)
            cout<<"Element not found"<<endl;
            return 0;
}