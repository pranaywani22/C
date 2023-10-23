#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n ,k;
    long long sum = 0;
    scanf("%i",&n);
    
    for (int i = 0; i<n; i++) {
        scanf("%i",&k);
         sum += k;
    }
    printf("%lld",sum);
    return 0;
}
