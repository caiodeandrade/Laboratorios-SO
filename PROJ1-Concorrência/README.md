# PROJ1 - Concorrência

Este é o README para o "PROJ1 - Concorrência", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do projeto entregue.

## Integrantes do grupo

- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Desnvolvimento

### Problema
O código fornecido utiliza a função clone para criar cópias independentes do processo pai, cada uma realizando operações de transferência. O problema está na falta de mecanismos adequados para sincronizar as transações (problema de concorrência), o que pode gerar resultados errados. No código, existe uma condição de corrida, pois vários subprocessos tentam executar a função transferência simultaneamente, devido aos saldos serem compartilhados entre os subprocessos.

### Solução

Para solucionar o problema identificado acima, iremos realizar algumas adaptações no código, para que as transferências ocorram por Threads (processos que possuem área de memória compartilhada). Para que possamos utilizar e manipular as Threads em C e em sistemas UNIX, vamos importar a biblioteca `#include <pthread.h>` e a biblioteca `#include <stdlib.h>`, para conseguir alocar memória.

Desta forma, será possível simular transferências de dinheiro entre duas contas concorrentemente usando threads. Adicionalmente, para garantir a exclusão mútua e evitar problemas de concorrência, utilizamos o Mutex, que permite que somente uma Thread de cada vez acesse a região crítica (acessar/modificar as contas). Não podemos esquecer que toda vez que a Thread sai dessa região devemos liberar o Mutex, para que as demais consigam acessar a região também.

No código adaptado por nós, as transferências são feitas com base em números aleatórios, e o programa continua até que o saldo da conta `from` seja zerado, registrando o número total de transações e o número de transações específicas de `from` para `to`.

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

Para visualizar as saídas do código, basta olhar os arquivos `log1.txt` e `log2.txt`, porque se trata de uma saída com muitas linhas, ficando ruim de mostrar em imagens. Portanto, nesses 2 arquivos é possível ver a a saída completa.
