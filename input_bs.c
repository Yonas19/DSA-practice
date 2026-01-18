#include <stdio.h>

int binarySearch(int arr[], int n, int target){

    // binary search logi 
    int left =0, right = n -1 ;
    
    while (left <= right ){
        int mid = left + (right- left ) /2;
        
        if(arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else 
            right = mid - 1;
    }
    
    return -1;
    
}

int main(){
   
    
    int target;
    int n;
    //to determin the length of tha array
    printf("Enter the number of elements u want");
    scanf("%d", &n);
    int arr[n];

    // to add the inputs to the array
    for (int i =0 ; i < n; i++){
        printf("Enter the element");
        scanf("%d",&arr[i]);
    }
     
    //choose target
    printf("Enter your target number ");
    scanf("%d", &target);
    
    int result = binarySearch(arr,n, target);
    
    if (result != -1)
        printf("Found at index %d", result);
    else
        printf("not found");
        
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}