// C++ program to sort an array using selection sort
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,j,temp,n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
