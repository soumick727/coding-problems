// #include <stdio.h>
// int main()
// {
//     int a=0,n=0,b;
//     while(n<=4)
//     {
//         n=n+1;
//         if(n==3)
//         {
//             printf("Hello World");
//         }
//     }
//     printf(n);
// }

#include <stdio.h>
int main()
{
    int m;
    for(m=3;m!=0;m--)
    {
        if(m==-3)
        {
            printf("Hello World");
            break;
        }
        printf("%d ",m);
        m=m-1;
    }
}