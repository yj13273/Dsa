/*
Pattern:
1 
0 1 
1 0 1 
0 1 0 1
*/

#include <iostream>
using std::cout;

class Solution{
    public: 
        void print_loop(int n){
            for (int i = 0; i < n; i++){
                for (int j = 0; j <= i; j++){
                    (i % 2) ? ((j % 2) ? cout << "1 " : cout << "0 "): ((j % 2) ? cout << "0 " : cout << "1 ");
                }
                cout << "\n";
            }
        }
        
        void print_using_2_func(int n){
            outer(0,n);
        }

        void outer(int i, int n){
            if (i >= n) return;  
            inner(i, n, 0);
            cout << "\n";
            return outer( i + 1, n );
        }

        void inner(int i, int n, int j){
            if (j > i) return;
            (i % 2) ? ((j % 2) ? cout << "1 " : cout << "0 "): ((j % 2) ? cout << "0 " : cout << "1 ");
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