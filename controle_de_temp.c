#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora;
    float temp1, temp2, temp3, gastoh, gastot;

    hora = 0;
    gastot = 0;


        printf("Controlador de temperatura\n");
        printf("Entre no formato: Sala menor, Sala media, Sala maior\n");

    while(hora<24){

        gastoh = 10;


        printf("Entre com a temperatura da hora %d\n", hora);
        hora++;

        scanf("%f %f %f", &temp1, &temp2, &temp3);


        ////////SALA 1\\\\\\\\\\\\\\

        if(temp1 > 15 ){
            temp1 -= 15;
            gastoh += temp1*15*2;
        }
        else if(temp1 < 10){

          temp1 = 10 - temp1;
          gastoh += temp1*30*2;
        }



        //////SALA 2\\\\\\\\\\\\\\\\\

        if(temp2 > 20 ){
            temp2 -= 20;
            gastoh += temp2*15*3;
        }
        else if(temp2 < 15){
            temp2 = 15 - temp2;
            gastoh += temp1*30*3;
        }


        ///////SALA 3\\\\\\\\\\\

        if(temp3 > 25 ){
            temp3 -= 25;
            gastoh += temp3*15*6;
        }
        else if(temp3 < 20){
            temp3 = 20 - temp3;
            gastoh += temp3*30*6;
        }

        gastot += gastoh;

        printf("Gasto de energia para o ajuste de temperatura na hora %d: %f\n", hora,gastoh);

    }


    printf("Gasto de energia no periodo de 24h: %f\n", gastot);
}

