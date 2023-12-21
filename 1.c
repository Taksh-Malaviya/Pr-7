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
	printf("1. add\n");
	printf("2. sub\n");
	printf("3. div\n");
	printf("4. multi\n");
	printf("5. modulo\n");
	printf("6. exit\n");
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
