#include<stdio.h>
void main()
{
int a[3][3];
int i,j;
clrscr();
printf("Input elements in the matrix:");
        for(i=0;i<3;i++)
        {
            for(j=o;j<3;j++)
            {
                  printf("\n element [%d],[%d]:",i,j);
                  scanf("%d",&a[i][j]);
             }
         }
 printf("\n  the matrix is:\n");
       for(i=0;i<3;i++)
       {
       printf("\n");
              for(j=0;j<3;j++)
              {
              printf("%d\t",a[i][j]);
              }
        }
 printf("\n\n");
 getch();
 }
