# Calcula recorrência
##### Trabalho 4 da disciplina de Projeto e Análise de Algoritmos

O programa foi implementado em linguagem C e simula a relaçâo de recorrência:

  **T(n) = aT((n/b)-c) + dT((n/e)-f) + f(n)**
  
A variáveis **a-f** são inteiras. Para cada chamada recursiva em **n** se faz **n/b** chamadas recursivas
subtraídas de **c**. E se faz também **d** chamadas recursivas de tamanho **n/e**subtraído de **f**. 

A função **f(n)** é o tempo gasto para dividir e juntar as a subtarefas de tamanho (n/b)-c e as
d subtarefas de tamanho (n/e)-f.
A função f(n) tem seu expoente **g**, isto é, se g=2 então f(n) = n^g = n^2. 
 
O objetivo é medir o tempo total gasto para executar a recursão até a condição de saída que
é n<=1. O programa mede:

  1. A altura da árvore, ou seja, quantas recursões têm de ser feitas até se chegar na condição
  de saída. A árvore pode ser desbalanceada, o que faz com que um lado seja maior que o
  outro.
  1. O trabalho por nível. Cada nível pode demorar um tempo diferente.
  1. O número de recursões por nível.
  1. O tempo total para a execução da árvore.
  1. O tempo total para cada f(n), sendo que n varia para em cada chamada. A mesma árvore
  pode ter várias recursões f(n)
  
  E por fim calcula o método mestre.
  
  ##### Execução
  
  Para ser compilado e executado:
  
   ``` 
   gcc -Wall calcula_recorrencia.c -o calcula_recorrencia   
   ./calcula_recorrencia a b c d e f g n
   ```
   

  
      
