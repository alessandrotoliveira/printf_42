# ft_printf

Este projeto foi desenvolvido como parte da minha formação na 42 São Paulo. O objetivo era recriar a função `printf` da biblioteca padrão C, respeitando suas principais funcionalidades, sem usar a `stdio.h`. Foi um grande exercício de aprendizado em manipulação de argumentos variádicos, formatação e organização de código.

## O que está implementado

Minha versão do `printf` (`ft_printf`) consegue lidar com os seguintes especificadores de formato:

- `%c` → caractere  
- `%s` → string  
- `%p` → ponteiro (endereços em hexadecimal)  
- `%d` / `%i` → inteiros com sinal  
- `%u` → inteiros sem sinal  
- `%x` / `%X` → números hexadecimais (minúsculo/maiúsculo)  
- `%%` → o caractere `%` literal  

## Como compilar

Para compilar o projeto e gerar a biblioteca `libftprintf.a`, basta rodar:

```bash
make
```

Isso criará os arquivos objeto e a biblioteca estática.

## Como usar

Você pode usar o `ft_printf` em seu próprio projeto C incluindo o header e linkando com a biblioteca. Exemplo:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Olá, mundo! Número: %d\n", 42);
	return (0);
}
```

Para compilar com sua aplicação:

```bash
gcc main.c libftprintf.a -o programa
```

## Notas pessoais

Esse projeto foi um marco importante pra mim na 42. Ele exigiu atenção aos detalhes, entendimento profundo de como os argumentos variádicos funcionam em C, além de muita depuração. Terminar esse projeto me deu mais segurança em C e também mais respeito por tudo que a `printf` faz por trás dos panos!