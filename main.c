#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	
	int ID;
	char name[20];
	double grade; //floatµµ °¡´É
	
};

int main (void){
	
	struct student stud = {10, "hyeonjeong", 4.3};
	struct student *stdPtr;
	
	stdPtr = &stud;

	
	stdPtr->ID = 17;
	strcpy(stdPtr->name, "lee");
	stdPtr->grade = 2.0;
	
	printf("ID : %i, name : %s, grade : %lf\n",
	stdPtr->ID, stdPtr->name, stdPtr->grade);
	
	system("PAUSE");
	return 0;
}