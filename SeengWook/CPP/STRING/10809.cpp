#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	vector<int> n_list(26,-1);
	string s;

	cin >> s;

	for (int i=0; i<s.length(); i++){
		if (n_list[(int)s[i]-97]==-1){
			n_list[(int)s[i]-97] = i;
		}
	}

	for (vector<int>::iterator i = n_list.begin(); i<n_list.end(); i++){
		cout << *i << ' ';
	}

	return 0;
}