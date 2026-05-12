#include<iostream>
#include<stack>
using namespace std;
bool balanced(string str)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            s.push(ch);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            
            if((ch==')' && s.top()=='(') || (ch=='}' && s.top()=='{') || (ch==']' && s.top()=='['))
            {
            s.pop();
        }
        else
        {
            return false;
        }
    }
}
    return s.empty();
}
    int main()
    {
        string str="[{()}]";
        if(balanced(str))
        {
            cout<<"Balanced"<<endl;
        }
        else
        {
            cout<<"Not Balanced"<<endl;
        }
    }

