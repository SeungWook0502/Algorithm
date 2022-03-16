#include <iostream>

using namespace std;

int main(){

	int one, two, three;
	cin >> one >> two >> three;

	bool one2two, one2three, two2three, all;

	if(one == two && two == three) cout << 10000+one*1000;
	else if(one == two || one == three) cout << 1000+one*100;
	else if(two == three) cout << 1000+two*100;
	else{
		if(one>two){
			if(one>three) cout << one*100;
			else cout << three*100;
		}
		else{
			if(two>three) cout << two*100;
			else cout << three*100;
		}
	}

	return 0;
}