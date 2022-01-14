#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	cin.ignore();
	while (tt--) {
		string s;
		getline(cin, s);
		int n = s.size();
		string ans = "";
		for (int i = 0; i < n; i++) {
			if (s[i] == ' ' || i == n - 1) {
				int id = (s[i] == ' ' ? i - 1 : i);
				string temp = "";
				bool checker = true;
				while (s[id] != ' ' && id >= 0) {
					temp += string(1, s[id]);
					checker &= (s[id] >= 'a' && s[id] <= 'z');
					id--;
				}
				reverse(temp.begin(), temp.end());
				temp += " ";
				if (!checker) {
					for (int j = 0; j < (int) temp.size(); j++) {
						temp[j] = toupper(temp[j]);
					}
				}
				ans += temp;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
