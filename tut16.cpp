#include<iostream>
using namespace std;
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    cout<<"The value of i is: "<<i<<endl;
    cout<<"The address of i is: "<<&i<<endl;
    cout<<"The value of j is: "<<j<<endl;
    cout<<"The value pointed by j is: "<<*j<<endl;
    cout<<"The value of k is: "<<k<<endl;
    cout<<"The value pointed by k is: "<<*k<<endl;
    cout<<"The value pointed by the value pointed by k is: "<<**k<<endl;
    return 0;
}