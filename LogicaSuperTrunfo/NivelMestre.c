# include <stdio.h>
# include <string.h>

struct Carta {
    char estado[30];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_Turisticos;
    float densidade;
    float pibPerCapita;
};
 
// Função para imprimir o menu dinâmico

    void mostrarMenu (int excluido) {
        printf("\nEscolha um atributo: \n");
        if (excluido !=1) printf("1 - Populacao\n");
        if (excluido !=2) printf("2 - Área\n");
        if (excluido !=3) printf("3 - PIB\n");
        if (excluido !=4) printf("4 - Pontos turisticos\n");
        if (excluido !=5) printf("5 - Densidade Demografica\n");
        if (excluido !=6) printf("6 - PipPerCapita\n");
    }
    float selecionarValor (struct Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos_Turisticos;
        case 5: return c.densidade;
        case 6: return c.pibPerCapita;
        default: return 0;
    }    
     }
int main () {
        struct Carta carta1 = {"Brasil", "Sao Paulo", 12300000, 1521.0,
               699.0, 50, 8080.8, 56890.0};
        struct Carta carta2 = {"Argentina", "Boenos Aires", 2890000, 203.0,
               100.0, 14236.9, 9, 34567.0};
               
int escolha1, escolha2;
    printf("=== Super Trunfo ===\n");
// Primeira escolha mostrarMenu(0);

    printf("\nEscolha o primeiro atributo:");
    scanf("%d", &escolha1);

// Segunda escolha (menu Dinâmico)
mostrarMenu(escolha1);
do {
    printf("\nEscolha o segundo atributo(diferente do primeiro):");
    scanf("%d", &escolha2);
if (escolha2 == escolha1) {
    printf("X voce ja escolheu esse atributo| escolha outro.\n");
}    
 } while (escolha2 == escolha1);

// Seleciona os valores para as comparações
    float valor1_c1 = selecionarValor(carta1, escolha1);
    float valor1_c2 = selecionarValor(carta2, escolha1);
    float valor2_c1 = selecionarValor(carta1, escolha2);
    float valor2_c2 = selecionarValor(carta2, escolha2);  
int pontos_c1 = 0, pontos_c2 = 0;

// Comparação do primeiro atributo (considerado regra especial para densidade)

if (escolha1 == 5){ //Densidade(menor vence)
    // (valor1_c1 < valor1_c2) ? pontos_c1 ++: (valor1_c2 < valor1_c1 ? pontos_c2 ++: 0);
} else {
       (valor1_c1 > valor1_c2) ? pontos_c1 ++: (valor1_c2 > valor1_c1 ? pontos_c2 ++: 0);
}
// Comparação do segundo atributo

if (escolha2 == 5){ //Densidade(menor vence)
    // (valor2_c1 < valor2_c2) ? pontos_c1 ++: (valor2_c2 < valor2_c1 ? pontos_c2 ++: 0);
} else {
       (valor2_c1 > valor2_c2) ? pontos_c1 ++: (valor2_c2 > valor2_c1 ? pontos_c2 ++: 0);
    }
// Soma dos atributos

    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;
    printf("\n=== Resulatado da Comparacao ===\n");
    printf("Carta1 (%s - %s)\n", carta1.estado, carta1.cidade);
    printf("- Atributo %d: %.2f\n - atributo %d: %.2f\n - soma: %.2f\n", escolha1, valor1_c1, escolha2, valor2_c1, soma_c1);
    printf("\nCarta2 (%s - %s)\n", carta2.estado, carta2.cidade);
    printf("- Atributo %d: %.2f\n - atributo %d: %.2f\n - soma: %.2f\n", escolha1, valor1_c2, escolha2, valor2_c2, soma_c2);

// Determina o vencedor pola soma
    printf("\n=== Resulato Final ===\n");
    (soma_c1 > soma_c2)
    ? printf("Carta1 venceu pela soma dos atributos:\n")
    : (soma_c2 > soma_c1
    ? printf("Carta2 venceu pela soma dos astributos!\n")
    : printf("Empate!\n"));

    return 0;

    }