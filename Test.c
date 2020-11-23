#include <stdio.h>


int main(){
     printf("HELLO C PROGRAMMING\n");
     int A;
     int B;// Faqat naturall sonlar ustida ishlash uchun %d
     int Yigindi=A+B;
     float Afloat=2.05; float Bfloat=3.05;// %f
     float Yigindi2=Afloat+Bfloat;
     //double num2=35000.77;// %fl
     char harf;// Faqat bittagina harf qiymatini olaoladi %c
     char soz[]="SALOM C PROGRAMMING";// %s 문자열

     printf("A=%d B=%d A+B=%d\n",A,B,Yigindi);
     printf("%d\n",Yigindi);
     printf("Afloat=%f Bfloat=%f YIgindi2=%d\n",Afloat,Bfloat,Yigindi2);

     printf("Harifni qiymati=%c \n",harf);
     printf("HARIF Nomli fuctionga qiymat bering!\n");
     //scanf("%c",&harf);
    // printf("HARIF QIYMATI=%c\n",harf);
    // printf("A VA B GAQIYMAT BERING\n");
    // scanf("%d",&A);
    // scanf("%d",&B);
     //printf("A=%d  B=%d  YIGINDISI=%d\n",A,B,A+B);

     printf("SoZ=%s\n",soz);
     char ism[100];
     printf("MALUMOTLAR UCHUN ISMI NGIZNI KIRITING!\n");
     scanf("%s",&ism);
     printf("SIZNING ISMINGIZ %s \n",ism);
     
    return 0;
}