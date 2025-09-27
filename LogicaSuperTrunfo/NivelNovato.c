# include <stdio.h>

//Estrutura para armazenar os atributos da carta
typedef struct {
    char estado [30];
    char codigo [5];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
} Carta;

// Função para calcular os valores derivados
void calcularIndicadores(Carta *c) { 
     c->densidade = c->populacao / c->area;
     c->pibPerCapita = c->pib / c->populacao;
}

// Função para comparar atributos
void compararCartas (Carta c1, Carta c2) {
    printf("=== Comparando Cartas ===\n,\n");

// População
if (c1.populacao > c2.populacao)
   printf("Populacao: %s venceu (%d > %d)\n", c1.nomeCidade, c1.populacao, c2.populacao); 
else if (c2.populacao > c1.populacao)
   printf("Populacao: %s venceu (%d > %d)\n", c2.nomeCidade,c2.populacao, c1.populacao);
else
   printf("Populacao: Empate (%d = %d)\n", c1.populacao, c2.populacao);
   
// Área
if (c1.area > c2.area)
   printf("Área: %s venceu (%.2f > %.2f)\n", c1.nomeCidade, c1.area, c2.area);
else if (c2.area > c1.area)
   printf("Área: %s venceu (%.2f > %.2f)\n", c2.nomeCidade, c2.area, c1.area);
else  
   printf("Área: Empate (%.2f = %.2f)\n", c1.area, c2.area);
   
// PIB 
if (c1.pib > c2.pib)
   printf("PIB: %s venceu (%.2f > %.2f)\n", c1.nomeCidade, c1.pib, c2.pib);
else if (c2.pib > c1.pib)
   printf("PIB: %s venceu (%.2f > %.2f)\n", c2.nomeCidade, c2.pib, c1.pib);
else 
   printf("PIB: Empate (%.2f = %.2f)\n", c1.pib, c2.pib);
 
//Pontos Turisticos
if (c1.pontosTuristicos > c2.pontosTuristicos)
   printf("Pontos Turisticos: %s venceu (%d > %d)\n", c1.nomeCidade, c1.pontosTuristicos, c2.pontosTuristicos);
else if (c2.pontosTuristicos > c1.pontosTuristicos)
   printf("Pontos Turisticos: %s venceu (%d > %d)\n", c2.nomeCidade, c2.pontosTuristicos, c1.pontosTuristicos);
else 
   printf("Pontos Turisticos: Empate (%d = %d)\n", c1.pontosTuristicos, c2.pontosTuristicos);

// Densidade Populacional (Menor Vence)
if (c1.densidade < c2.densidade)
   printf("Densidade Populacional: %s venceu (%.2f < %.2f)\n", c1.nomeCidade, c1.densidade, c2.densidade);
else if (c2.densidade < c1.densidade)
   printf("Densidade Populacional: %s venceu (%.2f < %.2f)\n", c2.nomeCidade, c2.densidade, c1.densidade);
else 
   printf("Densidade Populacional: Empate (%.2f = %.2f)\n", c1.densidade, c2.densidade); 
   
// PIB Per Capita
if (c1.pibPerCapita > c2.pibPerCapita)
   printf("PIB Per Capita: %s venceu (%.2f > %.2f)\n", c1.nomeCidade, c1.pibPerCapita, c2.pibPerCapita);
else if (c2.pib > c1.pib)
   printf("PIB Per Capita: %s venceu (%.2f > %.2f)\n", c2.nomeCidade, c2.pibPerCapita, c1.pibPerCapita);
else 
   printf("PIB Per Capita: Empate (%.2f = %.2f)\n", c1.pibPerCapita, c2.pibPerCapita);
   printf("\n=== Fim da Comparacao ===\n");
}

int main(){
    // Criando duas cartas exemplo (Cidades Diferentes);
    Carta carta1 = {"Minas Gerais", "C01", "Belo Horizonte",
    2500000, 331.4, 105000000.0, 12};

    Carta carta2 = {"Parana", "D02", "Curitiba",
    1960000, 434.9, 95000000.0, 10};

    // Calculando Indicadores
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    //Comparando Cartas
    compararCartas(carta1, carta2);

    return 0;
}