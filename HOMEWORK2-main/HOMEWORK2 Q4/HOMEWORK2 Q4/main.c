//
//  main.c
//  HOMEWORK2 Q4
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flowchart to find the sum of the first 50 natural numbers.
    int sum = 0 ;
    for (int i = 1;i<=50;i++){
        
        sum += i;
        
    }
    printf("%d",sum);
  
    return 0;
}
