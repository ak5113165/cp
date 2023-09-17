#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int count=0;
//     string vowel="aeiou";
//    for(auto c:s)
//    {
//        if((find(vowel.begin(),vowel.end(),c)!=vowel.end())||isdigit(c)&&(c-'0')%2)
//        {
//            count++;
//        }
//    }
//     cout<<count<<"\n";
//     return 0;
// }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==1)
        {
            cout<<n/2+1<<"\n";
        }
        else{
            cout<<n/2<<"\n";
        }
    }
    return 0;
}