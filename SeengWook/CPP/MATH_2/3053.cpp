#include<iostream>

#define PI 3.1415926535897932

using namespace std;

int main(){

	double n;
	cin >> n;
	n=n*n;
	
	cout.precision(6);
	cout << fixed;
	cout << n*PI << "\n" << n*2;
	

	return 0;
}
