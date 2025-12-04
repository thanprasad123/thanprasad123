#include<stdio.h>
int main() {
    int m1,n1,m2,n2,k,i,j;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&m1,&n1);
    printf("Enter number of rows and columns for second matrix:");
    scanf("%d%d",&m2,&n2);
    int a[m1][n1],b[m2][n2],c[m1][n2];
    if(n1!=m2){
        printf("Matrix multiplication not possible");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            c[i][j]=0;
            for(k=0;k<n1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
