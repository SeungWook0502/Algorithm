#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int n;
	int c=0;
	char t;
	bool b;
	string s;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> s;
		vector<bool> v(26, true);
		for(int j=0; j<s.length(); j++){

			if(v[s[j]-97]||t==s[j]){ //처음받거나 받던 알파벳인 경우
				v[s[j]-97]=false;
				b=true;
			}
			else if(!(v[s[j]-97]) && t!=s[j]){
				b=false;
				break;
			}

			t=s[j]; //전 알파벳 기억
		}
		if(b){
			c++;
		}
	}
	cout << c;
}