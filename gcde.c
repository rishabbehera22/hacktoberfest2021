#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int Euclidean(int m, int n){
    time_t begin = time(NULL);
     while (n > 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    printf ("GCD = %d \n",m);
    time_t end = time(NULL);
    return (end-begin);
}
int consecutive(int m,int n){
    time_t begin = time(NULL);
    int max,min;
    if (m>n){
         max=m;
         min=n;
    }
    else{
         max=n;
         min=m;
    }
    int i,z;
    for(i=1;i<=min;i++){
        if(max%i==0 && min%i==0){
            z=i;
        }
    }
    printf("The gcd is %d \n", z);
    time_t end = time(NULL);
    return (end-begin);
}
int factorialmet(int m,int n){
    time_t begin = time(NULL);
    int a[5000];
    int b[5000];
    int s=0,i;
    int gcd=0;

    for(i=1;i<=m;i++){
        if(m%i==0){
            a[s]=i;
            s=s+1;
        }
    }
    int q=0;
        for(i=1;i<=n;i++){
        if(n%i==0){
            b[q]=i;
            q=q+1;
        }
    }
    for(i=0;i<s;i++){
        if(a[i]==b[i])
        {
            gcd=i;
        }
    }
    time_t end = time(NULL);
    return (end-begin);
}
int main()
{
    printf("Enter the number to be calculated \n");
    printf("Enter the first number");
    int a; 
    scanf("%d", &a);
    printf("Enter the second number");
    int b;
    scanf("%d", &b);
    int q=Euclidean(a,b);
    int s=consecutive(a,b);
    int f=factorialmet(a,b);
    if()
}
