#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ans = 9;
		
		{
			int count0 = 0, count1 = 0;
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) count0 += s[i] != '0';
				else count1 += s[i] == '1'; 
				if (count0 > count1 + (10 - i) / 2) ans = min(ans, i);
				if (count1 > count0 + (9 - i) / 2) ans = min(ans, i);
			}
		}
		
		{
			int count0 = 0, count1 = 0;
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) count0 += s[i] == '1';
				else count1 += s[i] != '0'; 
				if (count0 > count1 + (10 - i) / 2) ans = min(ans, i);
				if (count1 > count0 + (9 - i) / 2) ans = min(ans, i);
			}
		}
		
		cout << ans + 1 << '\n';
	}
}