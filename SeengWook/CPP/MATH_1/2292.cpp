#include <iostream>

using namespace std;

int main(){

	int n;
	int d=0;

	cin >> n;

	if(n==1) cout << 1;
	else{
		int i;
		for(i=1; n>d+1; d+=6*i, i++);
		cout << i;
	}

	return 0;
}