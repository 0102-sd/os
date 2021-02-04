#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p_size,size,flag;
    int ch;
    printf("enter the size of memory");
    scanf("%d",&size);
    ch=1;
    while(ch==1)
    {
        printf("enter the size of job to be executed:");
        scanf("%d",&p_size);
        flag=0;
        if(size>=p_size)
        {
            flag=1;
            size=size-p_size;
            printf("job is executed\n");
            printf("free space is %d\n",size);
        }
        else
        {
            printf("no free space is available\n");
        }
        if(flag==0)
            printf("this job cannot be executed\n");
        printf("enter ur choice(1 or 0)");
        scanf("%d",&ch);
    }
    
    return 0;
    }

