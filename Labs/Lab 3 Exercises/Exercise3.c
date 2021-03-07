#include <stdio.h>
int buffer(int i);
int main()
{
int day,month,year,leap,nonleap,total,final;
printf("Enter day:\n");
scanf("%d",&day);
printf("Enter month:\n");
scanf("%d",&month);
printf("Enter year:\n");
scanf("%d",&year);
leap=(year-2000)/(4);
nonleap=year-2000-leap;
int c=buffer(month-1);
total=(leap*366)+(nonleap*365)+c+day-1;
if(year%4==0)
{
  if(month>2)
  {
    final=(total+1)%7;
  }
  else
  {
    final=total%7;
  }
  
}
else
{
 final=(total+1)%7;
}

switch(final)
{
  case 0:
  printf("Saturday");
  break;
  case 1:
  printf("Sunday");
  break;
  case 2:
  printf("Monday");
  break;
  case 3:
  printf("Tuesday");
  break;
  case 4:
  printf("Wednesday");
  break;
  case 5:
  printf("Thursday");
  break;
  case 6:
  printf("Friday");
  break;
}

}
int buffer(int i)
{
   int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(i==0)
  {
    return 0;
  }
  else{
    return x[i-1]+buffer(i-1);
  }
return 0;
}

