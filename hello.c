#include <stdio.h>

int main()
{
 int year,month,ex;
 char a;
 
 scanf("%d%c%d",&year,&a,&month);
 
 if((year%4==0&&year%100!=0) || year%400==0)
 {
  ex=1;
 }
 else
 {
 ex=0;
 }
 switch(month){
  case 4:
  case 6:
  case 9:
  case 11:
   printf("30\n");
   break;
  case 2:
   printf("%d\n",28+ex);
   break;
  default: 
   printf("31\n");
   
 }
 return 0;
}