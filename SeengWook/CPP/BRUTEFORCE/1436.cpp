#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	cin >> n;

	int i = 666;
	int cnt = 0;

	while(true){
		if(to_string(i).find("666") != string::npos){
			cnt++;
			if(cnt==n) break;
		}
		i++;
	}
	cout << i;

	return 0;
}