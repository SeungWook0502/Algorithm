#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	string s;
	int c=0;
	getline(cin, s);

	for(int i=0; i<s.length(); i++){
		if(s[i]==' ' && i != 0 && i+1 != s.length()) c++;
	}
	if(s==" "){
		cout << 0;
	}
	else{
		cout << ++c;
	}

	return 0;
}