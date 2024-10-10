#include <stdio.h>
#include <stdlib.h>

/**
 * Pointer is a type of data, like the integer and double.
 * Integer stores the whole number, the double stores 
 * the decimal number, and the pointer stores the physical address
 * of the variable. We could add a '*' to reference the pointer
 * of a variable. Also we could use '*' to dereference the pointer
 * of the variable to make it to back to be a original value of the
 * variable.
 * */ 
int main(){
    // int age=24;
    /**
     * Get the pointer of age, because age is a integer type,
     * we need use a integer pointer to store the pointer. '&'
     * is used to referece the pointer of the variable
     * */ 
    // int * pAge=&age;
    /**
     * Now we will get the pointer of age, the physical address of 
     * age
     * */ 
    // printf("%p\n",pAge);
    /**
     * We use the '*' to dereference the pointer, now we get original
     * value of age
     * */ 
    // printf("%d\n",*pAge);
    /**
     * Use '&' to refernce the pointer again
     * */ 
    // printf("%p\n",&*pAge);

}