# include <stdio.h>
# include <string.h>

struct Carta {
    char nome [30];
    int populacao;
    float area;
    float pib;
    int pontos_Turisticos;
    float densidade;
};
int main() {
    struct Carta c1, c2;

// Cadastro das Cartas 
    strcpy(c1.nome, "Brasil");
       c1.populacao = 214000000;
       c1.area      = 8516000;
       c1.pib       = 1.9; 
       c1.pontos_Turisticos = 10;
       c1.densidade = c1.populacao / c1.area;
    
    strcpy(c2.nome, "Argentina");
       c2.populacao = 46000000;
       c2.area      = 2780000;
       c2.pib       = 0.6; 
       c2.pontos_Turisticos = 8;
       c2.densidade = c2.populacao / c2.area;

int escolha;
    printf("=== Super Trunfo - Comparacao ===\n");
    printf("Escolha o atributo para comparar:\n");

    printf("1 - Populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
scanf("%d", &escolha);

    printf("\nComparando %s x %s\n", c1.nome, c2.nome);
switch (escolha) {

case 1: // População
    printf("Populacao: \n");
    printf(" %s = %d\n", c1.nome, c1.populacao);
    printf(" %s = %d\n", c2.nome, c2.populacao);
if (c1.populacao > c2.populacao){ 
    printf("\n>>> Resultado: %s venceu!\n", c1.nome);
} else if(c2.populacao > c1.populacao){
    printf("\n>>> Resulatdo: %s venceu!\n", c2.nome);
} else { 
    printf("\n>>> Resultado: Empate!\n");
}    
break;

case 2: // Área
    printf("Area:\n");
    printf(" %s = %.2f Km²\n", c1.nome, c1.area);
    printf(" %s = %.2f Km²\n", c2.nome, c2.area);
if (c1.area > c2.area){ 
    printf("\n>>> Resultado: %s venceu!\n", c1.nome);
} else if(c2.area > c1.area){
    printf("\n>>> Resultado: %s venceu!\n", c2.nome);    
} else { 
    printf("\n>>> Resultado: Empate!\n");
}
break;

case 3: // PIB 
    printf("Pib:\n");
    printf(" %s = %.2f trilhoes\n", c1.nome, c1.pib);
    printf(" %s = %.2f trilhoes\n", c2.nome, c2.pib);
if (c1.pib > c2.pib){ 
    printf("\n>>> Resultado: %s venceu!\n", c1.nome);
} else if(c2.pib > c1.pib){
    printf("\n>>> Resultado: %s venceu!\n", c2.nome);    
} else { 
    printf("\n>>> Resultado: Empate!\n");
}
break;

case 4: // Pontos Turisticos
    printf("Pontos Turisticos: \n");
    printf(" %s = %d\n", c1.nome, c1.pontos_Turisticos);
    printf(" %s = %d\n", c2.nome, c2.pontos_Turisticos);
if (c1.pontos_Turisticos > c2.pontos_Turisticos){ 
    printf("\n>>> Resultado: %s venceu!\n", c1.nome);
} else if(c2.pontos_Turisticos > c1.pontos_Turisticos){ 
    printf("\n>>> Resulatdo: %s venceu!\n", c2.nome);
} else { 
    printf("\n>>> Resultado: Empate!\n");
}    
break;

case 5: // Densidade Demografica (Regra Invertida) 
    printf("Densidade:\n");
    printf(" %s = %.2f Km²\n", c1.nome, c1.densidade);
    printf(" %s = %.2f Km²\n", c2.nome, c2.densidade);
if (c1.densidade < c2.densidade){ 
    printf("\n>>> Resultado: %s venceu!\n", c1.nome);
} else if(c2.densidade < c1.densidade){
    printf("\n>>> Resultado: %s venceu!\n", c2.nome);    
} else { 
    printf("\n>>> Resultado: Empate!\n");
}
break;
default:
    printf("Opcao invalida!\n");
    break;   
}

return 0;
}