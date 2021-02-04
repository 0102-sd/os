 #include<stdio.h>
void main()
{
  int p[10];
  int tot=0,wt[10],i,n,pt[10],turn[10],totturn=0;
  float avg=0,avgturn=0;
  printf("enter the number of processes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter process %d name:\n",i+1);
        scanf("%d",&p[i]);
        printf("enter the process time");
        scanf("%d",&pt[i]);
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
    printf("p_name\t p_time\t w_time\t turn_time\t\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],pt[i],wt[i],turn[i]);
        
    }
    printf("total waiting time = %d\n avg waiting time =%f\n turn around time=%d\n avgturntime=%f\n",tot,avg,totturn,avgturn);
}
