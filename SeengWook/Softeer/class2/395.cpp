#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int bag_max, n, result;
pair<int,int> bag[1000000];

int main(){

    cin >> bag_max >> n;

    for(int i=0; i<n; i++){
        int gem, price;
        cin >> gem >> price;
        bag[i]={price, gem};
    }

    sort(bag, bag+n);

    for(int i = n-1; i >= 0, bag_max>0; i--){
        int k = min(bag[i].second, bag_max);
        bag_max -= k;
        result += k * bag[i].first;
    }

    cout << result;
}