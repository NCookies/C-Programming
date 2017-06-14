/*
 * Name: pun.c
 * Date: 2017-06-14
 * Purpose: Prints a bad pun
 * Author: NCookie
 */

#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0;
}

/*
 * To convert the pun.c to execute on machine, it usually need three steps.
 * 1. Preprocessing
 *  - obeys commands. eg) begin with #
 *  - add things to the program
 * 2. Compiling
 *  - translate modified program into machne instructions(object code)
 *  - however, it isn't ready to execute
 * 3. Linking
 *  - final step
 *  - linker combines the object code
 *
 * Fortunately, this process is often automated, so we don't need to care about it.
 * Preprocessing is usually integrated with the compiler. 
 */
