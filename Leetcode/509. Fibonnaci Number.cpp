#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        // O(n) Time and O(n) space
        int BruteForce(int x){
            vector<int> f = {0,1};
            for (int i = 2; i <= x; i++){
                f.push_back(f[i-1]+f[i-2]);
            }
            return f[x];
        }
        
        //O(n) time and O(1) space
        int Optimal(int x){
            int f0 = 0;
            int f1 = 1;
            int fx;
            for (int i = 2; i <= x; i++){
                fx = f0 + f1;
                f0 = f1;
                f1 = fx;
            }
            return fx;
        }
        

        //O(2^n) time and O(N) space
        int Recursive(int x){
            if (x == 0){
                return 0;
            }          
            if (x == 1){
                return 1;
            }
            return Recursive(x-1) + Recursive(x-2);
        }
};


int main(){
    int n;
    cout << "F0 = 0, F1 = 1" << endl;
    cout << "Enter the n-th Fibonnaci Number to find: ";
    cin >> n;
    cout << endl;
    Solution s;
    s.BruteForce(n);
    s.Optimal(n);
    s.Recursive(n);
    return 0;
}

