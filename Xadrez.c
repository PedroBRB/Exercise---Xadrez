#include <stdio.h>

// ========================================
// FUNÇÕES RECURSIVAS PARA AS PEÇAS
// ========================================

// Função recursiva para movimento da Torre
// Parâmetros: current_move (movimento atual), total_moves (total de movimentos)
void move_rook_recursive(int current_move, int total_moves) {
    // Caso base: se já executou todos os movimentos, para a recursão
    if (current_move > total_moves) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Right\n");
    
    // Chamada recursiva para o próximo movimento
    move_rook_recursive(current_move + 1, total_moves);
}

// Função recursiva para movimento da Rainha
// Parâmetros: current_move (movimento atual), total_moves (total de movimentos)
void move_queen_recursive(int current_move, int total_moves) {
    // Caso base: se já executou todos os movimentos, para a recursão
    if (current_move > total_moves) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Left\n");
    
    // Chamada recursiva para o próximo movimento
    move_queen_recursive(current_move + 1, total_moves);
}

// Função recursiva para movimento diagonal do Bispo
// Parâmetros: current_move (movimento atual), total_moves (total de movimentos)
void move_bishop_recursive(int current_move, int total_moves) {
    // Caso base: se já executou todos os movimentos, para a recursão
    if (current_move > total_moves) {
        return;
    }
    
    // Imprime o movimento diagonal atual
    printf("Up Right\n");
    
    // Chamada recursiva para o próximo movimento
    move_bishop_recursive(current_move + 1, total_moves);
}

// Função para movimento do Bispo com loops aninhados
// Loop externo: movimento vertical, Loop interno: movimento horizontal
void move_bishop_nested_loops(int vertical_moves, int horizontal_moves) {
    // Loop externo - controla o movimento vertical (para cima)
    for (int vertical_step = 1; vertical_step <= vertical_moves; vertical_step++) {
        
        // Loop interno - controla o movimento horizontal (para a direita)
        // Para cada movimento vertical, executa um movimento horizontal
        for (int horizontal_step = 1; horizontal_step <= horizontal_moves; horizontal_step++) {
            printf("Up Right\n");
        }
    }
}

int main() {
    // Definindo as constantes para o número de casas a serem movidas
    const int ROOK_MOVES = 5;           // Torre move 5 casas para a direita
    const int BISHOP_MOVES = 5;         // Bispo move 5 casas na diagonal (cima-direita)
    const int QUEEN_MOVES = 8;          // Rainha move 8 casas para a esquerda
    const int KNIGHT_UP_MOVES = 2;      // Cavalo move 2 casas para cima (primeira parte do L)
    const int KNIGHT_RIGHT_MOVES = 1;   // Cavalo move 1 casa para a direita (segunda parte do L)
    
    // Variáveis de controle para loops complexos do cavalo
    int vertical_phase, horizontal_phase;
    int movement_completed;
    
    printf("=== ADVANCED CHESS PIECES MOVEMENT SIMULATION ===\n\n");
    
    // ========================================
    // TORRE - Usando RECURSIVIDADE
    // Move-se horizontalmente para a direita
    // Substituindo o loop original por função recursiva
    // ========================================
    printf("ROOK - Recursive movement (5 squares to the right):\n");
    move_rook_recursive(1, ROOK_MOVES);
    printf("\n");
    
    // ========================================
    // BISPO - Usando RECURSIVIDADE
    // Move-se na diagonal (cima-direita)
    // Implementação recursiva do movimento diagonal
    // ========================================
    printf("BISHOP - Recursive diagonal movement (5 squares up-right):\n");
    move_bishop_recursive(1, BISHOP_MOVES);
    printf("\n");
    
    // ========================================
    // BISPO - Usando LOOPS ANINHADOS
    // Loop externo: movimento vertical
    // Loop interno: movimento horizontal
    // Demonstra implementação alternativa com loops aninhados
    // ========================================
    printf("BISHOP - Nested loops movement (5 squares up-right):\n");
    move_bishop_nested_loops(BISHOP_MOVES, 1); // 5 movimentos verticais, 1 horizontal por vez
    printf("\n");
    
    // ========================================
    // RAINHA - Usando RECURSIVIDADE
    // Move-se horizontalmente para a esquerda
    // Substituindo o loop original por função recursiva
    // ========================================
    printf("QUEEN - Recursive movement (8 squares to the left):\n");
    move_queen_recursive(1, QUEEN_MOVES);
    printf("\n");
    
    // ========================================
    // CAVALO - Usando LOOPS COMPLEXOS com múltiplas variáveis
    // Move-se em "L": 2 casas para cima, depois 1 casa para a direita
    // Implementação avançada com controle de fluxo usando continue e break
    // Múltiplas variáveis de controle e condições complexas
    // ========================================
    printf("KNIGHT - Complex loops L-movement (2 squares up, then 1 square right):\n");
    
    // Loop externo controla as fases do movimento (vertical e horizontal)
    for (int phase = 1; phase <= 2; phase++) {
        movement_completed = 0; // Flag para controlar conclusão da fase
        
        // Primeira fase: movimento vertical (para cima)
        if (phase == 1) {
            vertical_phase = 1;
            
            // Loop interno com múltiplas condições e variáveis
            while (vertical_phase <= KNIGHT_UP_MOVES && !movement_completed) {
                
                // Loop mais interno para controle fino do movimento
                for (int step_control = 1; step_control <= 1; step_control++) {
                    
                    // Condição complexa: verifica se deve continuar o movimento
                    if (vertical_phase > KNIGHT_UP_MOVES) {
                        movement_completed = 1;
                        break; // Sai do loop interno se exceder o limite
                    }
                    
                    printf("Up\n");
                    vertical_phase++;
                    
                    // Continue usado para controle de fluxo
                    if (vertical_phase <= KNIGHT_UP_MOVES) {
                        continue; // Continua no próximo ciclo se ainda há movimentos
                    }
                }
                
                // Break usado para sair do loop while quando necessário
                if (movement_completed) {
                    break;
                }
            }
        }
        // Segunda fase: movimento horizontal (para a direita)
        else if (phase == 2) {
            horizontal_phase = 1;
            movement_completed = 0; // Reset da flag para a nova fase
            
            // Loop interno com controle similar à fase vertical
            while (horizontal_phase <= KNIGHT_RIGHT_MOVES && !movement_completed) {
                
                // Loop mais interno para controle detalhado
                for (int step_control = 1; step_control <= 1; step_control++) {
                    
                    // Condição complexa para controle do movimento horizontal
                    if (horizontal_phase > KNIGHT_RIGHT_MOVES) {
                        movement_completed = 1;
                        break; // Sai se exceder o limite de movimentos horizontais
                    }
                    
                    printf("Right\n");
                    horizontal_phase++;
                    
                    // Continue para otimizar o fluxo
                    if (horizontal_phase <= KNIGHT_RIGHT_MOVES) {
                        continue;
                    }
                }
                
                // Break para finalizar quando movimento estiver completo
                if (movement_completed) {
                    break;
                }
            }
        }
    }
    
    printf("\n=== ADVANCED SIMULATION COMPLETED ===\n");
    
    return 0;
}