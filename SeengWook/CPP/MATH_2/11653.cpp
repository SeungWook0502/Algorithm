#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int i = 2;
	
	while(n!=1){
		if(n%i==0){
			cout << i << '\n';
			n/=i;
			i = 2;
		}
		else i++;
	}
	
	return 0;
}