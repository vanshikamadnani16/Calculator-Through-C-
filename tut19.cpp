#include<iostream>
using namespace std;
int reverse(int x)
{
    int rev=0,r;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    return rev;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    reverse(num);
    cout<<"The reverse of the number is: "<<reverse(num)<<endl;
    return 0;
}