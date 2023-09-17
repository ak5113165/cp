#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<stack>
using namespace std;
void print(stack<char>st)
{
    if(st.empty())
    {
        return ;
    }
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    print(st);
    st.push(x);

}
int main()
{
    string s="97214378";
    stack<char>st;
    int k=4;
    for(int i=0;i<s.size();i++)
    {
       while(!st.empty()&&st.top()<=s[i])
       {
           if(k>0)
           {

        //    cout<<st.top();
           st.pop();
           k--;
           }
       }
       st.push(s[i]);
    }
    while(k<0)
    {
        st.pop();
    }
    cout<<st.top();
    st.pop();
    return 0;
}