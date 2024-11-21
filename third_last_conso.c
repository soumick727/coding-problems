//input :
//abiocd
//output:
//b

#include <stdio.h>
#include <string.h>
void print_conso(char str[], int n)
{
    int i;
    int count = 0;
    for (i = n-1; i >= 0; i--) {
        if (str[i]!= 'a' && str[i]!= 'e' && str[i]!= 'i' && str[i]!= 'o' && str[i]!= 'u' && str[i]!= 'A' && str[i]!= 'E' && str[i]!= 'I' && str[i]!= 'O' && str[i]!= 'U') {
            count++;
            if(count == 3)
            {
                printf("%c",str[i]);
            }
        }
    }
}
int main()
{
    char str[100]="soumick";
    int n = strlen(str);
    print_conso(str,n);

}