#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	
	int x1, y1, x2, y2, x3, y3, rx, ry;
	cin >> x1>> y1 >> x2 >> y2 >> x3 >> y3;
	
	if(x1==x2) rx = x3;
	else if(x1==x3) rx = x2;
	else rx = x1;

	if(y1==y2) ry = y3;
	else if(y1==y3) ry = y2;
	else ry = y1;
	
	cout << rx << ' ' << ry;
	
	return 0;
}
