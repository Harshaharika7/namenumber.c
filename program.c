#include <stdio.h>

#include <string.h>

typedef struct  Phonebook

{

char name [25];

char number [11];

}phonelist;

void main (void){

phonelist list;

strcpy (list.name, "Bhuvanesh");

strcpy(list.number, "9944359848");

printf("Phonelist Name: %s\n", list.name);

printf("Phonelist Number: %s\n", list.number);
  
}
