#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondmax(vector<int> &v){
    if (v.size() < 2) return -1;

    int result;
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < v.size(); i++){
        if (v[i] > max1){
            max2 = max1;
            max1 = v[i];
        }
        if ((v[i] < max1) && (v[i] > max2)){
            max2 = v[i];
        }
    }
    if (max2 == INT_MIN) return -1;
    return max2;
}

int secondmin(vector<int> &v){
    if (v.size() < 2) return -1;

    int result;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < v.size(); i++){
        if (v[i] < min1){
            min2 = min1;
            min1 = v[i];
        }
        if ((v[i] > min1) && (v[i] < min2)){
            min2 = v[i];
        }
    }
    if (min2 == INT_MAX) return -1;
    return min1;
}

int main(){
    vector<int> v = {5,535,5,4,2,5};
    int result = secondmax(v);
    cout << result << endl;
    int result2 = secondmin(v);
    cout << result2;
    return 0;
}