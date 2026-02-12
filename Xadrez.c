#include <stdio.h>
// CONSTANTES
const int PASSOS_BISPO = 5;
const int PASSOS_TORRE = 5;
const int PASSOS_RAINHA = 8;

// FUNÇÕES RECURSIVAS 

// O Bispo se move na diagonal: Combinação de Cima e Direita
void moverBispoRecursivo(int n) {
    if (n <= 0) return; // Caso base
    printf("Cima\nDireita\n");
    moverBispoRecursivo(n - 1); // Chamada recursiva
}

// A Torre se move para a Direita
void moverTorreRecursiva(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorreRecursiva(n - 1);
}

// A Rainha se move para a Esquerda
void moverRainhaRecursiva(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(n - 1);
}

int main() {
    printf("MOVIMENTAÇÃO DAS PEÇAS \n\n");

    // 1. MOVIMENTAÇÃO DO BISPO
    printf("Movimentando Bispo (%d casas na diagonal):\n", PASSOS_BISPO);
    moverBispoRecursivo(PASSOS_BISPO);
    printf("\n");

    // 2. MOVIMENTAÇÃO DA TORRE
    printf("Movimentando Torre (%d casas para direita):\n", PASSOS_TORRE);
    moverTorreRecursiva(PASSOS_TORRE);
    printf("\n");

    // 3. MOVIMENTAÇÃO DA RAINHA
    printf("Movimentando Rainha (%d casas para esquerda):\n", PASSOS_RAINHA);
    moverRainhaRecursiva(PASSOS_RAINHA);
    printf("\n");

    // 4. MOVIMENTAÇÃO DO CAVALO (Nível Mestre: Loops Aninhados e Variáveis Múltiplas)
    // Simulação: 2 para Baixo e 1 para a Esquerda
    printf("Movimentando Cavalo (Em L: Baixo e Esquerda):\n");

    // Loop com múltiplas variáveis: 'i' para vertical, 'j' para controle horizontal
    for (int i = 0, j = 1; i < 3; i++) {
        
        // Controle de fluxo: Enquanto não atingir a 3ª iteração, move para baixo
        if (i < 2) {
            printf("Baixo\n");
            continue; // Força a próxima iteração do loop externo
        }

        // Ao atingir a parte final do L, executa o movimento horizontal
        while (j > 0) {
            printf("Esquerda\n");
            j--;
            break; // Interrompe o loop interno após 1 execução
        }
    }

    printf("\n--- EXECUÇÃO FINALIZADA COM SUCESSO ---\n");

    return 0;
}
