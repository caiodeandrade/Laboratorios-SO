# Lab02a - Processos

Este é o README para o "Lab02a - Processos", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue. Além de responder as duas perguntas solicitadas pelo professor.

## Integrantes do grupo 
- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Como Compilar

Para compilar o programa no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para cada programa que deseja compilar, execute o seguinte comando, substituindo [NomeArquivo] pelo respectivo nome do programa: `gcc -o [NomeArquivo].bin [NomeArquivo].c`.
4. Por exemplo: você quer compilar o Process_ID.c, basta executar o comando `gcc -o Process_ID.bin Process_ID.c`. Assim, é gerado um executável chamado Process_ID.bin no diretório atual.

## Como Executar

Após compilar o programa desejado, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./[NomeArquivo].bin`.
3. Por exemplo: você compilou o Process_ID.c, basta executar o comando `./Process_ID.bin` que o programa dentro deste arquivo será executado.

OBS: Note que para os arquivos criandoCadeiaProcessos.c e criandoCadeiaProcessos02.c, utilizamos o comando `./criandoCadeiaProcessos.bin 1000 > saida1.txt` e `./criandoCadeiaProcessos02.bin 1000 > saida2.txt` (imagens na parte de Resultados). Isso foi feito, pois a variável n dos códigos é um argumento de linha de comando, e depois, direcionamos o resultado para um arquivo `.txt`.

## Resultados
O resultado desta atividade é entender um pouco mais sobre Processos (identificação, criação, conferir o ID e até criar uma cadeia de processos). Para comprovar que realizamos o que foi solicitado (compilado e executado no ambiente da AWS - conforme solicitado pelo professor), todos os códigos de exemplos do slide estarão abaixo no formato de imagens e as perguntas também serão respondidas no final deste README.
