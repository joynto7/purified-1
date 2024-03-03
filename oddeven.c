#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n%2==0){
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");
    }
    
    return 0;
}
