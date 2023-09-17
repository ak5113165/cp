#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a[4];
        for(int i=0;i<4;i++) 
            cin>>a[i];
        
        if(a[1]==a[2] && a[0]==a[1] && a[2]==a[3])
            cout<<"0"<<endl;
        else if((a[0]==a[1] && a[1]==a[2] && a[1]!=a[3]) || (a[0]==a[1] && a[1]==a[3] && a[2]!=a[3]) || (a[0]==a[2] && a[2]==a[3] && a[0]!=a[1] )|| (a[1]==a[2] && a[2]==a[3] && a[0]!=a[1]))
            cout<<"1"<<endl;
        else 
            cout<<"2"<<endl;
    }
    return 0;
}