//
//  main.c
//  HOMEWORK1 Q12
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int low = 0 ,high = 100 ,step =5,sum=0;
    for(int i = low;i<=high;){
        sum += i;
        i+=step;
        
    }
    printf("%d",sum);
    
    return 0;
}
