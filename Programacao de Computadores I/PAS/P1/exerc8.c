#include<stdio.h>

int main(){

    long cpf;
    int nonodigito;
    
    printf("Digite o numero do seu CPF (apenas numeros): ");
    scanf("%ld", &cpf);
    
    nonodigito = (cpf / 100) % 10;
    
    if(nonodigito == 1){
        printf("O seu CPF foi registrado em: DF/GO/MS/MT/TO");
    }else if(nonodigito == 2){
        printf("O seu CPF foi registrado em: PA/AM/AC/AP/RO/RR");
    }else if(nonodigito == 3){
        printf("O seu CPF foi registrado em: CE/MA/PI");
    }else if(nonodigito == 4){
        printf("O seu CPF foi registrado em: PE/RN/PB/AL");
    }else if(nonodigito == 5){
        printf("O seu CPF foi registrado em: BA/SE");
    }else if(nonodigito == 6){
        printf("O seu CPF foi registrado em: MG");
    }else if(nonodigito == 7){
        printf("O seu CPF foi registrado em: RJ/ES");
    }else if(nonodigito == 8){
        printf("O seu CPF foi registrado em: PR/SC");
    }else{
        printf("O seu CPF foi registrado em: RS");
    }
    return 0;
}