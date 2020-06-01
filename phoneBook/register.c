#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char pwd[];
extern struct Contact
{
    char Name[10];
    char PhoneNumber[13];
}PhoneBook[];
extern int size;
extern int count_service;




void registerPhoneData(){
	char *str = (char*)malloc(sizeof(char)*10);
	printf("Password : ");	
	scanf("%s", str);
	if(!strcmp(pwd,str)){
		printf("New User Name: ");
		scanf("%s", PhoneBook[size].Name);
		printf("PhoneNumber: ");
		scanf("%s", PhoneBook[size].PhoneNumber);
		printf("Registered!\n");
		size++;
		
		
	}
	else{
		free(str);
    	count_service++;
        if(count_service == 1){
            printf("Not Matched !!!\n");
            registerPhoneData();
        }
        if(count_service == 2){
        	free(str);
            printf("Not Matched(twice)!!!\n");
            registerPhoneData();
        }
        if(count_service == 3){
            printf("Not Matched(3 times)!!!\n");
            printf("You are not allowed to access PhoneBook\n");
            count_service = 0;
        }

    
    
	}
	
	
	
}
