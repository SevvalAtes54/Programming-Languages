//
//  main.c
//  FINAL Q2
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //
    int number =0,basamak =0,oncekibasamak =0,sonuc=0;
    printf("enter ur student number");
    scanf("%d",&number);
    while (number>0){
        basamak = number%10;
        sonuc==0?sonuc=basamak<oncekibasamak?1:0:0;
        oncekibasamak =basamak;
        number=number/10;
        printf("%d %d %d %d \n",number,basamak,oncekibasamak,sonuc);
    }
    
    printf(sonuc==0?"true":"false");
    
    return 0;
}
