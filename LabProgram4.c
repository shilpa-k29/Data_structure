#include<stdio.h>
struct Mobile
{
          char model;
          char brand[20];
          int mem[40];
          int price;
};
void main()
    {
          struct Mobile s[20],temp;
          int i,j,n;
          printf("\nEnter no. of details : ");
          scanf("%d",&n);
          printf("\nEnter the Model,Brand,Memory,price ");
          for(i=0;i<n;i++)
          scanf("%s%s%d%d",&s[i].model,s[i].brand,s[i].mem,&s[i].price);
          for(i=0;i<=n-1;i++)
          {
            for(j=0;j<=n-1;j++)
            {
                if(s[j].price<s[j+1].price)
                {
                  temp=s[j];
                  s[j]=s[j+1];
                  s[j+1]=temp;
                }
            }
          }
          printf("\nThe sorted list is:\n");
          for(j=0;j<n;j++)
          printf("%s\t%s\t%d\t%d\n",s[j].model,s[j].brand,s[j].mem,s[j].price);
          getch();
        } 
 
