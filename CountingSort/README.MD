# Counting Sort

O counting sort é um algoritmo usado para ordenar chaves em uma extensão especifica e ao contrário de outros métodos de ordenação, o counting sort *não* utiliza comparação de elementos. A seguir será explicado como o counting sort funciona para números inteiros.

## Como o Counting Sort Funciona

Vamos considerar os dados de entrada:

**entrada:**
| 0 | 6 | 1 | 4 | 1 | 0 |
|:-:|:-:|:-:|:-:|:-:|:-:|

Agora, precisaremos criar um novo array chamado *contagem*, este array será usado para contar as frequências dos números, o valor do número será o index do array *contagem*, ou seja, a frequência do número zero será guardado no index zero do array. Assim é possível saber qual é o elemento, sem precisar comparar os elementos.

**contagem:**
| 2 | 2 | 0 | 0 | 1 | 0 | 1 |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 |

Como é possível notar, o zero aparece duas vezes, então no index zero do array contagem iremos adicionar 2. Faremos isto com todos os números.

A próxima etapa é modificar o array *contagem*, de forma que cada elemento em cada índice armazene a soma das contagens anteriores.

**contagem:**
| 2 | 4 | 4 | 4 | 5 | 5 | 6 |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 |

Agora, é possível ordenar nosso dado de entrada, para isso iremos adicionar um novo array, chamado *saída*.

Para adicionarmos os elementos no novo array, iremos iterar a *entrada* de trás para frente, ou seja, começaremos pegando o último elemento. Iremos acessar o *contagem* através do elemento, acessar o *saída* com a frequência guardada no *contagem* e, por fim, iremos adicionar o elemento. A cada iteração, é preciso diminuir a frequência no array *contagem*.

                                            entrada[5] == 0;
                                            contagem[0] == 2;
                                            saída[2] = entrada[5];
                                            contagem[0] = contagem[0] - 1

Ao final obtemos os dados ordenados.

**saída:**
| 0 | 0 | 1 | 1 | 4 | 6 |
|:-:|:-:|:-:|:-:|:-:|:-:|
| 0 | 1 | 2 | 3 | 4 | 5 |

## Como Compilar e Rodar

Para compilar só é preciso usar o makefile

```Makefile
make counting
```

E para rodar é necessário colocar o nome do executável e depois o local que contém as instâncias para teste.

```bash
./counting /Instancies/counting.txt
```

Ao final será criado um arquivo chamado countsort.txt, neste arquivo irá ter os dados ordenados. Foi escolhido a criação de um arquivo pelo simples fato dos dados conterem um grande número de linhas.
