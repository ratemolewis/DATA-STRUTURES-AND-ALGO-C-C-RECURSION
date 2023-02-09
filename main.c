#include <stdio.h>

void TOH(int n, int A, int B, int C){
    //Time complexity = O(2^n)
    // number of calls = 2^(n+1)-1 = this is same as GP Series.
    // when n=3; number of calla is 15
    if(n>0){
        TOH(n-1, A,C,B);
        printf("move disk %d to %d \n", A , C);
        TOH(n-1, B, A, C);
    }
}

int main() {
    TOH(3,1,2,3);
    //printf("Hello, World!\n");
    return 0;
}
