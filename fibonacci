#include <stdio.h>
int F[2000000]; // memoization array, can be static or global
int fib(int n){
    // time complexity is O(n^2)
    // this is slower,but can be optimized through memoization.
    if(n<0)
        return -1;
    if (n>=0 && n <=1)
        return n;
    return fib(n-2) + fib(n-1);
}
int fibMemoization(int n){
    //time complexity is O(n + 1)
    //it's  much faster compared close to loop/iterative function
    //memoization is used, to store already computed values
    if(n<0)
        return -1;
    if(n>=0 && n <=1)
        return n;

    if(F[n-2]== -1)
        F[n-2]= fibMemoization(n-2);

    if(F[n-1]== -1)
        F[n-1]= fibMemoization(n-1);
    return F[n-2]+ F[n-1];
}
int fibI(int n){
    //time complexity is O(n) linear; better
    int l0=0,l1=1,s, i;
    if(n<0)
        return -1;
    if(n>=0 && n<=1)
        return n;
    for(i=2; i<=n; i++){
        s=l0+l1;
        l0=l1;
        l1=s;
    }
    return s;
}
int main() {
    printf("%d\n", fib(15));
    //initialization of the array
    for (int i=0; i<2000000; i++){
        F[i]=-1;
    }
    printf("%d\n", fibMemoization(10000));
    printf("%d\n", fibI(10000));
    return 0;
}
