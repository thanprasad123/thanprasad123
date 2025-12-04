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
    for (i=0;i<n;i++){
        if(a[i]==key){
            printf("the element is found at position %d",i+1);
            return 0;
        }
        else{
                printf("element not found");
            }

        }
    }