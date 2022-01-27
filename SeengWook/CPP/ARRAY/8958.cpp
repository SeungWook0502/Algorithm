#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	string ox;

	cin >> n;

	for (int i=0; i<n; i++){
		int s = 0;
		cin >> ox;
		int c=1;
		for (int j=0; j<ox.length(); j++){
			if (ox[j]=='O'){
				s+=c;
				c++;
			}
			else{
				c=1;
			}
		}
		cout << s << endl;
	}
	return 0;
}