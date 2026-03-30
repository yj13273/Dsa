/*
Pattern:
* * *
* * *
* * *
*/

#include <iostream>
using std::cout;

class Solution{
    public: 
        void print_loop(int n){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    cout << "* ";
                }
                cout << "\n";
            }
        }
        
        void print_using_2_func(int n){
            outer(0, n);
        }

        void outer(int i, int n){
            if (i >= n) return;  
            inner(i, n, 0);
            cout << "\n";
            return outer( i + 1, n);
        }

        void inner(int i, int n, int j){
            if (j >= n) return;
            cout << "* ";
            return inner(i, n, j + 1);
        }
};
int main(){
    int n = 5;
    Solution s;
    s.print_loop(n);
    cout << "\n";
    s.print_using_2_func(n);
    return 0;
}