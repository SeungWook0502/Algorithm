#include <iostream>

using namespace std;

int fibonacci(int k, int n);

int main(){

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int k, n;
		cin >> k;
		cin >> n;
		cout << fibonacci(k, n) << endl;
	}

	return 0;
}

int fibonacci(int k, int n){

	if(k==0) return n;
	if(n==1) return 1;
	return (fibonacci(k-1, n)+fibonacci(k, n-1));
}