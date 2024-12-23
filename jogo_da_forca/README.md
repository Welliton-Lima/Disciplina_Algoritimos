# Jogo da Forca em C

Este projeto é um **jogo da forca** desenvolvido em linguagem C. O jogo é uma implementação simples jogada no terminal, com funcionalidades que permitem ao jogador adivinhar palavras ocultas dentro de um número limitado de tentativas.  

O projeto foi criado e testado no **Code::Blocks** utilizando o compilador MinGW.  

---

## 🎮 Sobre o jogo

O **jogo da forca** desafia o jogador a adivinhar uma palavra secreta, letra por letra. Cada erro aproxima o jogador da derrota. O objetivo é descobrir a palavra antes que todas as tentativas se esgotem.  

---

## 🛠️ Funcionalidades

- Escolha aleatória de palavras de uma lista predefinida.
- Contagem de erros e tentativas restantes.
- Exibição dinâmica do progresso da palavra.
- Interface simples no terminal.  

---

## 🧩 Como funciona?

1. O jogo seleciona uma palavra aleatória e oculta.
2. O jogador tenta adivinhar uma letra por vez.
3. Caso a letra esteja na palavra, ela é revelada.
4. Caso contrário, o jogador perde uma tentativa.
5. O jogo termina quando o jogador descobre a palavra ou esgota todas as tentativas.

---

## 🚀 Como executar

### Pré-requisitos

1. **IDE Code::Blocks**:
   - Baixe e instale o [Code::Blocks](http://www.codeblocks.org/downloads).
   - Certifique-se de que o compilador MinGW está configurado corretamente.

2. **Código-fonte**:
   - Clone ou baixe este repositório:
     ```bash
     git clone https://github.com/Welliton-Lima/jogo-da-forca-c.git
     ```

### Passos para executar:

1. Abra o Code::Blocks.
2. No menu **File**, clique em **Open** e selecione o arquivo do projeto (`jogo_da_forca.cbp`).
3. Compile e execute o projeto pressionando `F9` ou clicando em **Build and Run**.

---

## 📝 Regras do Jogo

1. O jogador inicia com um número fixo de tentativas (exemplo: 6).
2. Digite uma letra por vez e pressione Enter.
3. Se a letra estiver na palavra, ela será exibida na posição correta.
4. Se a letra não estiver na palavra, o número de tentativas restantes será reduzido.
5. Uma dia é liberada quando o jogador tiver apenas mais uma tentativa
6. O jogo termina quando:
   - O jogador adivinha todas as letras da palavra (vitória).
   - O jogador esgota todas as tentativas (derrota).

---

- **Lógica do jogo**:
  - Usa loops e condicionais para controlar o fluxo do jogo e verificar cada tentativa.
  - Manipula arrays para armazenar as letras da palavra e as letras já adivinhadas.

---

