# TAREFA 1 29/01 - Temporizador Periódico (semáforo)

## Descrição

Este projeto tem como objetivo explorar o uso de temporizadores a partir de um projeto de um semáforo, utilizando a função **add_repeating_timer_ms()**. O semáforo alterna entre vermelho, amarelo e verde a cada 3 segundos.

## Componentes Utilizados

- Microcontrolador Raspberry Pi Pico W
- **LED RGB** com pinos conectados às **GPIOs 11, 12 e 13**.
- **Botão A** conectado à **GPIO 5**.

## Funcionalidades

1. O Semáforo inicia com o led vermelho aceso.
2. Após 3 segundos apenas o led amarelo aceso.
3. Após 3 segundos apenas o led verde acende.
4. Esse ciclo vai continuar infinitamente.