#include <stdio.h>
#define BUFFER_SIZE 8
int numbers[BUFFER_SIZE];

int capture ();
int sorting();
int print();

int main (void)
{

capture();
sorting();
print();

}

int capture ()
{
    for (int i = 0; i< BUFFER_SIZE; i++)
    {
        printf("Please enter number: %i\n",i+1);
        scanf("%i", &numbers[i]);
    }
    printf("All numbers are entered\n");
}

int sorting()
{  
     for (int i = 0; i < BUFFER_SIZE; ++i) 
    {
        for (int j = i + 1; j < BUFFER_SIZE; ++j)
        {
            if (numbers[i] > numbers[j]) 
            {
                int a =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = a;
            }
        }
    }
}

int print()
{
    printf("The sorted numbers (from smaller to bigger) are:\n");
    for (int j =0; j< BUFFER_SIZE; j++)
    {
        printf("%i\n",numbers[j]);
    }
}