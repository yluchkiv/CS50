// This is C training 
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char namelist [100];
    char number [100];
}
person;

int main(void)

{

person people[3];

printf("Enter name: ");
scanf("%s", people[0].namelist);

//strcpy(people[0].namelist,scanf("%s"));
strcpy(people[0].number,"+380984042674");
strcpy(people[1].number,"+380505885950");
strcpy(people[2].number,"+380788859995");

    for (int i =0 ; i< 50; i++)
    {
        if(strcmp(people[i].namelist, "John")==0)
        {
        printf("Found: %s\n ",people[i].number);
        return 0;
        }
        else if(strcmp(people[i].namelist, "Ron")==0)
        {
        printf("Found: %s\n ",people[i].number);
        return 0;
        }
        else if(strcmp(people[i].namelist, "Bon")==0)
        {
        printf("Found: %s\n ",people[i].number);
        return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
