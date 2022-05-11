#include <iostream>

using namespace std;

int main(){

	int b_gear;
	cin >> b_gear;
	string check;
	for(int i=0; i<7; i++){
		int gear;
		cin >> gear;

		if(b_gear - gear == -1){
		 	check = "ascending";
			b_gear = gear;
		}
		else if(b_gear - gear == 1){
			check = "descending";
			b_gear = gear;
		}
		else{
			check = "mixed";
			break;
		}
	}
	cout << check;

	return 0;
}