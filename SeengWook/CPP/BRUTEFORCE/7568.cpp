#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int x[n][2];
	int c[n];

	for(int i=0; i<n; i++){
		cin >> x[i][0] >> x[i][1];
		cout << x[i][0] >> x[i][1];
	}

	for(int i=0; i<n; i++){
		c[i]=0;
		for(int j=0; j<n; j++){
			if(x[i][0] > x[j][0] && x[i][1] > x[j][1]){
				c[i]++;
			}
		}
	}

	for(int i=0; i<n; i++) cout << c[i] << '\n';

	return 0;
}