#include<stdio.h>
int main(){
    int a,b,c,d,x;
    printf("Enter a 3-digit number:");
    scanf("%d",&x);
    a=x/100;
    b=(x-(a*100))/10;
    c=x-(a*100)-(b*10);
    d=(a*a*a)+(b*b*b)+(c*c*c);
    switch(d==x){
        case 1:
        printf("The entered number is an armstrong number.\n");
        break;
        case 0:
        printf("The entered number is not an armstrong number.\n");
        break;
        
    }
    return 0;
}
