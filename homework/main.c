#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int m,n,i,j,a,b,c,d;
    srand(time(NULL));
    printf("M ve N degerlerini giriniz.\n");
    scanf("%d%d",&m,&n);
    int dizi1[m][n];
    printf("IMAGE MATRIX\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            dizi1[i][j]=rand()%256;
            printf("%5d",dizi1[i][j]);
        }
        printf("\n");
    }
    int dizi2[3][3] = {{0,-1,0},{-1,5,-1},{0,-1,0}};
    int dizi3[m][n];
    int s=0;
    for(a=0,c=0;a<8;a++,c++)
    {
            for(b=0,d=0;b<8;b++,d++)
            {
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        s+=dizi1[i+a][j+b]*dizi2[i][j];
                    }
                }
                dizi3[c+1][d+1]=s;
                s=0;
            }
    }
    printf("OUTPUT MATRIX\n");
    for(c=1;c<m-1;c++)
    {
        for(d=1;d<n-1;d++)
        {
            printf("%5d",dizi3[c][d]);
        }
        printf("\n");
    }





    return 0;
}
