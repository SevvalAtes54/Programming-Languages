//
//  main.c
//  H1 Q16 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
int yazdir_ve_Sum_Bul();
int main(int argc, const char * argv[]) {
    // esign an algorithm which generates even cift numbers between 1000 and 2000 and then prints them in the standard output. It should also print total sum.
    int a = yazdir_ve_Sum_Bul();
    printf("%d",a);
    return 0;
}
int yazdir_ve_Sum_Bul(){
  int sum = 0;
    for (int a = 1000;a<=2000;a++){
        
        printf("%d \n",a);
        sum += a;
    }
    
    return sum;
    
    
    
}
