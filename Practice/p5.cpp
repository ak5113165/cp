#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <string>
using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1;
//     cin >> s2;
//     int i = s1.size() - 1;
//     int j = s2.size() - 1;
//     int w = 0;
//     while (i > 0 && j >0)
//     {
//         if (s1[i] == s2[j])
//         {
//             w++;
//             i--;
//             j--;
//         }
//         else
//         {
//             break;
//         }
//     }
//     cout << s1.size() + s2.size() - 2 * w << "\n";
//     return 0;
// }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ok=1;
        for(int i=0;i<k;i++)
        {
            ok=ok&&s[i]==s[n-i-1];
        }
        cout<<(ok&&2*k<n?"YES":"NO");
        cout<<endl;
    }
    return 0;

}