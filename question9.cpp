#include <iostream>
#include <stdio.h>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        bool f=true;
        unordered_set<int> st;
        for (int i = 0; i < q; i++)
        {
            char x;
            int y;
            cin >> x;
            cin>>y;
            if (x == '+')
            {
                if (st.find(y) != st.end())
                {
                    f=false;;   
                }
                else{
                    st.insert(y);
                    if(st.size()>m)
                    {
                        f=false;
                    }
                }
                
            }
            else if (x == '-')
            {
                if (st.find(y) == st.end())
                {
                    f=false;
                }
                else{
                    st.erase(y);
                }
            }
        }
        if(!f)cout<<"Inconsistent\n";
        else cout<<"Consistent\n";
        
    }
    return 0;
}