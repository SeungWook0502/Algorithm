#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";

    for(int i=0; i<new_id.size(); i++){
    	int id_split_int = (int)new_id[i];
    	if(id_split_int >= (int)'A' && id_split_int <= (int)'Z') new_id[i]+=32;
    	if((new_id[i]>='a' && new_id[i]<='z') || (new_id[i]<='9' && new_id[i]>='0') || new_id[i]=='-' || new_id[i]=='_' || new_id[i]=='.') {}
    	else {
    		if(i==0) new_id = new_id.substr(1, new_id.size());
    		else if(i==new_id.size()-1){
    			new_id = new_id.substr(0, new_id.size()-1);
    			i--;
    		}
    		else{
    			new_id = new_id.substr(0,i) + new_id.substr(i+1, new_id.size());
    			i--;
    		}
    	}
    }

    for(int i=0; i<new_id.size(); i++){
    	int j;
    	for(j=i; j<new_id.size() && new_id[j]=='.'; j++) {}
		if(i<j-1){
			if(i==0){
				new_id = new_id.substr(j, new_id.size());
			}
			else if(j==new_id.size()){
				new_id = new_id.substr(0, i);
				break;
			}
			else{
				new_id = new_id.substr(0,i) + new_id.substr(j-1, new_id.size());
				i--;
			}
		}
    }
	if(new_id.size() == 0 || (new_id.size()==1 && new_id[0] =='.')) new_id = "a";
    if(new_id.size() == 0) new_id = "a";
    if(new_id.size()>15) new_id = new_id.substr(0,15);
	if(new_id[0]=='.') new_id = new_id.substr(1,15);
    if(new_id[new_id.size()-1]=='.') new_id = new_id.substr(0,new_id.size()-1);
    while(new_id.size() < 3) new_id += new_id[new_id.size()-1];

    answer = new_id;
    return answer;
}

int main(){

	string ii = "=.=";

	// ii = ii.substr(0,1) + ii.substr(4,10);
	// cout << ii << '\n';

	ii = solution(ii);



	return 0;
}