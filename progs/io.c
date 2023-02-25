#include <stdio.h>

int main(){

    int i;

    char c;
    

    // while ((c=getchar())!=EOF)
    // {
    //     putchar(c);
    //     // c=getchar();
    //     /* code */
    // }

    for(i=0;i<=20;i++){

        if(i%3===0){
            c="fizz";
        }
        else if (i%5===0)
        {
            c="Buzz";
        }
        else if((i%5===0) && (i%3==0)){

            c="fizzBuzz";

        }

        printf("%l\n",c);
        

    }
    
}