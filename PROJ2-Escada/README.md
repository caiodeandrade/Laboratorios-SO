# PROJ2 - Escada

Este é o README para o "PROJ2 - Escada", desenvolvido em linguagem C. Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do projeto entregue.

## Integrantes do grupo

- Caio Alexandre V.B. de Andrade.
- Diego Oliveira Aluizio.
- Nicolas Fernandes Melnik.

## Desnvolvimento

### Problema
Criamos uma escada rolante dupla, a mesma escada pode subir ou descer. A seguir, será listado suas características de funcionamento:
- Leva 10 segundos para uma pessoa ir de uma ponta para outra;
- Se ninguém está utilizando a escada ela se encontra parada, ou seja, inicialmente ela está parada também;
- Quando ela se encontra parada e uma pessoa chegar, ela irá se mover para a direção desejada pela pessoa;
- Se uma pessoa chegar na escada e esta já estiver na direção que a pessoa quer ir, a pessoa entra na escada imediatamente;
- Se uma pessoa chegar na escada e esta está indo na direção contrária que a pessoa quer ir, ela deve esperar a escada parar para poder entrar;
- Nenhuma pessoa vai chegar na escada rolante dupla no momento exato em que ela está prestes a parar.

### Solução

## Como Compilar

Para compilar o programa do projeto no Linux, siga os passos abaixo:
1. Abra o terminal.
2. Navegue até o diretório do projeto.
3. Para compilar o programa, execute o seguinte comando: `gcc -o Projeto02.bin Projeto02.c `.
4. Assim, é gerado um executável chamado `Projeto02.bin` no diretório atual.

## Como Executar

Após compilar o projeto, siga estas etapas para executá-lo:
1. No terminal, certifique-se de estar no diretório onde o executável foi gerado.
2. Execute o seguinte comando: `./Projeto02.bin (nome_arquivo1) >> [nome_arquivo2].txt`.
3. No comando acima, basta substituir (nome_arquivo1) pelo nome do arquivo de entrada desejado e o [nome_arquivo2] por qualquer nome de sua preferência, pois nesse arquivo será exibido o resultado da execução do programa.
4. Por exemplo: você compilou o Projeto02.c e quer executar ele com o arquivo de entrada `E_1`, e depois adicionar em um arquivo `saidas.txt`, basta executar o comando `./Projeto02.bin E_1 >> saidas.txt`.

OBS: Isso foi feito, pois a variável do nome do arquivo de entrada é um argumento de linha de comando, e depois, direcionamos o resultado para um arquivo `.txt`.

## Resultados
O resultado desta atividade é simular o funcionamento de uma escada rolante dupla descrita acima. Para comprovar que nosso código foi compilado e executado no ambiente da AWS (conforme solicitado pelo professor), apresentamos a seguinte imagem:

<div align="center">
<img src="https://github.com/nicolasmelnik/Laboratorios-SO/assets/117850844/ebaa0500-6f05-43b9-a729-cbfa79980f62" width="800px" />
</div>

Para visualizar as saídas para as diferentes entradas, basta olhar o arquivo `saidas.txt`.
