#include <iostream>
#include <string>

using namespace std;

int main(){

	string s;
	cin >> s;
	int c = 0;

	for(int i=0; i<s.length(); i++){
		if(s[i]=='c' && s.length()>i+1){
			if(s[i+1]=='-'){
				i++;
				c++;
			}
			else if(s[i+1]=='='){
				i++;
				c++;
			}
			else c++;
		}
		else if(s[i]=='d' && s.length()>i+1){
			if(s[i+1]=='z' && s.length()>i+2){
				if(s[i+2]=='='){
					i+=2;
					c++;
				}
				else c++;
			}
			else if(s[i+1]=='-'){
				i++;
				c++;
			}
			else c++;
		}
		else if(s[i]=='l' && s.length()>i+1){
			if(s[i+1]=='j'){
				i++;
				c++;
			}
			else c++;
		}
		else if(s[i]=='n' && s.length()>i+1){
			if(s[i+1]=='j'){
				i++;
				c++;
			}
			else c++;
		}
		else if(s[i]=='s' && s.length()>i+1){
			if(s[i+1]=='='){
				i++;
				c++;
			}
			else c++;
		}
		else if(s[i]=='z' && s.length()>i+1){
			if(s[i+1]=='='){
				i++;
				c++;
			}
			else c++;
		}
		else c++;
	}
	cout << c;
	return 0;
}