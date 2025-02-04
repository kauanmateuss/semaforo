# TAREFA 1 29/01 - Temporizador Periódico (semáforo)

## Descrição

Este projeto tem como objetivo explorar o uso de temporizadores a partir de um projeto de um semáforo, utilizando a função **add_repeating_timer_ms()**. O semáforo alterna entre vermelho, amarelo e verde a cada 3 segundos.

## Componentes Utilizados

Para funcionar na BitDogLab:

- Microcontrolador Raspberry Pi Pico W
- **LED RGB** com pinos conectados às **GPIOs 11, 12 e 13**.

Para funcionar no simulador Wokwi:

- Microcontrolador Raspberry Pi Pico W
- 03 LEDs
- 03 Resistores de 330 Ω.

## Funcionalidades

1. O Semáforo inicia com o led vermelho aceso.
2. Após 3 segundos apenas o led amarelo aceso.
3. Após 3 segundos apenas o led verde acende.
4. Esse ciclo vai continuar infinitamente.