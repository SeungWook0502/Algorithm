#include <iostream>

using namespace std;

int main(){

	int n, m;
	cin >> n >> m;

	int min = 0;
	int card[n];

	for(int i=0; i<n; i++){
		cin >> card[i];
	}

	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int l=j+1; l<n; l++){
				int x = card[i]+card[j]+card[l];
				if(x > min && x <= m){
					min = x;
				}
			}
		}
	}
	cout << min;

	return 0;
}