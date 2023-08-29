# Lab01b - Introdução ao C

Este é o README para o "Lab01b - Introdução ao C", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue.

## Integrantes do grupo 
- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Como Compilar

Para compilar o programa no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para cada programa que deseja compilar, execute o seguinte comando, substituindo [N] pelo número do exercíco (01 até 14): `gcc -o ex[N].bin ex[N].c`.
4. Por exemplo: você quer compilar o ex01.c, basta executar o comando `gcc -o ex01.bin ex01.c`. Assim, é gerado um executável chamado ex01.bin no diretório atual.

## Como Executar

Após compilar o programa desejado, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./ex[N].bin`.
3. Por exemplo: você compilou o ex01.c, basta executar o comando `./ex01.bin` que o programa dentro deste arquivo será executado.

## Resultados
Como se trata de uma lista com 14 exercícios, nenhum deles possui input do usuário por meio do teclado, de maneira a facilitar a correção do professor. A seguir serão colocadas imagens para comprovar que nossos exercícios foram compilados e executados no ambiente da AWS (conforme solicitado pelo professor):

### Exercício 01
Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

![Screenshot_1](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/8be61fe3-7b87-461d-8b4a-3c6b3ecbe19c)

### Exercício 02
Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2 x 2 + N3 x 3 + ME)/7. A partir da média, informar o conceito de acordo com os tópicos abaixo:

* maior ou igual a 9 = A
* maior ou igual a 7.5 e menor que 9 = B
* maior ou igual a 6 e menor que 7.5 = C
* maior ou igual a 4 e menor que 6 = D
* menor que 4 = E 
  
![Screenshot_2](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/711a59b2-53ce-464c-a4a7-551e3220e2bc)

### Exercício 03
Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

<div align="center">
<img src="https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/6f056a3e-baa4-481f-81d1-fa00b6b480c6" width="150px" />
</div>

![Screenshot_3](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/ee8a9b49-6a12-4973-a2bb-6c066dc0df0b)

### Exercício 04
Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C.

![Screenshot_4](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/547a1a44-442e-44c7-acc0-5390eecedc09)

### Exercício 05
Crie um programa capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna.

![Screenshot_5](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/7f596388-09e4-4732-b9c4-7f378c2203a7)

### Exercício 06
Crie um programa capaz de criar a transposta de uma matriz.

![Screenshot_6](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/7d62cf03-12bf-4f31-9e9b-fdc1a0953d80)

### Exercício 07
Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. Insira o nome de 3 pessoas e a seguir imprima os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

![Screenshot_7](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/fc3b14a0-3437-444e-bd55-6bc00ba4ebe5)

### Exercício 08
Crie uma função capaz de criar a transposta de uma matriz.

![Screenshot_8](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/247e0248-9298-41d2-a192-d16041559295)

### Exercício 09
Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.

![Screenshot_9](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/a5b21c72-84da-4e12-bf51-097e35124885)

### Exercício 10
Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.

![Screenshot_10](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/47a10ffa-d7f1-429f-985c-0bba97dbd406)

### Exercício 11
Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.

![Screenshot_11](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/755a3e86-1f00-48c0-9dbf-ba7faaeba02c)

### Exercício 12
Faça uma função que retorne a posição de um dado caracter dentro de uma string.

![Screenshot_12](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/c11de635-e849-491d-b96b-bc0e15ee0606)

### Exercício 13
Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

![Screenshot_13](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/7de8810a-4a79-4106-9620-a1269ebe3fca)

### Exercício 14
Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.

![Screenshot_14](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/4fdb4ab4-9316-4275-94a9-fb385dc52a38)
