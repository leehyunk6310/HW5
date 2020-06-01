// array of sturcure
#ifndef phone_h

#define phone_h


struct Contact
{
    char Name[10];
    char PhoneNumber[13];
};

struct Contact PhoneBook[50];

int size;  // store the actual numbers of PhoneBook

#endif
