# Lab03b - Pthreads Parte II

Este é o README para o "Lab03b - Pthreads Parte II", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do laboratório entregue.

## Integrantes do grupo

- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Como Compilar

Para compilar os programas do laboratório no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para cada programa que deseja compilar, execute o seguinte comando, substituindo [NomeArquivo] pelo respectivo nome do programa: `gcc -o [NomeArquivo].bin [NomeArquivo].c -lpthread`.
4. Por exemplo: você quer compilar o piSemMutex.c, basta executar o comando `gcc -o piSemMutex.bin piSemMutex.c -lpthread`. Assim, é gerado um executável chamado piSemMutex.bin no diretório atual.

## Como Executar

Após compilar o projeto, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./[NomeArquivo].bin <número de threads> >> [ArquivoSaida].txt`.
3. No comando acima, basta substituir: `<número de threads>` por um número desejado, `[NomeArquivo]` pelo nome do arquivo executável gerado pela compilação e o `[ArquivoSaida]` por um nome de sua preferência.
4. Com o comando acima, no arquivo `[ArquivoSaida].txt` será exibido o resultado da execução do programa.

## Resultados
O laboratório tem como resultado ver como o uso ou não do mutex pode influenciar no cálculo de pi. Para comprovar que nosso código foi compilado e executado no ambiente da AWS (conforme solicitado pelo professor), apresentamos a seguinte imagem:

![Screenshot_1](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/abac3ba6-c8ee-4513-b201-c141c65c6558)

![Screenshot_2](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/fc7254f0-df1e-42b2-b102-9ab7363994ba)

Para visualizar as saídas dos códigos, basta olhar os arquivos `saidaComMutex.txt` e `saidaSemMutex.txt`. Abaixo, será respondido as questões propostas pelo profesor neste laboratório.

<b>a) Implemente uma solução utilizando Mutex e compare com a anterior. O que mudou? Por quê?</b>

Primeiramente, antes de realizar a comparação, vamos entender a função Thread_sum. Ela é responsável por fazer o cálculo parcial dos valores da série de Taylor, que quando somados é obtido o valor aproximado de pi. Ao implementar utilizando Mutex, a variável que vai armazenar o valor parcial de pi (zona crítica) será acessada somente por um thread de cada vez, o que permite que o resultado sofra menos variação do que nó código sem o Mutex. 

<b>b) No final, entregue no README do repositório uma explicação resumida sobre as diferenças entre os valores atingidos. Quais foram as causas das divergências? Por que elas aconteceram?</b>

As diferenças entre os valores atingidos ocorre justamente pela utilização ou não do Mutex, pois sem ele, a variável responsável por armazenar o pi vai ficar sugestiva a variação, já que não se sabe qual thread vai executar primeiro. Já com o mutex, os threads acessam a zona crítica uma de cada vez, tornando o resultado menos variável, mais correto e coerente.
