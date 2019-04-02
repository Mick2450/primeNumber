#include <stdio.h>

int isPrime(int x); //function prototype

int main(){
    int testNum;
        
    for(testNum=2; testNum<=100; testNum++){    //prime number is > 1 and cannot be formed by multiplying two smaller numbers
        isPrime(testNum);   //testNum becomes x in function
    }
}


int isPrime(int x){             //function definition 
    int i, flag = 0;            // set flag = 0
    for(i=2; i<=x/2; i++){      //if input value is cleanly divisible between 2 and input/2, it is not a prime number
        if(x%i == 0){
            flag = 1;           //flag becomes = 1 if number is not prime
        }       
     }
        
    if (flag == 0) {            //if prime (flag = 0) print 
        printf("%d is a prime number\n", x); 
    } 
    else { 
        return 0; 
    }        
}
