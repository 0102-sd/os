#include<stdio.h>
#include<string.h>
void main()
{	
    char p[10][10];
    int et[10],count=0,ret,found=0,m;
    int tt[10],tott=0,qt,tot=0,wt[10],i,n,pt[10],j,temp1,pr[10];
    float avg=0,avgt=0;
    printf("enter quantum time:\n");
    scanf("%d",&qt);
    printf("enter the no of processes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter processes %d name:\n",i+1);
        scanf("%s",&p[i]);
        printf("enter burst time:");
        scanf("%d",&pt[i]);
    }
    m=n;
    wt[0]=0;
    i=0;
    do
    {
        if(pt[i]>qt)
        {
            ret=pt[i]-qt;
            strcpy(p[n],p[i]);
            pt[n]=ret;
            et[i]=qt;
            n++;
        }
        else
        {
            et[i]=pt[i];
        }
        i++;
        wt[i]=wt[i-1]+et[i-1];
    }while(i<n);
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(p[i],p[j])==0)
            {
                count++;
                found=j;
            }
        }
        if(found!=0)
        {
            wt[i]=wt[found]-(count*qt);
            count=0;
            found=0;
        }
    }
    for(i=0;i<m;i++)
    {
        tot+=wt[i];
        tt[i]=pt[i]+wt[i];
        tott+=tt[i];
    }
    avg=(float)tot/m;
    avgt=(float)tott/m;
    printf("p_name\tp_time\tp_wt\tp_tt\n");
    for(i=0;i<m;i++)
    {
        printf("%s\t%d\t%d\t%d\n",p[i],pt[i],wt[i],tt[i]);
    }
    printf("total wt:%d\navgwt:%f\ntt:%d\navg tt:%f\n",tot,avg,tott,avgt);
}