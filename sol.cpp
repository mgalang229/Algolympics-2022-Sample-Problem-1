#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c;
	cin >> c;
	cin.ignore();
	for (int qq = 0; qq < c; qq++) {
		string s;
		getline(cin, s);
		vector<string> vec;
		string temp = "";
		for (int i = 0; i < (int) s.size(); i++) {
	  	if (s[i] == ' ') {
	  		vec.push_back(temp);
	  		temp = "";
	  	} else {
		  	temp += string(1, s[i]);
		  }
		}
		vec.push_back(temp);
		for (int i = 0; i < (int) vec.size(); i++) {
			bool checker = true;
			for (int j = 0; j < (int) vec[i].size(); j++) {
				checker &= (vec[i][j] >= 'a' && vec[i][j] <= 'z');
			}
			if (!checker) {
				for (int j = 0; j < (int) vec[i].size(); j++) {
					vec[i][j] = toupper(vec[i][j]);
				}
			}
		}
		for (auto& e : vec) {
			cout << e << " ";
		}
		cout << '\n';
	}
	return 0;
}