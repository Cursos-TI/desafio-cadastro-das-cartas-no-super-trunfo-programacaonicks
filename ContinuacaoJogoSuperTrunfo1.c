#include <stdio.h>

// Definição da estrutura para armazenar os dados da cidade
typedef struct {
    char nomeCidade[50];
    char nomeEstado[50];
    int codigo;
    int codigoEstado;
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
    double superPoder;
} Carta;

// Função para calcular os valores derivados
void calcularValores(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos;
}

// Função para exibir os dados da cidade
void exibirCarta(Carta c) {
    printf("\nCadastro da Cidade:\n");
    printf("Cidade: %s\n", c.nomeCidade);
    printf("Estado: %s\n", c.nomeEstado);
    printf("Código da cidade: %d\n", c.codigo);
    printf("Código do estado: %d\n", c.codigoEstado);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", c.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", c.pibPerCapita);
}

void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação entre %s e %s:\n", c1.nomeCidade, c2.nomeCidade);
    printf("População: %s vence!\n", (c1.populacao > c2.populacao) ? c1.nomeCidade : c2.nomeCidade);
    printf("Área: %s vence!\n", (c1.area > c2.area) ? c1.nomeCidade : c2.nomeCidade);
    printf("PIB: %s vence!\n", (c1.pib > c2.pib) ? c1.nomeCidade : c2.nomeCidade);
    printf("Pontos Turísticos: %s vence!\n", (c1.pontosTuristicos > c2.pontosTuristicos) ? c1.nomeCidade : c2.nomeCidade);
    printf("Densidade Populacional: %s vence!\n", (c1.densidadePopulacional > c2.densidadePopulacional) ? c1.nomeCidade : c2.nomeCidade);
    printf("PIB per Capita: %s vence!\n", (c1.pibPerCapita > c2.pibPerCapita) ? c1.nomeCidade : c2.nomeCidade);
    printf("Super Poder: %s vence!\n", (c1.superPoder > c2.superPoder) ? c1.nomeCidade : c2.nomeCidade);
}

    int main() {

    // Array contendo as 32 cidades
    Carta cidades[32] = {
        {"Jundiaí", "São Paulo", 352000, 1, 425000, 431.4, 21.0, 12, 0, 0, 0},
        {"Ribeirao Preto", "São Paulo", 3543452, 1, 700000, 651.23, 28, 14, 0, 0},
        {"Sorocaba", "São Paulo", 3552205, 1, 700000, 45.6, 22, 12, 0, 0, 0},
        {"Osasco", "São Paulo", 3534401, 1, 700000, 65.35, 25, 10, 0, 0, 0},
        {"Cabo Frio", "Rio de Janeiro", 3300703, 2, 240000, 402.41, 6.5, 15, 0, 0, 0},
        {"Niteroi", "Rio de Janeiro", 3303302, 2, 520000, 133.56, 26, 15, 0, 0, 0},
        {"Angra dos Reis", "Rio de Janeiro", 3300100, 2, 200000, 826.8, 8.5, 20, 0, 0, 0},
        {"Itaguai", "Rio de Janeiro", 3302001, 2, 130000, 434.8, 4, 10, 0, 0, 0},
        {"Belo Horizonte", "Minas Gerais", 3106200, 3, 25000, 331.4, 85, 20, 0, 0, 0},
        {"Ipatinga", "Minas Gerais", 3131306, 3, 270000, 146.3, 6, 10, 0, 0, 0},
        {"Betim", "Minas Gerais", 3106808, 3, 45000, 69.6, 4, 10, 0, 0,0},
        {"Divinopolis", "Minas Gerais", 3122306, 3, 25000, 225.8, 4.5, 10, 0, 0, 0},
        {"Belo Horizonte", "Minas Gerais", 3106200, 3, 25000, 331.4, 85, 20, 0, 0, 0},
        {"Salvador", "Bahia", 2927408, 4, 29000, 693.8, 88, 35, 0, 0, 0},
        {"Porto Seguro", "Bahia", 29271088, 4, 16000, 2215.5, 3.5, 18, 0, 0, 0},
        {"Barreiras", "Bahia", 2903205, 4, 16000, 12438.4, 8.9, 8, 0, 0, 0},
        {"Alagoinha", "Bahia", 2600201, 4, 15000, 308.8, 120, 5, 0, 0, 0},
        {"Porto Alegre", "Rio Grande do Sul", 4314902, 5, 15000, 496.8, 67, 30, 0, 0, 0},
        {"Gravatai", "Rio Grande do Sul", 4309209, 5, 20000, 468.92, 6.8, 8, 0, 0, 0},
        {"Pelotas", "Rio Grande do Sul", 4313902, 5, 35000, 1492.8, 9, 12, 0, 0, 0},
        {"Caxias do Sul", "Rio Grande do Sul", 4305108, 5, 50000, 1267.8, 19, 20, 0, 0, 0},
        {"Vitoria", "Espirito Santo", 3205309, 6, 365000, 93.4, 14, 20, 0, 0, 0},
        {"Colatina", "Espirito Santo", 3202306, 6, 130000, 1345, 4, 7, 0, 0, 0},
        {"Linhares", "Espirito Santo", 3203502, 6, 17000, 4019.7, 5, 7, 0, 0, 0},
        {"Vila Velha", "Espirito Santo", 3205200, 6, 50000, 209.7, 8, 20, 0, 0, 0},
        {"Goiania", "Goias", 5208707, 7, 15000, 739.5, 32, 25, 0, 0, 0},
        {"Formosa", "Goias", 520506, 7, 120000, 5563.3,1.8, 7, 0, 0, 0},
        {"Jatai", "Goias", 5212405, 7, 110000, 10679.6, 2.6, 7, 0, 0, 0},
        {"Rio Verde", "Goias", 5218800, 7, 240000, 6153.3, 5.5, 8, 0, 0, 0},
        {"Maceio", "Alagoas", 2704302, 8, 1000000,511.0, 19, 25, 0, 0, 0},
        {"Penedo", "Alagoas", 2706301, 8, 65000, 292.0, 1.2, 8, 0, 0, 0},
        {"Arapiraca", "Alagoas", 2700300, 8, 2300000,645.2, 2.6, 7, 0, 0, 0},
        {"Maragogi", "ALagoas", 2706102, 8, 35000, 380.0, 480, 12, 0, 0, 0},

    };

    int numCidades = 32;

    // Comparar todas as cidades entre si
for (int i = 0; i < numCidades; i++) {
    for (int j = i + 1; j < numCidades; j++) { // Evita comparações repetidas
        compararCartas(cidades[i], cidades[j]);
    }
}

    return 0;
}