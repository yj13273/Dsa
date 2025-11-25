#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int linear(int arr[], int x){
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == x){
            printf("Element found at %d position", i);
            return 0;
        }
    }
    return -1;
}

int binary(int arr[], int x){
    int left = 0;
    int right = SIZE - 1;
    int mid;
    while (left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == x){
            printf("Element found at %d position", mid);
        }
        if (arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d\n", &arr[i]);
    }
    int x;
    printf("Enter element to be searched for: ");
    scanf("%d\n", &x);
    int searchresult_l = linear(arr, x);
    if (searchresult_l == -1) printf("Element not found.\n");
    int searchresult_b = binary(arr,x);
    if (searchresult_b == -1) printf("Element not found.\n");
    return 0;
}
