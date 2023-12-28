/*Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0*/
#include<stdio.h>

int  add (int a, int b){
	return a+b;
}
int sub (int a, int b){
	return a-b;
}
int div (int a, int b){
	return a/b;
}
int multi (int a, int b){
	return a*b;
}
int modulo (int a, int b){
	return a%b;
}

main(){
	
	int a,b,c;
		do{
	printf("\n------------------\n");
	printf("Press 1 for. add\n");
	printf("Press 2 for. sub\n");
	printf("Press 3 for. div\n");
	printf("Press 4 for . multi\n");
	printf("Press 5 for. modulo\n");
	printf("Press 6 for. exit\n");
	printf("\n------------------\n");
	printf("enter number : \n");
	scanf("%d",&c);
	
	
	if(c>=1 && c<=5){
		
		printf("enter value A :");
	    scanf("%d",&a);
		printf("enter value B :");
		scanf("%d",&b);
		
		switch(c){
		
		case 1:
			printf("add = %d",add(a,b));
		break;
			case 2:
			printf("sub = %d",sub(a,b));
		break;
			case 3:
			printf("div = %d",div(a,b));
		break;
			case 4:
			printf("multi = %d",multi(a,b));
		break;
		case 5:
			printf("modulo = %d",modulo(a,b));
		break;
		
	
 		}
	
		}  
								
	}
	while(c!=6);
}     
