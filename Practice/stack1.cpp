#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        for(int i=0;i<n;i++)
        {
            cin>>str;
        }
        stack<char>s;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                s.push(str[i]);
            }
            else{
                for(int i=0;i<2;i++)
                {
                    s.pop();
                }
            }
        }
        if(s.size()==0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }
    return 0;
}