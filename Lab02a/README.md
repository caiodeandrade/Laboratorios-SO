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

### Executando código do Slide 02
![Screenshot_1](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/08f1a146-bf00-48db-95de-9387ea59923d)

### Executando código do Slide 07
![Screenshot_2](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/ad2b7582-181f-42c1-875a-7a74f9d37d2f)

### Executando código do Slide 08
![Screenshot_3](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/5f1538cb-8721-4005-af06-82e34eea505b)

### Executando código do Slide 09
![Screenshot_4](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/93e01404-6336-4a00-b92b-e208675bef67)

### Executando código do Slide 10 (com stderr)
![Screenshot_5](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/a81c6704-b69e-425c-b2ee-fbbcc81f9d94)
![Screenshot_6](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/851977f3-c73a-4dd8-b20a-c5bcddb3f901)

### Respondendo exercícios no fim (Slide 11)
1. Rode o programa anterior para valores grandes de n. As mensagens sempre estarão ordenadas pelo valor de i? <br>
<br>Rodando o programa anteriror com valor de n = 1000, foi possível observar que as mensagens se mantiveram ordenadas pelo valor de i. E quando rodamos com n = 10000, ocorreu a mesma coisa. Então, podemos afirmar que: mesmo para um n muito grande, as mensagens vão permanecer ordenadas pelo valor de i.

2. O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao invés de para sys.stderr? <br>
<br> Ao utilizar o stdout (imagens abaixo), a saída será em sua forma padrão, pois com o stderr é realizado a separação de saída de erro e saída padrão. Uma coisa que foi possível observar de diferente nos dois foi na parte que executamos o arquivo, pois ao tentar colocar em um `.txt` a saída do programa escrito com stderr, da mesma maneira descrito na seção `Como compilar` deste README, foi possível notar que o arquivo saida1.txt ficou vazio. Concluido, ambas as maneiras serão mostradas pelo terminal, mas ao usar o stderr e direcionar sua saida para um `.txt` é necessário mudar o comando de execução, passando a ser este: `./criandoCadeiaProcessos02.bin 1000 >> saida1.txt 2>&1`

### Executando código do Slide 10 (com stdout)
![Screenshot_7](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/3842251f-6554-4d9d-abe6-e1c78bf3ae32)
![Screenshot_8](https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/1f1ba5d6-e7fc-44f3-980a-2f0b2ee192b7)
