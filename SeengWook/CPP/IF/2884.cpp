#include <iostream>

using namespace std;

int main(){

	int a, b;

	cin >> a >> b;

	if (b<45){
		b = 60-(45-b);
		if (a==0){
			a = 23;
		}
		else{
			a--;
		}
	}
	else{
		b = b-45;
	}

	cout << a << " " << b;

	return 0;
}