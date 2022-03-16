#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	cin >> n;

	int f=0,b=0;
	for(int i=0; i<n; i++){
		if(stoi(to_string(f)+"666") < stoi("666"+to_string(b))){
			cout << stoi(to_string(f)+"666") << '\n';
			f++;
		}
		else{
			cout << stoi("666"+to_string(b)) << '\n';
			b++;
		}
	}

	return 0;
}