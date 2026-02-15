//sum of elements of 2D array using function
#include<iostream>
using namespace std;
void calc(int ar[10][10],int x,int y)
{
    int sum=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            sum=sum+ar[i][j];
        }
    }
        cout<<"The sum of the elements of the array is: "<<sum<<endl;
}
int main()
{
    int arr[10][10];
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    calc(arr,m,n);
    return 0;
}