#include <iostream>

using namespace std;

int main(){

	int a, n;
	int max_n = 0;

	for (int i=0; i<9; i++){
		cin >> a;
		if (a > max_n){
			n = i + 1;
			max_n = a;
		}
	}
	cout << max_n << "\n" << n;

	return 0;
}