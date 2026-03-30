/*
Pattern:
* * * *
* * *
* *
*

*/

#include <iostream>
using std::cout;

class Solution{
    public: 
        void print_loop(int n){
            for (int i = n; i > 0; i--){
                for (int j = n; j > n - i; j--){
                    cout << "* ";
                }
                cout << "\n";
            }
        }
        
        void print_using_2_func(int n){
            outer(n);
        }

        void outer(int i){
            if (i < 0) return;  
            inner(i,0);
            cout << "\n";
            return outer( i - 1);
        }

        void inner(int i, int j){
            if (j >= i) return;
            cout << "* ";
            return inner(i, j + 1);
        }
        
    
};
int main(){
    int n = 4;
    Solution s;
    s.print_loop(n);
    cout << "\n";
    s.print_using_2_func(n);
    cout << "\n";
    return 0;
}