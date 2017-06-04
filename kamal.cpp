#include <stdio.h>
#include <conio.h>
  
int main()
    {
    int Array[100], num, i, k;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &num);
    printf("Enter %d numbers \n", num);
     
    
    for(i = 0;i < num; i++){
        scanf("%d", &Array[i]);
    }
     
    printf("Enter a number to serach in Array\n");
    scanf("%d", &k);
     
    
    for(i = 0; i < num; i++){
        if(((Array[i])==k+1)||(Array[i] == k))
		{
            printf("Number %d found at index %d\n", k, i);
            break;
        }
    }
     
    if(i == num)
	{
     printf("Number %d Not Present in Input Array\n", k);
    }
          
    getch();
    return 0;
}
