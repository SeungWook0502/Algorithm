#include <iostream>

using namespace std;

void starLine(int n, int x, int y);

int main(){
		
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			starLine(n,i,j);
		}
		cout << '\n';
	}
	
	return 0;
}

void starLine(int n, int x, int y){

	if (x / n % 3 == 1 && y / n % 3 == 1) {
		cout << " ";
	}
	else if (n / 3 == 0) {
		cout << "*";
	}
	else {
		starLine(n/3, x, y);
	}
}