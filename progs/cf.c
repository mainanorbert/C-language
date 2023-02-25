#include <stdio.h>
int main()
{
    float fehr, cel;
    int lower, upper, step;
    step=2;
    lower=0;
    upper=50;
    fehr=lower;
    
printf("Fehneret\t \tCelcius\n");

    while(fehr<=upper){
        cel=5.0/9.0*(fehr-32.0);
        

        printf("%8.0f%8.1f\n",fehr, cel);
        fehr+=step;


    }
    return 0;
}

