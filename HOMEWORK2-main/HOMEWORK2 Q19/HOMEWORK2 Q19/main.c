//
//  main.c
//  HOMEWORK2 Q19
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
   
    float sayi;
    printf("Bir sayi giriniz");
    scanf("%f",&sayi);
    float formul;
    for (float i = 2 ;i<=sayi;i++){
        
        float fact = 1.0;
        float us=1.0;
        for(float a=1.0 ;a<=i;a++){
            fact*=a;
            us*=i;
        }
        
        formul =us/fact;
        
        
    }
    printf("%f",formul+1.0);
    
    
    
    return 0;
}
