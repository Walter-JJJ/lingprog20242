#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("João Paulo!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2 () {
    printf("30*27 = %d\n", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3(){
    float media= (5+8+12)/3.0;
    scanf ("A média aritmetica entre 5,8 e 12 é igual a %.2f\n", media);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q4 (){
    int num = 0;
    printf("O valor digitado foi %d\n", num);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5 (){
    float num=0; 
    float num2=0;
    printf("Escreva um número real: ");
    scanf("%f", &num);
    printf("Escreva outro número real: ");
    scanf("%f", &num2);
    printf("Os números digitados foram %f, %f", num, num2);

}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6(){
    int num=0, suce, ant;
    printf("Digite um número: ");
    scanf("%d", &num);
    suce=num+1;
    ant=num-1;
    printf("O sucessor é %d\nE o antecessor é %d\n", suce, ant);
    
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7 (){
    char nome[50], endereco[50], telefone[14];
    printf("Nome: ");
    scanf(" %50[^\n]", nome);
    printf("Endereço: ");
    scanf(" %50[^\n]", endereco);
    printf("Telefone: ");
    scanf(" %14[^\n]", telefone);
    printf("%s\n%s\n%s\n", nome, endereco, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8 (){
    int num1=0, num2=0, sub=0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);
    sub=num1-num2;
    printf("A subtração entre o primeiro e o segundo número digitado é %d\n", sub);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q9 (){
    float num=0, parte=0;
    printf("Digite um número real: ");
    scanf("%f", &num);
    parte=num/4;
    printf("A quarta parte do número digitado é %.2f\n", parte);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10 (){
    float num1=0, num2=0, num3=0, media=0;
    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    media=(num1+num2+num3)/3;
    printf("A media aritmetica entre os 3 números é: %.2f\n", media);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11 (){
    float num1=0, num2=0, ad=0, sub=0, mul=0, div=0;
    printf("Digite dois número reais: ");
    scanf("%f%f", &num1, &num2);
    ad=(num1+num2); sub=(num1-num2); mul=(num1*num2); div=(num1/num2);
    printf("Soma: %.2f\nDiferença: %.2f\nProduto: %.2f\nQuociente: %.2f\n", ad, sub, mul, div);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 (){
    float num=0, quad=0;
    printf("Digite um número real: ");
    scanf("%f", &num);
    quad=num*num;
    printf("O quadrado do número digitade é: %.f\n", quad);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13 (){
    float saldo=0, reajuste=0;
    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);
    reajuste= (saldo*1.02);
    printf("O novo saldo após reajuste é: %.2f\n", reajuste);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14 (){
    int base=0, alt=0, per=0, area=0;
    printf("Digite a base e a altura do retangulo: ");
    scanf("%d%d", &base, &alt);
    per=(base*2+alt*2); area=(base*alt);
    printf("Perimetro: %f\nArea: %f\n", per, area);

}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q14();
    return EXIT_SUCCESS;
}