#include<stdio.h>
struct st
{
    char dname[10];
    char sdname[10][10];
    char fname[10][10][10];
    int ds,sds;
}
dir[10];
void main()
{
    int i,j,k,n;
    printf("enter number of directories:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter directory %d name:",i);
        scanf("%s",&dir[i].dname);
        printf("enter size of directory: ");
        scanf("%d",&dir[i].ds);
        for(j=0;j<dir[i].ds;j++)
        {
            printf("enter file name: ");
            scanf("%s",&dir[i].fname[j]);
        }
    }
    printf("\n DIR_NAME\tSIZE\tFILES\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t",dir[i].dname,dir[i].ds);
            for(j=0;j<dir[i].ds;j++)
        {
            printf("%s",dir[i].fname[j]);
            printf("\t");
        }
        printf("\n");
       }
}
