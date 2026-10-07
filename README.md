# 🚗 Carrinho Robótico com Arduino e MIT App Inventor

Projeto de um carrinho robótico controlado por microcontrolador, programado utilizando a **Arduino IDE**, com suporte a múltiplas funcionalidades como controle via aplicativo Android (criado no **MIT App Inventor**), controle por teclado, desvio de obstáculos e seguidor de linha.

---

## 📂 Estrutura do Repositório

O projeto contém os seguintes códigos em C++ (`.ino`) para a Arduino IDE[cite: 1]:

* **`bluetooth_arduino.ino`**: Configuração e comunicação básica via Bluetooth para receber comandos externos[cite: 1].
* **`controle_carrinho.ino`**: Script principal para a movimentação e controle geral do carrinho[cite: 1].
* **`controle_teclado.ino`**: Permite controlar os movimentos do carrinho utilizando o monitor serial (teclado do computador)[cite: 1].
* **`desviar_obstaculos.ino`**: Código de autonomia onde o carrinho utiliza sensores para desviar de barreiras no caminho[cite: 1].
* **`seguidor_de_linha.ino`**: Código para a função de seguidor de linha (linha preta/branca no chão)[cite: 1].

---

## 🛠️ Tecnologias e Componentes Utilizados

* **Hardware:**
  * Microcontrolador compatível com Arduino (ex: Arduino Uno, Nano, etc.)
  * Micro motores DC / Motores com caixa de redução
  * Módulo Bluetooth (ex: HC-05 ou HC-06)
  * Chassi para carrinho robótico
  * Driver de motor (ex: L298N ou L9110S)
  * Sensores (para as funções de desvio de obstáculo e seguidor de linha)
* **Software:**
  * **Arduino IDE** (para gravação e testes dos códigos C++)
  * **MIT App Inventor** (para o desenvolvimento do aplicativo de controle via Smartphone)

---

## 🚀 Como Usar

### 1. Arduino IDE
1. Baixe e instale a [Arduino IDE](https://www.arduino.cc/en/software).
2. Conecte sua placa ao computador.
3. Abra o arquivo desejado (por exemplo, `controle_carrinho.ino` ou `bluetooth_arduino.ino`)[cite: 1].
4. Selecione a placa e a porta correta em `Ferramentas > Placa` e `Ferramentas > Porta`.
5. Clique no botão **Carregar** (Upload) para enviar o código para o microcontrolador.

### 2. Aplicativo (MIT App Inventor)
1. Acesse o [MIT App Inventor](https://appinventor.mit.edu/).
2. Importe o projeto do aplicativo de controle remoto via Bluetooth.
3. Instale o APK gerado no seu smartphone Android para começar a pilotar o carrinho à distância.
