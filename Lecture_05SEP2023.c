// Lecture_05SEP2023.c

#include<stdio.h>
#include<stdbool.h>
int main(){

	//&& is and condition        || is or condition

/*
	for (int i=1,i<4,i++){
		printf("%i\t",i);
	}
	printf("\n");
	for (int i=4,i<9,i++){
		printf("%i\t",i);
	}
	printf("\n");
	for (int i=9,i<12,i++){
		printf("%i\t",i);
	}
	*/

	//Nesting (Putting a loop in another loop)
	/*
	int i=0;
	for(int row =0;row<4;row++){
		i++;

		for(int column=0; column<4;column++){
			printf("\n"); 
			row=row-4;
		}
	printf("%i\t",i);
	}*/
	/*
	int k=0;
	int j=3;
	for (int i = 0;i < 3;i++){
		for (;j>1;j--){
			printf("*\t");
		}
		k=j-2;
		printf("\n");
	}
*/
	/*
	for(int i=1;i<4;i++){
		for(int j = 1; j<i; j++){
			printf("%i",j);
		}
		printf("\n");
	}
*/

/*Break statement - When you want to reach the end of your data prematurely
					When you want to detect errors

			Breaks can be put in loops to stop a program from continuing
*/


//This is to print out numbers divisible by something

	/*
int num=0;
while (num<100){
	if(num % 17 == 0){
		printf("%i is divisible by 17\n",num);
		//break;
	}
	num++;
}

printf("You are outside of the loop");
*/
/* Continue skips as iteration and contues on the nect iteration*/
/*
int num;
while(num!=0){
printf("Try to guess the correct numer\n");
scanf("%i",&num);
if(num==0){
	printf("\nToo EZ, Chris Breezy");
	}
	if(num<0){
		printf("\nTry a little higher\n");
	}
	if(num>0){
		printf("Youre about as high as Snoop Dogg, try a lower number\n");
	}
}
// if-else could be used for if you want something to happen when the statement is not true
else does not need a condition, it just catches whatever is left
*/
	/*
	int num;
	printf("Enter a number\n");
scanf("%i",&num);
if (num<=50 && num>=10){  //You can also right this as: if (num>50 || num<10){
printf("\nIn Range");
}
else printf("\nOut of Range");
*/
	return 0;
}