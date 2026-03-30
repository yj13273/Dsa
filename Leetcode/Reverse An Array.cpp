#include <iostream>
#include <vector>
#include <utility>
using namespace std;
class Solution{
    public:
        vector<int> reverse(vector<int> &v, int left, int right){
            if ( left >= right){
                return v;
            }
            swap(v[right], v[left]);
            return reverse(v, left+1, right-1);
        }
};

int main(){
    vector<int> v = {1,2,3,4,5};
    Solution s;
    vector<int> c = s.reverse(v,0,v.size()-1);
    for (int n : c){
        cout << n;
    }
    return 0;
}