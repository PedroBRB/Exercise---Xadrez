#include <stdio.h>

int main() {
    // Definindo as constantes para o número de casas a serem movidas
    const int ROOK_MOVES = 5;       // Torre move 5 casas para a direita
    const int BISHOP_MOVES = 5;     // Bispo move 5 casas na diagonal (cima-direita)
    const int QUEEN_MOVES = 8;      // Rainha move 8 casas para a esquerda
    
    // Variáveis de controle para os loops
    int square;
    
    printf("=== CHESS PIECES MOVEMENT SIMULATION ===\n\n");
    
    // ========================================
    // TORRE - Usando estrutura FOR
    // Move-se horizontalmente ou verticalmente
    // Simulando movimento de 5 casas para a direita
    // ========================================
    printf("ROOK - Horizontal movement (5 squares to the right):\n");
    
    for (square = 1; square <= ROOK_MOVES; square++) {
        printf("Right\n");
    }
    
    printf("\n"); // Linha em branco para separar as seções
    
    // ========================================
    // BISPO - Usando estrutura WHILE
    // Move-se na diagonal
    // Simulando movimento de 5 casas na diagonal cima-direita
    // ========================================
    printf("BISHOP - Diagonal movement (5 squares up and right):\n");
    
    square = 1; // Inicializando a variável de controle
    while (square <= BISHOP_MOVES) {
        printf("Up Right\n");
        square++; // Incrementando o contador
    }
    
    printf("\n"); // Linha em branco para separar as seções
    
    // ========================================
    // RAINHA - Usando estrutura DO-WHILE
    // Move-se em todas as direções
    // Simulando movimento de 8 casas para a esquerda
    // ========================================
    printf("QUEEN - Horizontal movement (8 squares to the left):\n");
    
    square = 1; // Inicializando a variável de controle
    do {
        printf("Left\n");
        square++; // Incrementando o contador
    } while (square <= QUEEN_MOVES);
    
    printf("\n=== END OF SIMULATION ===\n");
    
    return 0;
}