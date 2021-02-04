#include<stdio.h>
int main()
{
    int d,s,f[20],i;
    printf("enter name of directory");
    scanf("%d",&d);
    printf("enter the size of directory");
    scanf("%d",&s);
    printf("enter file name");
    for(i=0;i<s;i++)
    scanf("%d",&f[i]);
    printf("\n");
    printf("directory\tsize\tfilename\n");
    printf("\t%2d\t\t%2d\t",d,s);
    for(i=0;i<s;i++)
    printf("%3d",f[i]);
    printf("\n");
}
