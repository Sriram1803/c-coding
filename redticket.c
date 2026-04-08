#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the a,b,c : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==2 && b==2 && c==2)
    {
        printf("10");
    }
    else if(a==b && b==c && c==a)
    {
        printf("5");
    }
    else if ("a!=b && a!=c")
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}