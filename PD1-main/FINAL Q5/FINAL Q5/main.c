//
//  main.c
//  FINAL Q5
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n =10,x,y;
   int a[10] = {67,78,41,52,89,25,62,92,34,79};
    int i=0;
    while(i<n){
        x =a[i]%10;
        x =x*10 +a[i]/10;
        y = a[n-i-1] %10;
        y = 7*10+a[n-i-1]/10;
        a[i] =y;
        a[n-i-1]=x;
        i+=2;
    }
    i=0;
    while(i<n){
        printf("%d\n",a[i]);
        i++;
    }
    return 0;
}
