#include <stdio.h>

int main() {
    int N;  // Número de apertos nos interruptores
    scanf("%d", &N);

    int A = 0, B = 0; // Estados iniciais das lâmpadas A e B (0 = apagada, 1 = acesa)

    // Processa os interruptores
    for (int i = 0; i < N; i++) {
        int interruptor;
        scanf("%d", &interruptor);

        if (interruptor == 1) {
            // Aperta I1 -> alterna o estado da lâmpada A
            A = !A; // Alterna o valor de A (se A é 0, vira 1, se A é 1, vira 0)
        } else if (interruptor == 2) {
            // Aperta I2 -> alterna os estados de A e B
            A = !A; // Alterna o estado de A
            B = !B; // Alterna o estado de B
        }
    }

    // Imprime o estado final das lâmpadas
    printf("%d\n", A); // Estado final da lâmpada A
    printf("%d\n", B); // Estado final da lâmpada B

    return 0;
}
