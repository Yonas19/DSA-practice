#include <stdio.h>
int linearsearch(int arr[],int n, int target){
    for (int i=0; i< n; i++){
        if(arr[i]==target)
            return i;
        
    }
    return -1;
    
}
int main(){
    int n,target;
    printf("Enter the number of elements u want");
    scanf("%d",&n);
    int arr[n];  
    for (int i=0; i< n; i++){
        printf("Enter the element");
        scanf("%d",&arr);
    }
    
    printf("Enter the target ");
    scanf("%d",&target);
    
    int result = linearsearch(arr,n,target);
    
    if(result != -1)
        printf("The number is found at index : ",& result);
    else
        printf("Not found");
    
    return 0;
}