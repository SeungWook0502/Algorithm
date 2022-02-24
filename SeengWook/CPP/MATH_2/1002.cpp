#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int x1, y1, x2, y2, r1, r2;
		cin >>  x1 >> y1 >> x2 >> y2 >> r1 >> r2;
		
		int t1 = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
		int t2 = r2+r1;
		
		if(t1==0 && r2 == r1) cout << '-1';
		else if(t1>t2) cout << '0';
		else if(t1==t2) cout << '1';
		else if(t1<t2) cout << '2';
	}
	return 0;
}

