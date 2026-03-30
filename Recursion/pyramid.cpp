/*
Pattern:
   *
  ***
 *****
*******
*/

#include <iostream>
using std::cout;

class Solution{
    public: 
        void print_loop(int n){
            for (int i  = 0; i < n; i++){
                for (int j = 0; j < (n - i - 1); j++){
                    cout << " ";
                }
                for (int k = 0; k < (2*i + 1); k++){
                    cout << "*";
                }
                cout << "\n";
            }
        }
        
        void print_using_2_func(int n){
            outer(0,n);
        }

        void outer(int i, int n){
            if (i >= n) return;  
            inner(i,n,0,0);
            inner(i,n,0,1);
            cout << "\n";
            return outer(i + 1, n);
        }

        void inner(int i, int n, int j, int mode){
            if (mode == 0){
                if (j >= n - i - 1) return;
                cout << " ";
                return inner(i, n, j + 1, 0);
            }else if(mode == 1){
                if (j > 2*i) return;
                cout << "*";
                return inner(i, n, j+1, 1);
            }
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