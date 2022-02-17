#include <iostream>

using namespace std;

int main(){
	
	int n;
	int cnt = 0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int number;
		bool cmp = true;
		cin >> number;
		
		if(number != 1){
			cout << number << endl;
			for(int j=1; j<number; j++){
				if(number%j == 0 && j != 1){
					cmp = false;
					break;
				}
			}
		}
		if(cmp && number != 1) cnt++;
	}
	cout << cnt;
	return 0;
}
