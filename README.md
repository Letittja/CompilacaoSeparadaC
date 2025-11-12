# CompilacaoSeparadaC
Este projeto é uma compilação Separada em C de funções simples desenvolvido para a disciplina de Compiladores de 2025. Cada operação matemática está em seu próprio módulo (`.c` e `.h`).

O programa principal `main.c` utiliza essas funções para realizar cálculos.

## Módulos Incluídos

* `absoluto`: Calcula o valor absoluto
* `divisao`: Realiza divisão
* `fatorial`: Calcula o fatorial
* `maximo`: Encontra o maior de dois números
* `minimo`: Encontra o menor de dois números
* `modulo`: Calcula o resto da divisão
* `multiplica`: Realiza multiplicação
* `potencia`: Calcula a potência
* `soma`: Realiza soma
* `subtrai`: Realiza subtração

## Como Compilar e Executar

Este projeto usa `make` para automatizar a compilação.

### 1. Compilar o Projeto
Para compilar todos os arquivos-fonte e criar o executável, execute:
```bash
make
```
Isso irá gerar um executável chamado `calculadora` (ou o nome definido no `Makefile`).

### 2. Executar o Programa
Após a compilação, execute o programa:

```bash
./calculadora
```
### 3. Limpar Arquivos Gerados
Para remover todos os arquivos compilados (arquivos `.o` e o executável), execute:
```bash
make clean
```