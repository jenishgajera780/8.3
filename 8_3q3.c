#include<stdio.h>

void main(){


  int i,p,j;
  int sum=0;


printf("enter the size of Row & colum =   ");
scanf("%d",&i);

  int a[i][i];

printf("enter the array's elements\n");
   
   for(p=0;p<i;p++)

{
   for(j=0;j<i;j++)

{
    
 printf("a[%d][%d] =  ",p,j);
 scanf("%d",&a[p][j]); } }
   for(p=0;p<i;p++){
   for(j=0;j<i;j++){
    
if(p==j){
      
    sum = sum + a[p][j]; } } }


printf(" the sum of diagonal is : %d",sum);

}