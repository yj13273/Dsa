#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getNums(int a, int b){
            int n1 = max(a,b);
            int n2 = min(a,b);
            int r;
            do{
                r = n1 % n2;
                n1 = n2;
                n2 = r;
            }while (r != 0);
            return n1;
        }
        int getMultipleNums(const vector<int> a){
            int gcd = getNums(a[0], a[1]);
            for (int i = 0; i < a.size(); i++)
        }
};

int main(){
    Solution sol;
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int result = sol.getNums(a,b);
    cout << "GCD of " << a << " and " << b << "is " << result << endl;
    
    vector<int> a = {2,3,5};
    sol.getMultipleNums(a);
    return 0;
}
