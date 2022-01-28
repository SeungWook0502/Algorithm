#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int n;
	int c=0;
	char t;
	string s;
	vector<bool> v(26, true)

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> s;
		for(int j=0; j<s.length(); j++){
			if(v[s[j]-97]||t==s[j]){
				v[s[j]-97]=false;
				t=s[j];
			}
			else{
				c++;
			}
		}
	}
}