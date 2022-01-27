#include <iostream>

using namespace std;

int main(){

	int N, T, a;
	int f, b;
	int i;

	i = 0;
	a = -1;

	cin >> N;
	T = N;

	while(a != N){
		i++;


		if (T < 10){
			a = T * 10 + T;
		}
		else{
			f = T % 10 * 10;
			b = T/10 + T%10;

			if (b >= 10){
				b = b%10;
			}

			a = f + b;
		}
		
		T = a;
	}

	cout << i;

	return 0;
}