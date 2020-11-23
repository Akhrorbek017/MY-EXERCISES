#include <stdio.h>

void GETname(){
    printf("ISMINGIZNI KIRIOTING!\n");
}
char PRINTNAME(char name[10]){
    printf("SIZNING ISMINGIZ %s DIR\n");
     return name[10];
}

int main(){

char ism[10];
GETname();
scanf("%s",&ism);
PRINTNAME(ism);

    return 0;
}