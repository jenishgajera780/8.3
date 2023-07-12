
#include<stdio.h>

void main()
{
	
	int n,j;
	float avg,sum=0;
	
	printf("enter the array's row size :- ");
	scanf("%d",&n);
    
    printf("enetr number of cols size :- ");
    scanf("%d",&j);
    
int z[n][j];
int h,l;
for(h=0;h<n;h++);

    {     for(l=0;l<j;l++)
	
{	printf("z[%d][%d]",h,l);
	scanf("%d",&z[h][l]);    
	sum = sum + z[h][l];
	
}	}
avg=sum/(n*j);
printf("%.2f",avg);   
   

}
