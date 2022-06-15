#include<stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

char scanned[BUFFER_SIZE];
char sent[BUFFER_SIZE];
char latitude [BUFFER_SIZE];

int index_Write = 0;
int index_Read = 0;

void to_scan();
void to_transfer(char c[]);
void to_sent(char C);
void to_print();
void select_GGA(char imput_message[]);


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
        
    }
    printf("All Entered\n");
   // to_transfer(scanned);
   select_GGA(scanned);
    

}


void to_transfer(char c[])
{
    for (int i = 0; i < strlen(c); i++)
	{
		to_sent(c[i]);
	}

}

void to_sent(char C)
{
    sent[index_Write] = C;
    index_Write++;


    if(index_Write >= BUFFER_SIZE)
    {
        to_print(sent);
        index_Write = 0;
        printf("Buffer is Sent\n");

    }

}
void select_GGA(char imput_message[])
{
    for (int i = 0; i <strlen(imput_message); i++)
    {
        if(imput_message[i]=='1')
        {
            for (int j = 0; j <=i+4; j++)
            {
                 latitude [j] = imput_message[i+4];
                 i++;

            }

        }
    }
    to_print(latitude);
}

void to_print(char S[])
{
    printf("Each character presented below:\n");
    for (int j =0; j< BUFFER_SIZE; j++)
    {
        printf("%c\n",S[j]);
    }

}