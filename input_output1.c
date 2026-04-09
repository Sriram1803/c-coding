#include <stdio.h>

int main() {
     int size;
    printf("enter the number of elements to store : \n");
    scanf("%d", &size);
    int a[size];// {0,0,0,0,0}
    for (int i=0;i<=size-1;i++)
    {
       printf("enter the %d value : \n",(i+1));
       scanf("%d",&a[i]);
    }
    for (int i=0;i<=size-2;i++)
    {
        if ( a[i]+1==a[i+1])
      {
          printf("%d,",a[i]);
      }
        else if (i!=0 && a[i]-1==a[i-1])
        {
            printf("%d \n",a[i]);
        }
    }
    return 0;
}