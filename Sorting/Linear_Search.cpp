#include <iostream>
#include <vector>
using namespace std;

bool Linear_1D(vector<int> &v, int key){
    bool result = 0;
    for (int i = 0; i < v.size(); i++){
        if (key == v[i]){
            result = 1;
            break;
        }
    }
    return result; 
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cin >> key;
    bool res = Linear_1D(v,key);
    cout << res;
    return 0;
}

