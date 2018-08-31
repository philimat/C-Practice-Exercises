//
//  E1-3.c
//  
//
//  Created by Matt Philippi on 8/28/18.
//

#include <stdio.h>

/* print Celsius-Fahrenheit table
 for celsius = 0, 20, ..., 300 */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    celsius = lower;
    printf("cels fahr\n");
    printf("---- ----\n");
    while (celsius <= upper){
        fahr = ((9.0/5.0) * celsius) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius+ step;
    }
}
