#include <iostream>

using namespace std;

int main(){

	int n, i;
	bool b = true;
	cin >> n;
	for(i=n/5; i>=0; i--){
		if((n-(i*5))%3 == 0){
			b = false;
			break;	
		}
	}
	if(b) cout << -1;
	else cout << (i)+(n-(i*5))/3;

	return 0;
}