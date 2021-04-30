#include <stdio.h>
#include<string.h>

int main(void) {
    char a[256][256];
    int i=0,j=0,k=0,n;

    while(i<256 && fgets(a[i],256,stdin) != NULL)
    {
        n = strlen(a[i]);
        if(n >0 && a[i][n-1] == '\n')
        a[i][n -1] = '\0';
        i++;
    }

    for(j=0;j<i;j++)
    {
        char max[256];
        strcpy(max,a[j]);
        for(k=j+1;k<i;k++)
        {
            if(strcmp(a[k],max) < 0)
            {
                char tmp[256];
                strcpy(tmp,a[k]);
                strcpy(a[k],max);
                strcpy(max,tmp);
            }
        }
        strcpy(a[j],max);
    }

    for(j=0;j<i;j++)
    {
        printf("%s\n",a[j]);
    }
    return 0;
}