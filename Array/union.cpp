#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {3,3,2,2,6};
    const int n = v1.size();
    int key = 0;
    for (int j = 0; j < v2.size(); j++){
        for (int i = 0; i < n; i++ ){
            if (v2[j] == v1[i]){
                key = 1;
            }
        }
        if (key != 1) v1.push_back(v2[j]);
        key = 0;
    }
    for(int i: v1){
        cout << i << " ";
    }
    return 0;
}