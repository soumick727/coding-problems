#include <stdio.h>
#include <string.h>


int max_int(char *str){
    if(str==NULL) return -2;
    int max=-1;
    int n = strlen(str);
    for(int i=0; i<n; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int num = 0;
            while(i<n && str[i]>='0' && str[i]<='9')
            {
                num = num*10 + (str[i]-'0');
                i++;
            }
            if(num>max)
            {
                max = num;
            }
                
        }
    }
    return max;
}
int main()
{
    char str[]="33 milestone is either 12 or 75 km away";
    int max_val = max_int(str);
    if(max_val == -1){
        return -1;
    }
    else{
        printf("%d\n",max_val);
        return 0;
    }

}