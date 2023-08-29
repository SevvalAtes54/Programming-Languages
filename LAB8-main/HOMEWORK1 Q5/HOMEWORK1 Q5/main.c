//
//  main.c
//  HOMEWORK1 Q5
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Convert Temperature from Fahrenheit (°F) to Celsius (°C)
    int fahr,celc;
    
    printf("Bir fahreneit degeri giriniz");
    scanf("%d",&fahr);
    
    celc = 5/9 * (fahr -32);
    printf("%d",celc);
    
    return 0;
}
