#include<stdio.h>
int main()
{
    int m,n,p,q,ro,co,i,j;
    printf("enter the size of arrays \n");
    scanf("%d %d %d %d",&m,&n,&p,&q);
    printf("enter the elements of arrays \n");
    int a[m][n],b[p][q],c[m][q],x[m][q],y[m][q];
    if(n==p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("%d ",b[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                  x[i][j]=a[i][0]*b[0][j];
                }
            }
            for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
               y[i][j]=a[i][1]*b[1][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
               c[i][j]=x[i][j]+y[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
               printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("multiplication is not possible");
    return 0;

}
