#include <stdio.h>

int main() {
    // Definindo as constantes para o número de casas a serem movidas
    const int ROOK_MOVES = 5;       // Torre move 5 casas para a direita
    const int BISHOP_MOVES = 5;     // Bispo move 5 casas na diagonal (cima-direita)
    const int QUEEN_MOVES = 8;      // Rainha move 8 casas para a esquerda
    const int KNIGHT_DOWN_MOVES = 2; // Cavalo move 2 casas para baixo (primeira parte do L)
    const int KNIGHT_LEFT_MOVES = 1; // Cavalo move 1 casa para a esquerda (segunda parte do L)
    
    // Variáveis de controle para os loops
    int square;
    int knight_step; // Variável adicional para controlar os loops aninhados do cavalo
    
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
    
    // ========================================
    // CAVALO - Usando loops aninhados (FOR + WHILE)
    // Move-se em "L": 2 casas para baixo, depois 1 casa para a esquerda
    // Loop externo (FOR) controla as etapas do movimento
    // Loop interno (WHILE) executa cada etapa do movimento
    // ========================================
    printf("\nKNIGHT - L-shaped movement (2 squares down, then 1 square left):\n");
    
    // Loop externo FOR - controla as duas etapas do movimento em L
    // Etapa 1: movimento para baixo (2 casas)
    // Etapa 2: movimento para a esquerda (1 casa)
    for (int movement_phase = 1; movement_phase <= 2; movement_phase++) {
        
        if (movement_phase == 1) {
            // Primeira fase: mover 2 casas para baixo
            knight_step = 1; // Inicializando contador para o loop while
            while (knight_step <= KNIGHT_DOWN_MOVES) {
                printf("Down\n");
                knight_step++; // Incrementando o contador
            }
        } else {
            // Segunda fase: mover 1 casa para a esquerda
            knight_step = 1; // Reinicializando contador para o loop while
            while (knight_step <= KNIGHT_LEFT_MOVES) {
                printf("Left\n");
                knight_step++; // Incrementando o contador
            }
        }
    }
    
    printf("\n=== KNIGHT MOVEMENT COMPLETED ===\n");
    
    return 0;
}