#include <iostream>

using namespace std;

int main(){

	int n, a;

	cin >> n;

	int min_n = 1000001;
	int max_n = -1000001;

	for (int i=0; i<n; i++){
		cin >> a;
		if (a > max_n){
			max_n = a;
		}
		if (a < min_n){
			min_n = a;
		}
	}
	cout << min_n << " " << max_n;

	return 0;
}