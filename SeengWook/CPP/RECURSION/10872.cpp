#include <iostream>

using namespace std;

int pac(int n);

int main() {

	int n, r;
	cin >> n;
	
	r = pac(n);
	cout << r;

	return 0;
}

int pac(int n){
	
	if(n==1) return n;	
	else if(n==0) return 1;
	
	return n * pac(n-1);
	
}
