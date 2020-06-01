#include <stdio.h>
#include <string.h>


extern struct Contact
{
    char Name[10];
    char PhoneNumber[13];
}PhoneBook[];
extern int size;

void searchByName(){
	int j;
	char name[20];
    printf("Enter a name to search:");
    scanf("%s", name);
    for(j=0; j<size; j++){
    	if(!strcmp(name, PhoneBook[j].Name)){
    		printf("%s \t %s\n",PhoneBook[j].Name, PhoneBook[j].PhoneNumber);
    		break;
		}
		if(j == size - 1){
			printf("Oops! %s is not in the PhoneBook\n", name);
		}
	}
    
}

