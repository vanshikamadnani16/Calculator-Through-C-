#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=0;i<4;i++)
    {
        for(k=i;k<3;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++)
        {
            cout<<"* ";
        }
        for(l=i;l<3;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}