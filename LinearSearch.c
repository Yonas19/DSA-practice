#include <stdio.h>
int linearSearch(int arr[],int n, int target) {
    for (int i = 0; i < n; i++){
        return i; // found
    }

    return -1; //not found 
}

int main(){
    int arr[] = {4, 2, 7, 1, 9};
    int n = 5;
    int target = 4;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        printf("Found at the index %d \n", result);
    else
        printf("Not found \n");

    return 0;
}