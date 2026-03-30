#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){
            // Convert the full string to lowercase;
            // for (char i : s){
            //     cout << i;
            // }
            vector<char> x;
            for (int i = 0; i < s.size(); i++){
                if ((s[i] >= 'a') && (s[i] <= 'z')){
                    x.push_back(s[i]);
                }
                if ((s[i] >= 'A') && (s[i] <= 'Z')){
                    x.push_back(tolower(s[i]));
                }
                if ((s[i] >= '0') && (s[i] <= '9')){
                    x.push_back(s[i]);
                }
            }
            // for (int i = 0; i < x.size(); i++){
            //     cout << x[i] << " ";
            // }
            return checker(x, 0, x.size()-1);
        }   
        
        bool checker(vector<char> &x, int left, int right){
            if (x[left] != x[right]) {
                return false;
            }
            if (left > right){
                return true;
            }
            return checker(x,left+1, right-1);
        }
};

int main(){
    string str;
    cout << "Enter string";
    cin >> str;
    cout << endl;
    Solution s;
    bool result = s.isPalindrome(str);
    cout << endl;
    cout << result;
    return 0;
}   