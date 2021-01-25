
#include<stdio.h>
int main()
{
int arr[ 99];
int element,i;
 printf("Enter number of element: ");
///enter size of array
 scanf("%d",&element);
///enter elements any order
 for(i=0;i<element;i++){
 scanf("%d",&arr[i]);

 }
int temp=0,j;
printf("Before sorting the elements :");
for(i=0;i<element;i++){
 printf("%d , ",arr[i]);

 }


for(i=0;i<element-1;i++){
for(j=0;j<element-i-1;j++){
     if(arr[j]>arr[j+1])
///swap large and small elements
     { temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]= temp; }
   }

}
printf(" \n==================");

printf("\nAfter sorting the elements :");
for(i=0;i<element;i++)
{ printf("%d , ",arr[i]);  }
printf("\n\n\n");
return 0;}

