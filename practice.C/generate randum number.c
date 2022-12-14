#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    
    srand(time(0));
    // to generate code from seed by time becuse he change auto
    // srand = seed rand ,  should write it once in code 
    int r = 5 + (rand() % (20 - 5 + 1) /* or put 16*/);
    // int r = startnumber + rand() % (endnumber - startnumber + 1)
    // to generate numbers between 5 to 20
    printf("%d", r);
}
