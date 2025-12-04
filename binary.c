#include<stdio.h>
int main(){
    int n ,i,key,low,high,mid;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    printf("key element is:\n");
    scanf("%d",&key);

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
        printf("element found at position %d",mid+1);
        return 0;}
        else if(a[mid]<key)
        high=mid-1;
        else
        low=mid+1;


    }
    printf("element not found");
    return 0;



    
}