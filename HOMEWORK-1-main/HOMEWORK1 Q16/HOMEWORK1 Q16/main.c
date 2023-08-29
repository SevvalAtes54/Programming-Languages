//
//  main.c
//  HOMEWORK1 Q16
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Design an algorithm which generates even numbers between 1000 and 2000  and then prints them in the standard output. It should also print total sum.
    int i,sum = 0;
    
    for(i=1000;i<=2000;i++){
        
        printf("%d\n",i);
        sum += i;
    }
    printf("%d",sum);
    
    return 0;
}
