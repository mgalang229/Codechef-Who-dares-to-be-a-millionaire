#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s, s2;
		cin >> s >> s2;
		int w[n+1];
		for(int i=0; i<n+1; ++i)
			cin >> w[i];
		int cnt=0;
		for(int i=0; i<(int)s.size(); ++i)
			if(s[i]==s2[i])
				cnt++;
		if(cnt==n)
			cout << w[n];
		else {
			int prize=0;
			for(int i=0; i<=cnt; ++i)
				prize=max(prize, w[i]);
			cout << prize;
		}
		cout << "\n";
	}
}
