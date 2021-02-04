
#include<stdio.h>
#include<string.h>
void main()
{
    char p[10][5],temp[5];
    int i,j,pt[10],totwt=0,pr[10],temp1,n,wt[10],turn[10],totturn=0,tot=0;
    float wtavg=0,avgturn=0,avg=0;
    printf("enter the number of processes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter process %d name:\n",i+1);
        scanf("%s",p[i]);
        printf("enter the process time");
        scanf("%d",&pt[i]);
        printf("enter the priority:");
        scanf("%d",&pr[i]);
    }
      for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pr[i]>pr[j])
            {
                temp1=pr[i];
                pr[i]=pr[j];
                pr[j]=temp1;
                
                temp1=pt[i];
                pt[i]=pt[j];
                pt[j]=temp1;
                
                strcpy(temp,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],temp);
            }
        }
    }
    wt[0]=0;
    
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+pt[i-1];
        tot=tot+wt[i];
    }
    avg=(float)tot/n;
      
    for(i=0;i<n;i++)
    {
        turn[i]=pt[i]+wt[i];
        totturn=totturn+turn[i];
    }
    avgturn=(float)totturn/n;
    printf("p_name\t p_time\t priority_time\t w_time\t turn_time\t\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n",p[i],pt[i],pr[i],wt[i],turn[i]);
        
    }
    printf("total waiting time = %d\n avg waiting time =%f\n turn around time=%d\n avgturntime=%f\n",tot,avg,totturn,avgturn);
}
