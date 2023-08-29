//
//  main.c
//  SOYADA ADI KOPYALA
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>
float calculatePayHourlyWorker();
float calculatePayCommWorker();
int main(int argc, const char * argv[]) {
    int comm;
    int hourly;
    int code;
    printf("enter payement code HourlyWorker = 1 / CommWorker =2");
    scanf("%d",&code);
    if(code ==1 ){
        
        printf("%f", calculatePayHourlyWorker());
        
    }
    else if(code ==2){
        
        printf("%f", calculatePayCommWorker());
    }
    else{
        printf("Hatali islem");
    }
    
   
   
    
    
    return 0;
}
float calculatePayHourlyWorker(){
    float saat;
   float maas;
    printf("kac saat calistiniz");
    scanf("%f",&saat);
    if(saat<=40){
        
        maas = saat*50;
        return maas;
        
    }else{
        
        float degisken = saat;
        saat = saat -40;
        maas = (40*50)+saat*50*1.5;
        return maas;
        
    }
   
}
float calculatePayCommWorker(){
    float netmaas ;
    float toplamKazanc;
    printf("total kazanci giriniz");
    scanf("%f",&toplamKazanc);
    
    netmaas = 500 + toplamKazanc*(5.5/100);
    return netmaas;
}
