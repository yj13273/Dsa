#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    vector<vector<int>> v2;
    for (int k = 1; k < n; k++){
        for (int l = 0; l + k - 1 < n; l++){
            vector<int> subset;
            int r = l + k - 1;
            for (int j = l; j <= r; j++){
                subset.push_back(v[j]);
            }
            v2.push_back(subset);
            cout << endl;
        }
    }
    for(int i = 0; i < v2.size(); i++){
        for (int j = 0; j < v2[i].size(); j++){
        cout << v2[i][j];
        }
        cout << endl;
    }
    return 0;
}



