#include<iostream>
    using namespace std;
     void show(int ar[],int x)
        {
            cout<<"The elements of the array are: ";
            for(int i=0;i<x;i++)
            {
                cout<<ar[i]<<" ";
            }
        }
        int main()
        {
            int arr[10];
            int n;
            cout<<"Enter the size of the array: ";
            cin>>n;
            cout<<"Enter the elements of the array: ";
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            show(arr,n);
            return 0;
        }
    

        