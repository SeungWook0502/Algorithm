#include <iostream>

using namespace std;

int main(){

	int x, i;
	int n = 0;
	cin >> x;
	i--;
	for(i = 1; n<x; i++) n+=i;
	if(i%2==0){
		cout << i-(x-(n-i))+1 << "/" << x-(n-i)-1 << endl;
	}
	else{
		cout << x-(n-i)-1 << "/" << i-(x-(n-i))+1 << endl;	
	}

	return 0;
}