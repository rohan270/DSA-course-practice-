#include<stdio.h>
int main()
{
    int count = 1;
    for (int i = 0;i<=4;i++){
        printf("%d",count);
        for (int j =0;j<=i;j++){
            printf("*");

        }
        printf("\n");
        count++;
    }
    return 0;
}