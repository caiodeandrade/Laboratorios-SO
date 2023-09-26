# PROJ1 - Concorrência

Este é o README para o "PROJ1 - Concorrência", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue.

## Integrantes do grupo

- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.
- 
## Desnvolvimento

### Problema

### Solução

## Como Compilar

Para compilar o programa do projeto no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para compilar o programa, execute o seguinte comando: `gcc -o Projeto01.bin Projeto01.c -lpthread`.
4. Assim, é gerado um executável chamado `Projeto01.bin` no diretório atual.

## Como Executar

Após compilar o projeto, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./Projeto01.bin (número de threads) >> [nome_arquivo].txt`.
3. No comando acima, basta substituir (número de threads) por um número desejado e o [nome_arquivo] por qualquer nome de sua preferência, pois nesse arquivo será exibido o resultado da execução do programa.
4. Por exemplo: você compilou o Projeto.c e quer executar ele com 100 threads, e depois adicionar em um arquivo saidas.txt, basta executar o comando `./Projeto01.bin 100 >> saidas.txt`.

OBS: Isso foi feito, pois a variável do número de Threads do código é um argumento de linha de comando, e depois, direcionamos o resultado para um arquivo `.txt`.

## Resultados
O resultado desta atividade é entender sobre como abordar um problema de concorrência. Para comprovar que nosso código foi compilado e executado no ambiente da AWS (conforme solicitado pelo professor), apresentamos a seguinte imagem:

![Screenshot_1](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/51321cc9-68aa-4c3c-a6f5-38d01dd2760b)
