 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int cprime(int a)
{
    time_t begin = time(NULL);
    int i=1,s=0;;
    for(i=1;i<=a;i++){
        if(a%i == 0){
            s=s+1;
        }
    }
    if(s==2){
        printf("Its a prime number from my method");
    }
    else{
        printf("It is not a prime from my method");
    }
    time_t end = time(NULL);
    return (end-begin);
}
int recursivePrime(int n, int i=2)
{
    time_t begin = time(NULL);
    if (n <= 2)
         return (n == 2) ? true : false;
    if (n % i == 0){
        printf("It is not  a prime from my method");
         time_t end = time(NULL);
    return (end-begin);
    }
        
    if (i * i > n){
        printf("It is  a prime from my method");
        time_t end = time(NULL);
        return (end-begin);
    }
        
    return recursivePrime(n, i + 1);
    
}
int main()
{
    printf("Enter the number to be checked \n");
    int n;
    scanf("%d", &n);
    int q=cprime(n);
    printf("Time complexity from my method = %d \n",q );
    int j = recursivePrime(n);
    printf("Time complexity from someone else method = %d \n",j );
    if(q>j){
        printf("Some one else method is better");
    }
    else if(j>q){
        printf("Mine method is better");
    }
    else{
        printf("Both the method are better");
    }

}
