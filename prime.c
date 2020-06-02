
#include<stdio.h>

int main()
{
  int no,i=2,j;
  printf("Enter Number\n");
  scanf("%d",&no);
  
  while(i=no/2)
  {
      if(no%i==0)
      {
        flag=1;
        break;
      }
  }
  if(flag==1)
  {
    printf("Enter Number is Not Prime\n");
  }
  else
  {
    printf("Enter Number is Prime\n");
  }
  
}
