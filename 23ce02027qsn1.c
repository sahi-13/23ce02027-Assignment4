#include<stdio.h>
int main(){
    int x;
    printf("Enter the integer:");
    scanf("%d",&x);
    
    switch(x&1){
        case 0:
        printf("The given integer is even.");
        break;
        case 1:
        printf("The given integer is odd.");
        break;
    }
    return 0;

}
