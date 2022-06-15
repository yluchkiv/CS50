#include<stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

char scanned[BUFFER_SIZE];
char sent[BUFFER_SIZE];

int index_Write = 0;
int index_Read = 0;

void to_scan();
void to_sent(char C);
void to_print();


int main()
{

to_scan();

}


void to_scan()
{
    printf("Please enter TEXT\n");
    for (int i = 0; i< BUFFER_SIZE; i++)
    {
        
        scanf("%c", &scanned[i]);
        to_sent(scanned[i]);

        if(strlen(scanned)>=BUFFER_SIZE)
        {
            printf("No more place\n");

        }
    }
    printf("All Entered\n");
    
    

}




void to_sent(char C)
{
    sent[index_Write] = C;
    index_Write++;
    to_print(sent);


    if(index_Write >= BUFFER_SIZE)
    {
        
        index_Write = 0;
        printf("Buffer is Sent\n");

    }

}


void to_print(char S[])
{
    printf("The character is presented below:\n");
    for (int j =0; j< BUFFER_SIZE; j++)
    {
        printf("%c\n",S[j]);
    }


}