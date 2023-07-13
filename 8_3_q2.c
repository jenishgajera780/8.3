
#include<stdio.h>

void main(){

int i,o,p,c;

printf("enter the size of Row =   ");
scanf("%d",&i);

printf("enter the size of colum =   ");
scanf("%d",&o);

int a[i][o];
printf("enter the A elements\n");
for(p=0;p<i;p++){
   for(c=0;c<o;c++){
    
    printf("a[%d][%d] =  ",p,c);
    scanf("%d",&a[p][c]);
      }
}
int b[i][o];


printf("enter the B elements\n");
for(p=0;p<i;p++){
   for(c=0;c<o;c++){
    
    printf("b[%d][%d] =  ",p,c);
    scanf("%d",&b[p][c]);
      }
}

int d[i][o];


printf("array C is : \n");
for(p=0;p<i;p++){
   for(c=0;c<o;c++){
    
    d[p][c]=a[p][c]+b[p][c];
     printf("%d ",d[p][c]);
      }
printf("\n");
}
}