//
//  main.c
//  Lab8
//
//  Created by deneme account on 20.05.2023.
//

//QUESTION 1

//
//#include <stdio.h>
//
//enum day {sunday=1,tuesday,wednesday,thursday,friday,saturday};
//int main() {
//
//    enum day d = thursday;
//    printf("The day nuber stored in d is %d",d);
//
//    return 0;
//}




//QUESTION 2


//
//#include <stdio.h>
//
//enum state {working = 0,failed,freezed};
//enum state currState = 2;
//enum state findstate(){
//    return currState;
//}
//int main() {
//
//
//  (findstate()==working)?printf("working"):printf("%d",findstate());
//
//    return 0;
//}
//

//QUESTION 3

//
//
//#include <stdio.h>
//
//int main() {
//
//enum result {pass,fail};
//enum result s1,s2;
//s1 = pass;
//printf("%d",s2);
//
//
//    return 0;
//}
//


//QUESTION 4

//#include <stdio.h>
//
//enum example {a=1,b,c};
//enum example example1 =2;
//enum example answer(){
//    return example1;
//}
//int main() {
//    (answer()==a)? printf("yes"):printf("no");
//
//    return 0;
//}


//QUESTION 5
//
//#include <stdio.h>
//#define  MAX 4
//enum sanfondry{
//    a,b=3,c
//};
//int main(int argc, const char * argv[]) {
//    if (MAX!=c){
//        printf("hello");
//    }
//    else{
//        printf("world");
//    }
//    return 0;
//
//
//}
//QUESTION 6
//
//#include <stdio.h>
//enum day{
//    a,b,c=5,d,e
//};
//int main(int argc, const char * argv[]) {
//
//    printf("Hello, World giirnz !\n");
//    scanf("%d",a);
//    printf("%d",a);
//    return 0;
//}

//QUESTION 7

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}


//QUESTION 8
//#include <stdio.h>
//enum sanfoundry{
//    c = 0,
//    d=10,
//    h=20,
//    s=3
//}a;
//int main(int argc, const char * argv[]) {
//    a = c;
//    printf("size of enum var = %d bytes",sizeof(a));
//    return 0;
//}
//
//#include <stdio.h>
//enum sanfoundry{
//    a=1,b,c,d,e
//};
//int main(int argc, const char * argv[]) {
//
//    printf("%d",a*b+e-d);
//    return 0;
//}
//
//#include <stdio.h>
//enum sanfoundry{
//    a=1,b,c=5
//};
//int main(int argc, const char * argv[]) {
//    enum sanfoundry s;
//    s=5;
//
//    printf("%s",s);
//    return 0;
//}
//
//Ders devam listesinde bulunan öğrenciler için kullanılacak ‘student’ isimli struct yapısını, ‘number’, ‘name’, ‘surname’, ve ‘midtermGrade’ alanlarından oluşacak şekilde tanımlayınız. Tanımladığınız bu yapıyı kullanarak 10 öğrenci için bir struct dizisi oluşturunuz ve klavyeden 3 öğrencinin bilgilerini alınız. Daha sonra bilgileri alınan öğrencilerin bilgilerini ekrana yazdırınız.
//
//#include <stdio.h>
//struct student{
//    int number[20];
//    char name[20];
//    char surname;
//    int midtermGrade;
//};
//int main(int argc, const char * argv[]) {
//    struct student ogrenci;
//    printf("ad girin");
//    scanf("%s",&ogrenci.name);
//   printf("soyad girin");
//    scanf("%s",&ogrenci.surname);
//printf("numara girin");
//    scanf("%d",&ogrenci.number);
//       printf("not girin");
//    scanf("%d",&ogrenci.midtermGrade);
//    printf("%s",&ogrenci.name);
//    printf("%s",&ogrenci.surname);
//    printf("%d",&ogrenci.number);
//    printf("%d",&ogrenci.midtermGrade);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//struct person{
//    int age;
//    float weight;
//    char name[30];
//};
//int main(int argc, const char * argv[]) {
//    struct person *ptr;
//    int i,n;
//    printf("enter the number of persons");
//    scanf("%d",&n);
//    ptr = (struct person*)malloc(n*sizeof(struct person));
//    for(int i = 0;i<n;++i){
//
//    }
//    return 0;
//}

//
