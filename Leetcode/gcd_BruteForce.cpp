#include <bits/stdc++.h>
using namespace std;

class Factors {
public:
    vector<int> getFactors(int x) {
        vector<int> f;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0)
                f.push_back(i);
        }
        return f;
    }
};

class BruteForce {
public:
    void getNums(const vector<int>& x) {
        nums = x;
    }

    int computeGCD() {
        Factors f;
        vector<int> common = f.getFactors(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            vector<int> curr = f.getFactors(nums[i]);
            vector<int> temp;

            for (int a : common) {
                for (int b : curr) {
                    if (a == b)
                        temp.push_back(a);
                }
            }
            common = temp;
        }
        return *max_element(common.begin(), common.end());
    }

private:
    vector<int> nums;
};

int main() {
    BruteForce x;
    x.getNums({10, 20, 30});
    cout << x.computeGCD();
    return 0;
}
