#include <stdio.h>
#include <stdlib.h>

/**
 * Get user's input
 *  */ 
int main()
{
    // int age;
    // printf("Enter your age:");
    /**
     * Use & to get the pointer of the variable
     * then value it
     */
    // scanf("%d",&age);
    // printf("You are %d years old.\n",age);

    // double gpa;
    // printf("Enter your gpa:");
    /**
     * Use %lf to get the variable pointer when variable is double type 
     */
    // scanf("%lf",&gpa);
    /**
     * Howerver we still use %f to get the value of a double type
     * */ 
    // printf("Your gpa is %f\n",gpa);

    // char name[20];
    // printf("Enter your name:");
    /**
     * When using scanf to get a string input, only the first string will
     * be fetched:"genesis young" will only get the word before whitespace
     * genesis, and young will be ignored
     * */ 
    // scanf("%s",&name);
    /**
     * In order to solve the problem above, we use fgets to get the string
     * input, the function could get a whole line string, so mutiple words
     * can be included
     * 
     * Params:(container,limit,io)
     * stdin means 'standard in' that is so called 'console'
     * */ 
    // fgets(name,20,stdin);
    // printf("You are %s",name);

    return 0;
}