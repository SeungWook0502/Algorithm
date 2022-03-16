#include <iostream>

using namespace std;

int *fibo(int n, int list[]);

int main() {

	int n;
	int n_list[2] = {0, 1};
	int *r;
	cin >> n;
	if(n==0) cout << "0" << '\n';
	else if(n==1) cout << "1" << '\n';
	else {
		r = fibo(n-1, n_list);
		cout << r[1] << '\n';
	}
	
	
	return 0;
}

int *fibo(int n, int list[]){
	
	int *t;
	int temp;
	
	if(n==0) return list;
	t = fibo(n-1, list);
	temp = t[0];
	t[0] = t[1];
	t[1] = temp+t[0];
	
	return t;
}