#include<stdio.h>
struct carta {
     char estado[30];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos turisticos;

};
void exibir carta(struct carta c,int numero){
    printf("\ncarta%d:\n",numero);
    printf("estado:%s\n",c.estado);
    printf("codigo:%s\n",c.codigo);
    printf("nome da cidade:%s\n",c.cidade);
    printf("populacao:%d\n",c.populacao);
    printf("area:%2f km\n",c.area);
    printf("pib:%2fbilhors de reais\n",c.pib);
    printf("numero de pontos turisticos:%d\n",c.pontos turisticos);
}

int main(){
    struct carta carta1,carta2;

       printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Coleta de dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}









}
