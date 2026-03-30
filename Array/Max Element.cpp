#include <iostream>
#include <vector>
using namespace std;

int maxi(vector<int> &v){ //O(N) time and O(N) space;
    int max = *(v.begin());
    for (int i = 0; i < v.size(); i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int mini(vector<int> &v){ //O(N) time and O(N) space;
    int min = *(v.begin());
    for (int i = 0; i < v.size(); i++){
        if (v[i] < min){
            min = v[i];
        }
    }
    return min;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int max = maxi(v);
    cout << "Max = " << max << endl;
    int min = mini(v);
    cout << "Min = " << min << endl;
    return 0;
}