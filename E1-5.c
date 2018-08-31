//
//  E1-5.c
//  
//
//  Created by Matt Philippi on 8/28/18.
//

#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main(void)
{
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

