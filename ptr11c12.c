/* ptr11c12.c is the source file for ptr11c12.
 *
 * main creates an array of ints and passes it to array_sum as a pointer
 * to an int. It also passes the number of elements in the array a const int.
 * I'm guessing this provides some aspect of security, preventing an array
 * over run.
 *
*/

/* includes */

#include <stdio.h>


/* defines */



/* function declarations  */

int array_sum(int *array, const int n);


/* main */

int main(void){

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};


    printf("The sum is %i\n", array_sum(values, 10));

    return(0);
}


/* function definitions */

int array_sum(int *array, const int n){

    int sum = 0;
    int * const array_end = array + n;      /* n or (n - 1)? */

    for( ; array < array_end; ++array)
        sum += *array;

    return(sum);

}



