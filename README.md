# 🖨️ ft_printf – 42 Cursus

## ✨ Descrição

Este projeto é uma reimplementação da função `printf` da biblioteca padrão em C. O objetivo é reproduzir o comportamento da função original o mais fielmente possível, respeitando o formato de conversão e o funcionamento interno de `va_list`.

Assim como a `Libft`, o `ft_printf` é um dos pilares do currículo da 42. Aqui, aprendi sobre **funções variádicas**, **conversão de tipos**, **formatação de saída** e a importância da **atenção aos detalhes** na hora de construir algo robusto e funcional.

> 💬 **Nota pessoal:**
> Esse projeto me tirou da zona de conforto e me ensinou como lidar com situações onde cada caractere conta. Entender `va_arg`, construir estruturas de controle de formato e lidar com diferentes tipos de dados foi uma verdadeira aula de engenharia de software em C.

---

# 📦 Estrutura do Projeto ft_printf

Este projeto reimplementa a função `printf` da linguagem C.
Abaixo está a estrutura dos arquivos presentes no diretório:

```
ft_printf/
├── ft_printf.c         # Função principal
├── ft_printf_utils.c   # Funções auxiliares
├── ft_putnbr_base.c    # Conversões numéricas
├── ft_putchar.c        # Impressão de caracteres
├── ft_putstr.c         # Impressão de strings
├── ft_putptr.c         # Impressão de ponteiros
├── ft_printf.h         # Header file
├── Makefile
└── libftprintf.a       # Biblioteca final
```

## ⚙️ Compilação

Para compilar o projeto, utilize o comando:

```bash
make
```

Isso criará a biblioteca estática `libftprintf.a`.

Outros comandos disponíveis:

```bash
make clean      # Remove os arquivos .o
make fclean     # Remove os arquivos .o e .a
make re         # Limpa e recompila tudo
```

## 🧪 Exemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Olá, %s! O número é %d.\n", "mundo", 42);
    return (0);
}
```

Compilação:

```bash
gcc main.c libftprintf.a -I.
```