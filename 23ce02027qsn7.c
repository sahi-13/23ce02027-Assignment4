#include<stdio.h>
int main(){
    int age;("Enter age:");
    scanf("%d",&age);
    if (age<5)
    printf("Free ticket");
    if(age>=5&&age<13)
    printf("20");
    if(age>=13&&age<60)
    printf("50");
    if(age>=60)
    printf("40");
    return 0;

}
