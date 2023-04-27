#include<stdio.h>
int main()
{
    int i;
    int j = 0;
    while (scanf("%d", &i) != EOF)
    {
        if(i > j){
            j = i;
        }
    }
    printf("%d\n", j);
    return 0;
}