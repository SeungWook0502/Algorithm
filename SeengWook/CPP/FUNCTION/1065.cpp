#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	cin >> n;
	string k;
	int c = 99;

	if (n<100) cout << n;
	else{
		for(int i=100; i<n+1; i++){
			if((i/100 - (i/10)%10) == (i/10)%10 - (i%10)) c++;
		}
		cout << c;
	}

	return 0;
}