#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year,month,day;
	
	printf("Enter date(mm/dd/yy):");
	scanf("%d/ %d/ %d",&month,&day,&year);
	
	printf("Dated this %d",day);
	switch (day) {
		case 1: case 21: case 31:
			 printf("st");
			 break;
		case 2: case 22:
			 printf("nd");
			 break;
	    case 3: case 23:
	    	 printf("rd");
	    	 break;
	    default : printf("th");
		     break; 	 
	}
    printf(" day of ");
    
    switch(month){
    	case 1: printf("January"); break;
    	case 2: printf("February"); break;
    	case 3: printf("March"); break;
    	case 4: printf("April"); break;
    	case 5: printf("May"); break;
    	case 6: printf("June"); break;
    	case 7: printf("July"); break;
    	case 8: printf("August"); break;
    	case 9: printf("September"); break;
    	case 10: printf("October"); break; 
    	case 11: printf("November"); break;
    	case 12: printf("December"); break;
	}
	
	printf(" , 20%.2d.\n",year);
	
	//在这里引用了基姆拉尔森计算公式 
	//令1月为13月，同时2月为14月 
	if((month == 1)||(month == 2)){
		month += 12;
		year--;
	}
	
		printf("It's ");
	int w;
	w = (day+2*month+3*(month + 1)/5+year+year/4-year/100+year/400+1)%7;
	switch (w){
		case  1:printf("Monday\n"); break;
		case  2:printf("Tuesday\n"); break;
		case  3:printf("Wednesday\n"); break;
		case  4:printf("Thursday\n"); break;
		case  5:printf("Friday\n"); break;
		case  6:printf("Saturday\n"); break;
		case  7:printf("Sunday\n"); break; 
	}

	system("pause");
	return 0;
 } 
