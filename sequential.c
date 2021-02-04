#include<stdio.h>
#include<string.h>
 struct sequence
 {
     char n[20];
     int i,size;
 }s[20];
 int create(int);
 int del(int);
 void display(int);
 int main()
 {
     int x=0,j=0;
     while(1)
     {
         printf("1.creation\n2.delete\n3.display\n4.exit");
         printf("\nenter one option:");
         scanf("%d",&x);
         switch(x)
         {
             case 1:j=create(j);
             break;
             case 2:j=del(j);
             break;
             case 3:display(j);
             case 4:exit(1);
             default:printf("\nwrong option\n");
         }
     }
 }
 int create(int j)
 {
     int m,v;
     j++;
     w:printf("\n enter filename:");
     scanf("%s",&s[j].n);
     m=1;
     while(m<j)
     {
         v=strcmp(s[j].n,s[m].n);
         if(v==0)
         {
             printf("file already exist\n please enter other name");
             goto w;
         }
         m++;
     }
   printf("\nenter field and size:");
   scanf("%d%d",&s[j].i,&s[j].size);
   return(j);
 }
 int del(int j)
 {
     j--;
     return(j);
 }
 void display(int j)
 {
     int k,l;
     printf("\ filename\tfield\tsize");
     for(k=1;k<=j;k++)
     {
         printf("\n%s\t%d\t%d",s[k].n,s[k].i,s[k].size);
         for(l=s[k].i;l<=s[k].size;l++)
         printf("\t%d",l);
     }
    }
