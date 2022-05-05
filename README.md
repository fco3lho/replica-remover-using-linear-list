# Lista linear armazenando e manipulando 100 nomes

O seguinte código tem a finalidade de criar uma lista linear que consiga armazenar um conjunto de 100 nomes quaisquer encontrados em um arquivo com extensão <code>.txt</code>, e após isso, conseguir identificar e remover nomes replicados/iguais na lista, sem mover os ponteiros.

<ul>
 <li><strong><h3>Como você gerenciaria os espaços em branco para novas inserções?</h3></strong></li>
    Foi feito um gerenciamento no código de atribuir o valor <code>NULL</code> usando <code>"/0"</code> às posições da lista que possuíam nome replicado. Sendo assim, fica fácil para fazer novas inserções nos espações em branco, criando uma condição onde só poderá fazer uma nova inserção em uma posição que contenha como <i>string</i> o valor <code>"\0"</code>.
    
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
