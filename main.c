#include <stdio.h>
#include <stdlib.h>
int main()
{
   int year;
   int month;
   int day;//1/4/1999
   int currentyear=2021;
   int currentmonth=11;
   int currentday=18;
   int ageinyears;
   int ageinmonth;
   int ageinday;
  do{
   printf("Enter year\n");
   scanf("%d",&year);
  }while(year<=1980 || year>=2021);
  do{
    printf("Enter month\n");
   scanf("%d",&month);
  }while(month<0 || month>12);

  if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
    do{
       printf("Enter day\n");
      scanf("%d",&day);
    }while(day<0 || day>31);
  }else if(month==4 || month==6 || month==9 || month==11 ){
       do{
       printf("Enter day\n");
      scanf("%d",&day);
    }while(day<0 || day>30);
  }else if(month==2){
      if(year%4==0){
        do{
       printf("Enter day\n");
      scanf("%d",&day);
    }while(day<0 || day>29);
      }else{
          do{
       printf("Enter day\n");
      scanf("%d",&day);
    }while(day<0 || day>28);
      }

  }
  //29/11/2021
  //-
  //1/4/1999
  //--------
  //28/7/22
  //---------
  //29+30=59/11->10+12=22/2020
  //59/22/2020
  //-
  //30/12/2011
  //---------
  //29/10/9
  if(day>currentday){
    currentmonth--;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
   {
     currentday+=31;
   }
   else if(month==4 || month==6 || month==9 || month==11)
   {
     currentday+=30;
   }
   else if(month==2){
       if(year%4==0){
        currentday+=29;
       }else{
          currentday+=28;
       }
   }
  }
  if(month>currentmonth){
    currentyear--;
    currentmonth+=12;
  }

ageinyears=currentyear-year;
ageinmonth=currentmonth-month;
ageinday=currentday-day;

   printf("You are \t %d \t %c \t %d \t %c \t %d \t %c",ageinyears,'y',ageinmonth,'m',ageinday,'d');

    return 0;
}
