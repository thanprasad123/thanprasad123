#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    char word[100];
    printf("enter the word");
    scanf("%s",word);
    int i,n;
    n=strlen(word);
    for(i=0;i>n/2;i++){
        if(word[i]!=word[n-i-1]){
            printf("not palindrome");
            return 0;}
        }
    printf("palindrome");
    return 0;
    }