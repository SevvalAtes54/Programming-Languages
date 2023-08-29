//
//  main.c
//  H1 Q5 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
float toCelsius(float a);
int main(int argc, const char * argv[]) {
    // Convert Temperature from Fahrenheit (°F) to Celsius (°C).
    // °C = 5/9(°F – 32).
    float fahr;
    printf("Bir fahreneit degerei giriniz");
    scanf("%f",&fahr);
    float sonuc = toCelsius(fahr);
    printf(" celsius deger :%f.1",sonuc);
    
    
    
    
    return 0;
}
float toCelsius(float a){
    
    float celsius;
    
    celsius = (a - 32)*5/9;
    
    return celsius;
}
