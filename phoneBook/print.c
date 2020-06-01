#include <stdio.h>

extern struct Contact
{
    char Name[10];
    char PhoneNumber[13];
}PhoneBook[];
extern int size;



void printAll(){
	int i;
    printf("Print all contants in the PhoneBook\n");
    for(i=0;i<size;i++){
    	printf("%s",PhoneBook[i].Name);
    	printf("\t\t");
    	printf("%s",PhoneBook[i].PhoneNumber);
    	printf("\n");
	}
}
