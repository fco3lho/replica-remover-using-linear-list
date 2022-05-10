# Lista linear armazenando e manipulando 100 nomes

O seguinte código tem a finalidade de criar uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer encontrados em um arquivo com extensão <code>.txt</code>, e após isso, conseguir identificar e remover nomes replicados/iguais na lista, sem mover os ponteiros.

## Sobre o código

Foi utilizado um arquivo <code>.txt</code>, encontrado também no repositório (<code>Names.txt</code>), contendo 100 nomes para testar o código. Foi utilizado como parâmetro a quebra de linha dentro do arquivo para a separação dos nomes, inserindo-os assim, na lista linear.

Após a inserção dos nomes à lista, foi feita a comparação do 1º nome com os nomes de 2 a 100, o 2º nome com os nomes de 3 a 100, e assim por diante até feita todas as comparações.

<strong>Observação: É possível mudar o arquivo que deseja analisar, basta ir em <i>list.cpp</i>, na função <code>void readText(Lista *l, Item d)</code>, e mudar o parâmetro <code>my_file.open("Names.txt")</code> para <code>my_file.open("NomeDoSeuArquivo.txt")</code>.</strong>

<ul>
 <li><strong><h3>Como você gerenciaria os espaços em branco para novas inserções?</h3></strong></li>
    Foi feito um gerenciamento no código de atribuir o valor <code>NULL</code> usando <code>"\0"</code> às posições da lista que possuíam nome replicado. Sendo assim, fica fácil para fazer novas inserções nos espaços em branco, criando uma condição onde só poderá fazer uma nova inserção em uma posição que contenha como <i>string</i> o valor <code>"\0"</code>.
    
 <li><strong><h3>Qual seria o custo dessas novas inserções?</h3></strong></li>
    O custo para fazer apenas uma nova inserção, terá o custo do caminhamento do elemento inicial da lista até encontrar o primeiro elemento da lista que contenha como <i>string</i> o valor <code>"\0"</code>, com isso, é possível ter um parâmetro do custo de uma inserção que teria como <strong>melhor caso</strong>: <i>1</i>, <strong>caso médio</strong>: <i>n/2</i> e no <strong>pior caso</strong>: <i>n</i>.
</ul>

## Compilação e Execução

O repositório possui um arquivo <i>Makefile</i> que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

<table align="center">
  <tr>
    <td><strong>Comando</strong></td>
    <td><strong>Função</strong></td>
  </tr>
  <tr>
    <td><code>make clean</code></td>
    <td>Apaga a última compilação realizada contida na pasta build.</td>
  </tr>
  <tr>
    <td><code>make</code></td>
    <td>Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build.</td>
  </tr>
  <tr>
    <td><code>make run</code></td>
    <td>Executa o programa da pasta build após a realização da compilação.</td>
  </tr>
</table>
