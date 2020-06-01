#include <stdio.h>
#include <string.h>


extern struct Contact
{
    char Name[10];
    char PhoneNumber[13];
}PhoneBook[];
extern int size;

void deleteByName(){
	int k;
	int h;
	char name[20];
    printf("Enter a name to delete:");
    scanf("%s", name);
    for(k=0; k<size; k++){
    	if(!strcmp(name, PhoneBook[k].Name)){
    		for(h=k;h<size-1;h++){
    			PhoneBook[h] = PhoneBook[h+1];
			}
			printf("%s is deleted\n", name);
    		size = size - 1;
    		break;
		}
		if(k == size-1){
		printf("Oops! %s is not in the PhoneBook\n", name);
		}
		}
	}
