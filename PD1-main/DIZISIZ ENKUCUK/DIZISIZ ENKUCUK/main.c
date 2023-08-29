//
//  main.c
//  DIZISIZ ENKUCUK
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayi,enkucuk,a=0;
    scanf("%d",&sayi);
    enkucuk = sayi;
    while(sayi!=-1){
        scanf("%d",&sayi);
        if(sayi<enkucuk && sayi%2==1){
            enkucuk= sayi;
        }
        a++;
        
    }
    if(enkucuk%2==0){
        printf("tek sayi girilmemistir");
        
    }
    else{
        printf("%d",enkucuk);
    }
    if(enkucuk==-1){
        printf("girilen ilk deger -1 dir");
    }


    return 0;
}
