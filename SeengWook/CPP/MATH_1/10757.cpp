#include <iostream>
#include <string>

using namespace std;

int main(){

	string a, b;
	string t = "";
	int n;

	cin >> a >> b;

	if(a.length()>b.length()) n = a.length();
	else n = b.length();

	for(int i=(n)-a.length(); i>0; i--) a = "0" + a;
	for(int i=(n)-b.length(); i>0; i--) b = "0" + b;

	int r = 0;
	for(int i=1; i<=n; i++){
		if((((int)a[n-i]-48) + ((int)b[n-i]-48) + r)>=10 ){
			t = to_string(((int)a[n-i]-48) + ((int)b[n-i]-48) + r - 10) + t;
			r = 1;
		}
		else{
			t = to_string(((int)a[n-i]-48) + ((int)b[n-i]-48) + r) + t;
			r = 0;
		}
	}
	if(r==1) t = "1" + t;
	cout << t;

	return 0;
}