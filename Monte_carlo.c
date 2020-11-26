#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int in_circle = 0;
    int times = 10000000;
    for(int i = 0; i < times; i++){
        int x = rand() % 10000;
        int y = rand() % 10000;
        if (x*x + y*y < 10000*10000){
            in_circle++;
        }    
    }
    double pi = (double)in_circle / (double)times * 4;
    printf("%f",pi);
    return (0);
}