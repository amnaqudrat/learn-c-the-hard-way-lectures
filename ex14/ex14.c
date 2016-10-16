#include <stdio.h>// standerd input output library for several functions
#include <ctype.h> // c standerd function

// forward declarations
int can_print_it(char ch); // function return interger value can print character/parameters
void print_letters(char arg[]);// the function/mthod return nothing but print letters/characters in arg array

void print_arguments(int argc, char *argv[])
{
    // int argc => integer value which is count of aeguments/parameters
    // char *argv[] => pointer to character array which store argument value pass to functio/method and ends at '\0' or NULL 
    int i = 0; // local variable i declare and intialize with 0 in function/method

    for (i = 0; i < argc; i++) {
    //for loop until argc value which is 4 in my case so for loop will loop until 3 is found
    // this function/methods print characters letters passed to it in array of index i    
        print_letters(argv[i]);
    }
}

// print letters function defination start here
void print_letters(char arg[])
{
    int i = 0;

    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc+1, argv);
    return 0;
}
