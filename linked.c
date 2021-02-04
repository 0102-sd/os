#include<stdio.h>
#include<conio.h>
typedef struct file
{
    char filename[10];
    int start,size,block[10];
}file;
int main()
{
    file f[10];
    int i,j,n;
    printf("enter number of files");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter filename");
        scanf("%s",&f[i].filename);
        printf("enter starting block");
        scanf("%d",&f[i].start);
        f[i].block[0]=f[i].start;
        printf("enter size of block");
        scanf("%d",&f[i].size);
        for(j=0;j<f[i].size;j++)
        {
            printf("enter block numbers:");
            scanf("%d",&f[i].block[j]);
        }
    }
     printf("file\tstart\tsize\tblock\n");
     for(i=0;i<n;i++)
     {
         printf("%s\t%d\t%d\t",f[i].filename,f[i].start,f[i].size);
         for(j=0;j<f[i].size;j++)
         printf("%d--->",f[i].block[j]);
         printf("-1\n");
     }
     printf("\n");
}

