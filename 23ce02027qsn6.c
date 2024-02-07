#include<stdio.h>
int main(){
    int a,b,ch,r;
    printf("Enter the two integers:\n");
    scanf("%d%d",&a,&b);
    printf("1=Addition\n");
    printf("2=Subtraction\n");
    printf("3=Multiplication\n");
    printf("4=Division\n");
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        r=a+b;
        printf("RESULT=%d",r);
        break;
        case 2:
        r=a-b;
        printf("RESULT=%d",r);
        break;
        case 3:
        r=a*b;
        printf("RESULT=%d",r);
        break;
        case 4:
        r=a/b;
        printf("RESULT=%d",r);
        break;
        default:
        printf("Invalid choice.");
        break;
    }
    return 0;
}