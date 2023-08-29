//
//  main.c
//  H1 Q17 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
float calculate_Formula(int a);
int main(int argc, const char * argv[]) {
    //Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = 1⁄2 + 1⁄4 + ... +1/n.
    float sayi;
    printf("bir sayi giriniz");
    scanf("%f",&sayi);
    float sonuc = calculate_Formula(sayi);
    printf("%f",sonuc);
    return 0;
    
}
float calculate_Formula(int a){
    float sum =0.0 ;
    
    for(float i = 2.0 ;i<=a;i+=2){
        
        sum = sum+ 1/i;
        
        
    }
    return sum;
}
