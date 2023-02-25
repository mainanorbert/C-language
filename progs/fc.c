#include<stdio.h>

int main(){
    // float fehr,cel;
    // int lower, upper, step;
    // lower=0;
    // upper=300;
    // step=20;

    // cel=lower;

    // while( cel<=upper){
    //     fehr=9.0*cel+32.0/5.0;

    //     printf("%4.0f\t%4.1f\n",cel,fehr);
    //     cel+=step;

    // }

    #define LOWER 0  //Lower limit of th table
    #define UPPER 300 //Upper Limit of the table
    #define STEP 20 //Increment from 0



    int fehr=0;

    for(fehr=UPPER;fehr>=LOWER;fehr-=STEP){

        printf("%4d%8.2f\n",fehr, 5.0/9.0*(fehr-32));
    }
    return 0;
}