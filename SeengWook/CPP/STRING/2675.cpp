#include <iostream>
#include <string>

using namespace std;

int main(){

	int n, m;
	string c;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> m >> c;
		for (int j=0; j<c.length(); j++){
			for(int l=0; l<m; l++){
				cout << c[j];
			}
		}
		cout << endl;
	}

	return 0;
}