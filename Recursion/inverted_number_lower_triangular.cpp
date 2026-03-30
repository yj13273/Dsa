/*
Pattern:
1 2 3 4 
1 2 3 
1 2 
1 
*/

#include <iostream>
using std::cout;

class Solution{
    public: 
        void print_loop(int n){
            for (int i = n -1; i >= 0; i--){
                for (int j = 0; j <= i; j++){
                    cout << j + 1 << " ";
                }
                cout << "\n";
            }
        }
        
        void print_using_2_func(int n){
            outer(n - 1,n);
        }

        void outer(int i, int n){
            if (i < 0) return;  
            inner(i, n, 0);
            cout << "\n";
            return outer( i - 1, n );
        }

        void inner(int i, int n, int j){
            if (j > i) return;
            cout << j + 1 << " ";
            return inner(i, n, j + 1);
        }
};
int main(){
    int n = 4;
    Solution s;
    s.print_loop(n);
    cout << "\n";
    s.print_using_2_func(n);
    return 0;
}