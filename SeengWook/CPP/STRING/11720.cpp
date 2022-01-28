#include <iostream>

using namespace std;

int main(){

	int n, t;
	string s;

	cin >> n;
	cin >> s;
	t = 0;
	for (int i=0; i<n; i++){
		t += ((int)s[i])-48;
	}
	cout << t;
	return 0;
}