#include <iostream>

using namespace std;

int main(){

	int a, b;
	cin >> a >> b;

	if(a%10 > b%10){
		cout << a%10 << (a%100)/10 << a/100;
	}
	else if(a%10 < b%10){
		cout << b%10 << (b%100)/10 << b/100;
	}
	else{
		if(a%100/10 > b%100/10){
			cout << a%10 << (a%100)/10 << a/100;
		}
		else if(a%100/10 < b%100/10){
			cout << b%10 << (b%100)/10 << b/100;
		}
		else{
			if(a/100 > b/100){
				cout << a%10 << (a%100)/10 << a/100;
			}
			else if(a/100 < b/100){
				cout << b%10 << (b%100)/10 << b/100;
			}
		}		
	}

	return 0;
}