//
//  main.c
//  H1 Q6 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
float toCentim(float a);
int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart to convert the length in feet to centimeter.
    // 3 x 30.48
    
    float feet;
    printf("Bir feet degeri giriniz");
    scanf("%f",&feet);
    float  a = toCentim(feet);
    printf("%f",a);
    
    return 0;
}
float toCentim(float a){
    
    float sonuc;
    
    sonuc = a*30.48;
    
    return sonuc;
    
}
