// C++ program to sort an array using bubble sort
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,j,temp,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted elements: ";
    for(i=0;i<n;i++)    
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}