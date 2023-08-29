//
//  main.c
//  LAB13 Q4
//
//  Created by my computer on 3.01.2023.
//

#include <stdio.h>
int asal_mi(int a);
int armstrong_mu(int a);
int main(int argc, const char * argv[]) {
    // İki ayrı fonksiyon oluşturarak bir tamsayının asal sayı mı yoksa Armstrong mu yoksa her ikisi mi olduğunu kontrol etmeyi sağlayan programı yazınız
    
    if (armstrong_mu(1223)==1){
        printf("armsttrongdur");
    }
    else{
        printf("armstrong deildir");
        
    }
    int abc = asal_mi(7);
    if(abc==1){
        printf("asal değildir");
    }
    else{printf("asaldir");
        
    }
    
    
    
    return 0;
}
int asal_mi(int a){
    int k =0;
    for (int i = 2; i<a ;i++){
        if(a%i ==0){
            k++;
           
        }
       
    }
    if(k!=0){
        
        return 1;
    }
    return 0;
}
int armstrong_mu(int a){
    int b = a,kalan=0,usalma=1,top =0;
    int y = b;
    int bas=0;
    while (b>0) {
        bas++;
        b=b/10;
    }
    for(b;b>0;b++){
        kalan = b%10;
        for(int k =0;k<b;k++){
            usalma *= kalan;
        }
        top+= usalma;
        a= a/10;
    }
    if (y==top){
        return 1;
    }
    else{
        return 0;
    }
}
