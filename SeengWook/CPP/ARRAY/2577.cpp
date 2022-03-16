#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

	int a, b, c;
	int n;
	int n_list[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	cin >> a >> b >> c;
	n = a*b*c;

	string st = to_string(n);

	for (int i=0; i<st.length(); i++){
		n_list[(int)st[i]-48]++;

	}
	for (int i=0; i<10; i++){
		cout << n_list[i] << "\n";
	}

	return 0;
}