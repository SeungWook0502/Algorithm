#include<iostream>
#include<vector>

using namespace std;

int main(){



	return 0;
}

long long sum(std::vector<int> &a){
	long long t=0;
	for (vector<int>::iterator iter = a.begin(); iter < a.end(); iter++){
		t += *iter;
	}

	return t;
}