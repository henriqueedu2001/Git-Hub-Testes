#include <stdio.h>

/** this function prints all the positive divisors of n **/
void print_divisors(int n){
    int i;

    /** searches for divisors **/
    for(i = 1; i <= n; i++)
        if(n % i == 0)
            printf("%d\n", i);
}

int main(){
    print_divisors(6);
    return 0;
}