#include<stdio.h>
int main()
{
	int array[100], search,i,n;
	printf("enter the number of elements ");
	scanf(" %d",&n);
	
	printf("enter elements\n");
	for(i=0;i<n;i++)
	
    scanf(" %d",&array[i]);
    
	printf("enter the element to search ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
      {
      	 if(array[i]>=search)
      	 {
		   printf("%d is present in location %d",search,i+1);
      	 break;
         }
       }
         {
         	if (array[i] < search)
		   printf("number not found");
		 }
       
    return (0);
       
	}
