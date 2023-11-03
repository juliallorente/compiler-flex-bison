# Análise Léxica e Sintática

## 📜 Descrição
Este repositório contém a implementação de um analisador léxico e sintático para a linguagem definida na gramática proposta. O analisador foi desenvolvido utilizando a ferramenta Flex para a análise léxica e, na análise sintática utilizada a ferramenta Bison.

## 📂 Estrutura do Repositório
- `tr-parte1.lex`: Contém as definições e especificações (expressões regulares) da gramática para a análise léxica.
- `helpers.h`: Arquivo de cabeçalho com estruturas de dados e funções auxiliares.
- `input-1.txt` e `input-2.txt`: Exemplos de entrada de dados para teste.
- `output.txt`: Arquivo de saída com a tabela de símbolos gerada após a análise léxica.
- `compile.sh`: Script para compilação e execução do analisador.

## ⚙️ Como Compilar e Executar
1. Navegue até o diretório do projeto:
```bash
   cd COM/trabalho1/
```

2. Dê permissão de execução para o script:
```bash
  chmod +x compile.sh
 ```

3. Compile e execute o analisador com um arquivo de entrada:
```bash
 ./compile.sh input-1.txt
 ```

## 🌟 Funcionalidades
- Análise Léxica: O código de entrada é lido e os tokens são identificados e inseridos na tabela de símbolos.
- Análise Sintática: (Detalhes específicos sobre a análise sintática devem ser adicionados aqui, como a estrutura da gramática, regras sintáticas, etc.)

## ❗ Erros Léxicos
O analisador é capaz de identificar erros léxicos, como caracteres não reconhecidos e produções mal formadas.

## 📚 Referências
Livro "Compiladores: Princípios, Técnicas e Ferramentas" por Alfred V. Aho, Monica S. Lam, Ravi Sethi e Jeffrey D. Ullman.
