#include <iostream>

using namespace std;

int main(){

	int m, n, k;
	cin >> m >> n >> k;

	int secret_code[m];
	int input_code[n];

	for(int i=0; i<m; i++){
		cin >> secret_code[i];
	}

	for(int i=0; i<n; i++){
		cin >> input_code[i];
	}
	bool print_check = true;
	if(m<=n){
		for(int i=0; i<n; i++){
			bool check = true;
			if(input_code[i]==secret_code[0] && i+m<=n){
				for(int j=1; j<m; j++){
					if(input_code[i+j] != secret_code[j]){
						check = false;
						break;
					}
				}
			}
			else check = false;

			if(check){
				cout << "secret";
				print_check = false;
				break;
			}
		}
		if(print_check) cout << "normal";
	}
	else cout << "normal";

	return 0;
}