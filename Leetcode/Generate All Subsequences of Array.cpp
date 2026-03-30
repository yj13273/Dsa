#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

class Solution{
    public:
        // vector<pair<int,int>> Generate(vector<int> v){
        //     vector<pair<int,int>> x;
        //     for (int i = 0; i < v.size(); i++){
        //         for (int j = i; j < v.size(); j++){
        //             x.push_back(make_pair(v[i], v[j]));
        //         }
        //     }
        //     return x;
        // }

        vector<pair<int,int>> Generate(vector<int> v){
            vector<pair<int,int>> x;
            for (int i = 0; i < v.size(); i++){
                for (int j = i; j < v.size(); j++){
                    x.push_back(make_pair(v[i], v[j]));
                }
            }
            return x;
        }

};
int main(){
    vector<int> v = {1,2,3};
    Solution s;
    vector<pair<int,int>> w = s.Generate(v);
    for (int i = 0; i < w.size(); i++){
        cout << "{ " << w[i].first << "," << w[i].second << " }" << endl;
    }
    return 0; 
}