
#include<stdio.h>
int main()
{
    int sum,f[10],temp=0,assign[30],max[30],available,need[30],i,j,n,m,p[10];
    printf("Enter the number of resources \n");
    scanf("%d",&m);
    printf("Enter the number of process \n");
    scanf("%d",&n);
    printf("Instances for the resources\n");
    for(i=0;i<m;i++)
    scanf("%d",&p[i]);
    printf("Assigned the resources to process \n");
    for(i=0;i<n;i++)
    scanf("%d",&assign[i]);
    printf("Enter the max utilization of resources \n");
    for(i=0;i<n;i++)
    scanf("%d",&max[i]);
    for(i=0;i<n;i++)
    {
        f[i]=0;
        temp=temp+assign[i];
    }
    for(i=0;i<n;i++)
    need[i]=max[i]-assign[i];
    sum=100*p[0]+10*p[1]+1*p[2];
    available=sum-temp;
    printf("\n process \t allocation \t max \t need \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t\t %d\t %d\t\n",i,assign[i],max[i],need[i]);
    }
   printf("The available resources are %d\t",available);
   for(i=0;i<n;i++)
   if(available>need[i] && f[i]==0)
   {
       available=available+assign[i];
       f[i]=1;
   }
if(sum==available)
printf("\n systems in safe state\n");
else
printf("deadlock occured\n");
}
