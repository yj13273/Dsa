#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int low, int high, int mid){
    vector<int> temp,left,right;
    for (int i = low; i < mid + 1; i++){
        left.push_back(v[i]);
    }
    for (int j = mid + 1; j < high + 1; j++ ){
        right.push_back(v[j]);
    }
    int i = 0,j = 0;
    while(i < left.size() && j < right.size()){
        if (left[i] <= right[j]){
            temp.push_back(left[i]);
            i++;
        }
        else {
            temp.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size()) {
        temp.push_back(left[i]);
        i++;
    }

    while (j < right.size()) {
        temp.push_back(right[j]);
        j++;
    }

    for (int i = low; i < high+1; i++){
        v[i] = temp[i-low];
    }
}

void merge_div(vector<int> &v, int low, int high){
    if (low >= high) return;
    int mid = low + (high-low) / 2;
    
    merge_div(v, low, mid); //left
    merge_div(v,mid+1, high); //right
    
    merge(v,low,high,mid);
    
}

int main(){
    vector<int> v = {3,4,5,6,7,2,45,6,7};
    merge_div(v,0,v.size()-1);
    for (int i : v){
        cout << i << " ";
    }
}