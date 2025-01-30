#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definição dos pinos
#define led_red_pin 11
#define led_yellow_pin 13
#define led_green_pin 12

// Variável para guardar o estado dos leds
uint estado = 0;

// função callback do temporizador
bool repeating_timer_callback(struct repeating_timer *){
    // troca os estados dos leds
    gpio_put(led_red_pin, estado == 0);
    gpio_put(led_yellow_pin, estado == 1);     // Liga o led amarelo
    gpio_put(led_green_pin, estado == 2);   // liga o led verde

    // Passa para o proximo estado
    estado = (estado + 1) % 3;

    // retorna verdadeiro para o temporizador ficar repetindo
    return true;
}

int main()
{
    stdio_init_all();

    // Inicializar os pinos gpios
    gpio_init(led_red_pin);
    gpio_init(led_yellow_pin);
    gpio_init(led_green_pin);

    // Setando os pinos como saida
    gpio_set_dir(led_red_pin, GPIO_OUT);
    gpio_set_dir(led_yellow_pin, GPIO_OUT);
    gpio_set_dir(led_green_pin, GPIO_OUT);

    // declarando uma estrutura de temporizador
    struct repeating_timer timer;

    // configurando o temporizador para chamar a função de callback a cada 3 segundos
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Loop infinito padrão
    while (true) {
        printf("Semáforo ativo...\n");
        
        // Espera 1 segundo pra imprimir a mensagem novamente
        sleep_ms(1000);
    }
}
