#include <iostream>

using namespace std;

int main(){

	string s;
	int t=0;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		int n = (int)s[i];
		if(n < 68){
			t+=3;
		}
		else if(n < 71){
			t+=4;
		}
		else if(n < 74){
			t+=5;
		}
		else if(n < 77){
			t+=6;
		}
		else if(n < 80){
			t+=7;
		}
		else if(n < 84){
			t+=8;
		}
		else if(n < 87){
			t+=9;
		}
		else{
			t+=10;

		}
	}

	cout << t;

	return 0;
}