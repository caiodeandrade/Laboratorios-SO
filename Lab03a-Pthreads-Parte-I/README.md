# Lab03a - Pthreads Parte I

Este é o README para o "Lab03a - Pthreads Parte I", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do laboratório entregue.

## Integrantes do grupo

- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Como Compilar

Para compilar o programa do laboratório no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para compilar o programa, execute o seguinte comando: `gcc -o multiplicacaoPthreads.bin multiplicacaoPthreads.c -lpthread`.
4. Assim, é gerado um executável chamado `multiplicacaoPthreads.bin` no diretório atual.

## Como Executar

Após compilar o projeto, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./multiplicacaoPthreads.bin >> saida.txt`.
3. Com o comando acima, no arquivo `saida.txt` será exibido o resultado da execução do programa.

## Resultados
O resultado esperado (multiplicação correta de matrizes) para esta atividade foi alcançado. Para comprovar que nosso código foi compilado e executado no ambiente da AWS (conforme solicitado pelo professor), apresentamos a seguinte imagem:

![Screenshot_1](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/d82a605e-75ca-4a05-b104-5667aacd5937)

Para visualizar a saída do código, basta olhar o arquivo `saida.txt`, pois fica melhor a visualização da Matriz resultado. Abaixo, temos uma imagem que serve como comprovação que nosso resultado está correto, pois utilizamos uma calculadora de matrizes online, onde digitamos a matriz A e elevamos ela ao quadrado. Elevamos ela ao quadrado, pois como a matriz B é idêntica a matriz A, é obtido o mesmo resultado, ou seja, AxB é igual a A^2.

![Screenshot_2](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/62e59c19-3fca-4234-b18e-ff4c894363cf)
