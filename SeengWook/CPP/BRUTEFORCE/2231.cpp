#include <iostream>
#include <string>
using namespace std;

int main(){

	int n;
	int r = 0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		string x = to_string(i);
		int y = stoi(x);
		for(int j=0; j<x.length(); j++){
			y += (int)x[j] - 48;
		}

		if(n==y){
			r = i;
			break;
		}
	}

	cout << r;


	return 0;
}