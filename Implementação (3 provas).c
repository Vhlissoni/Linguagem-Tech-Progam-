#include <stdio.h>
#include <stdlib.h>

int ESOFT_A_1(int n) {

    if (n % 5 == 0 && n % 2 != 0)
        return 1;
    else
        return 0;
}

int ESOFT_A_2(int max_moc, int item, int n) {

    n = item / max_moc;
    return n;
}

float calc_F(float F) {
    float temp;

    temp = F;
    F = temp * 1.8 + 32;

    return F;
}

float calc_C(float C) {
    float temp;

    temp = C;
    C = (temp - 32) / 1.8;

    return C;
}

float calc_K(float K) {
    float temp;

    temp = K;
    K = temp + 273.15;

    return K;
}

float calc_c_k(float C) {
    float temp;

    temp = C;
    C = temp - 273.15;

    return C;
}

float calc_mi(float mi) {
    float medida;

    medida = mi;
    mi = medida / 1609.34;

    return mi;
}

float calc_m(float m) {
    float medida;

    medida = m;
    m = medida * 1609.34;

    return m;
}

float calc_lb(float lb) {
    float peso;

    peso = lb;
    lb = peso * 2.205;

    return lb;
}

float calc_kg(float kg) {
    float peso;

    peso = kg;
    kg = peso / 2.205;

    return kg;
}

float calc_mph(float mph) {
    float velocidade;

    velocidade = mph;
    mph = velocidade / 1.609;

    return mph;
}

float calc_km_h(float km_h) {
    float velocidade;

    velocidade = km_h;
    km_h = velocidade * 1.609;

    return km_h;
}

int consecutivo(int a, int b) {

    if (a + 1 == b || b + 1 == a)
        return 1;
    else
        return 0;
}

float calc_IMC(float peso, float altura) {

    float imc;

    imc = peso / (altura * altura);

    return imc;
}

void hanoi(int n, char origem, char destino, char auxiliar) {

    if (n == 1) {
        printf("Mover disco %d de %c para %c\n",
               n, origem, destino);
    }
    else {
        hanoi(n - 1, origem, auxiliar, destino);

        printf("Mover disco %d de %c para %c\n",
               n, origem, destino);

        hanoi(n - 1, auxiliar, destino, origem);
    }
}


int main(int argc, char *argv[]) {

    int op, a, b, c, d, e, itens, max_moc, capacidade;
    int qtd_itens, n_mochilas, resto, operacao;

    float temp, medida, peso, velocidade, x1, x2;
    float altura, imc;


    printf("PROVAS DE ADSIS/ESOFT A E B");
    printf("\n1.ESOFT A");
    printf("\n2.ESOFT B");
    printf("\n3.ADSIS\n");

    scanf("%d", &op);

    switch (op) {

        case 1:

            printf("Escolha um exercicio:");
            printf("\n1.Numero impares e multiplos de 5");
            printf("\n2.Mochila");
            printf("\n3.Conversoes");

            scanf("%d", &op);

            switch (op) {

                case 1:

                    printf("Digite 4 numeros=");
                    scanf("%d %d %d %d", &a, &b, &c, &d);

                    printf("Os numeros que sao impares e multiplos de 5 sao:\n");

                    if (ESOFT_A_1(a))
                        printf("\n%d", a);

                    if (ESOFT_A_1(b))
                        printf("\n%d", b);

                    if (ESOFT_A_1(c))
                        printf("\n%d", c);

                    if (ESOFT_A_1(d))
                        printf("\n%d", d);

                    break;

                case 2:

                    printf("Digite a capacidade maxima da mochila e os itens totais= ");
                    scanf("%d %d", &itens, &max_moc);

                    printf("O numero de mochilas totalmente cheias sera de = %d",
                           ESOFT_A_2(max_moc, itens, n_mochilas));

                    break;

                case 3:

                    printf("Escolha a conversao a se realizar= ");
                    printf("\n1.C");
                    printf("\n2.F");
                    printf("\n3.K");
                    printf("\n4.METRO");
                    printf("\n5.MILHA");
                    printf("\n8.KG");
                    printf("\n9.LB");
                    printf("\n10.MP/H");
                    printf("\n11.KM/H");

                    scanf("%d", &op);

                    switch (op) {

                        case 1:

                            printf("Digite a temperatura a ser convertida= ");
                            scanf("%f", &temp);

                            printf("O valor de sua conversao e de %f",
                                   calc_C(temp));

                            break;

                        case 2:

                            printf("Digite a temperatura a ser convertida= ");
                            scanf("%f", &temp);

                            printf("O valor de sua conversao e de %f",
                                   calc_F(temp));

                            break;

                        case 3:

                            printf("Digite a temperatura a ser convertida= ");
                            scanf("%f", &temp);

                            printf("O valor de sua conversao e de %f",
                                   calc_K(temp));

                            break;

                        case 4:

                            printf("Digite a medida a ser convertida= ");
                            scanf("%f", &medida);

                            printf("O valor de sua conversao e de %f",
                                   calc_m(medida));

                            break;

                        case 5:

                            printf("Digite a medida a ser convertida= ");
                            scanf("%f", &medida);

                            printf("O valor de sua conversao e de %f",
                                   calc_mi(medida));

                            break;

                        case 8:

                            printf("Digite o peso a ser convertido= ");
                            scanf("%f", &peso);

                            printf("O valor de sua conversao e de %f",
                                   calc_lb(peso));

                            break;

                        case 9:

                            printf("Digite o peso a ser convertido= ");
                            scanf("%f", &peso);

                            printf("O valor de sua conversao e de %f",
                                   calc_kg(peso));

                            break;

                        case 10:

                            printf("Digite a velocidade a ser convertida= ");
                            scanf("%f", &velocidade);

                            printf("O valor de sua conversao e de %f",
                                   calc_mph(velocidade));

                            break;

                        case 11:

                            printf("Digite a velocidade a ser convertida= ");
                            scanf("%f", &velocidade);

                            printf("O valor de sua conversao e de %f",
                                   calc_km_h(velocidade));

                            break;
                    }

                    break;
            }

            break;


        case 2:

            printf("Escolha um exercicio:");
            printf("\n1.Mochila");
            printf("\n2.Numeros distintos");
            printf("\n3.Verdadeira ou falso");

            scanf("%d", &op);

            switch (op) {

                case 1:

                    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
                    scanf("%d", &qtd_itens);

                    printf("Insira a capacidade de itens de cada mochila: \n");
                    scanf("%d", &capacidade);

                    n_mochilas = qtd_itens / capacidade;
                    resto = qtd_itens % capacidade;

                    printf("Legendario, sao %d mochilas para seus itens, e sobram %d itens",
                           n_mochilas, resto);

                    break;

                case 2:

                    printf("Digite 3 numeros inteiros = ");
                    scanf("%d %d %d", &a, &b, &c);

                    if (a == b || a == c || c == b) {

                        printf("Os numeros tem que ser distintos!!!!");

                    }

                    else if (a < b && b < c) {
                        printf("%d %d %d", a, b, c);
                    }

                    else if (a < c && c < b) {
                        printf("%d %d %d", a, c, b);
                    }

                    else if (b < a && a < c) {
                        printf("%d %d %d", b, a, c);
                    }

                    else if (b < c && c < a) {
                        printf("%d %d %d", b, c, a);
                    }

                    else if (c < a && a < b) {
                        printf("%d %d %d", c, a, b);
                    }

                    else if (c < b && b < a) {
                        printf("%d %d %d", c, b, a);
                    }

                    break;

                case 3:

                    printf("Insira o primeiro valor: ");
                    scanf("%f", &x1);

                    printf("Insira o segundo valor: ");
                    scanf("%f", &x2);

                    printf("Insira o codigo da operacao: ");
                    scanf("%d", &operacao);

                    if (operacao == 1) {

                        if (x1 > x2)
                            printf("Verdadeiro");
                        else
                            printf("Falso");

                    }

                    else if (operacao == 2) {

                        if (x1 < x2)
                            printf("Verdadeiro");
                        else
                            printf("Falso");

                    }

                    else if (operacao == 3) {

                        if (x1 == x2)
                            printf("Verdadeiro");
                        else
                            printf("Falso");

                    }

                    else if (operacao == 4) {

                        if (x1 != x2)
                            printf("Verdadeiro");
                        else
                            printf("Falso");

                    }

                    else {
                        printf("Operador invalido");
                    }

                    break;
            }

            break;


        case 3:

            printf("Escolha um exercicio:");
            printf("\n1.Numero");
            printf("\n2.IMC");
            printf("\n3.Torre de Hanoi");

            scanf("%d", &op);

            switch (op) {

                case 1:

                    printf("Digite 5 numeros inteiros= ");
                    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

                    printf("\nOs numeros consecutivos sao:\n");

                    if (consecutivo(a, b))
                        printf("%d %d\n", a, b);

                    if (consecutivo(a, c))
                        printf("%d %d\n", a, c);

                    if (consecutivo(a, d))
                        printf("%d %d\n", a, d);

                    if (consecutivo(a, e))
                        printf("%d %d\n", a, e);

                    if (consecutivo(b, c))
                        printf("%d %d\n", b, c);

                    if (consecutivo(b, d))
                        printf("%d %d\n", b, d);

                    if (consecutivo(b, e))
                        printf("%d %d\n", b, e);

                    if (consecutivo(c, d))
                        printf("%d %d\n", c, d);

                    if (consecutivo(c, e))
                        printf("%d %d\n", c, e);

                    if (consecutivo(d, e))
                        printf("%d %d\n", d, e);

                    break;


                case 2:

                    printf("Digite o peso em kg= ");
                    scanf("%f", &peso);

                    printf("Digite a altura em metros= ");
                    scanf("%f", &altura);

                    imc = calc_IMC(peso, altura);

                    printf("Seu IMC e %.2f\n", imc);

                    if (imc < 18.5) {
                        printf("Abaixo do peso");
                    }

                    else if (imc <= 24.9) {
                        printf("Normal");
                    }

                    else if (imc <= 29.9) {
                        printf("Acima do peso");
                    }

                    else {
                        printf("Obeso");
                    }

                    break;


                case 3:

                    printf("Torre de Hanoi\n");
                    printf("Pino A = 6\n");
                    printf("Pino B = 0\n");
                    printf("Pino C = 0\n");

                    printf("\nOperacoes:\n");

                    hanoi(3, 'A', 'C', 'B');

                    break;
            }

            break;
    }

    return 0;
}

