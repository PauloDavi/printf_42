<h1 align="center">
	Printf 🖨
</h1>

<p align="center">
  <img src="https://i.imgur.com/U7aswVo.png" width="140" alt="grade" />
  <img src="https://i.imgur.com/oPr4rwi.png" width="120" alt="m" />
</p>

---

<p align="center">
	<b><i>Because ft_putnbr() and ft_putstr() aren’t enough</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/PauloDavi/printf_42?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/PauloDavi/printf_42?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/PauloDavi/printf_42?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/PauloDavi/printf_42?color=green" />
</p>

<h3 align="center">
	<a href="#-about-the-project">About</a>
	<span> • </span>
	<a href="#%EF%B8%8F-compile">Compile</a>
	<span> • </span>
	<a href="#-usage">Usage</a>
</h3>

---

## 💡 About the project

ft_printf is a versatile and feature-rich library designed to mimic the behavior of the C printf function, while also incorporating advanced formatting capabilities such as flags, spacing, and zero-padding.

Whether you're a seasoned C programmer or just getting started, ft_printf offers an intuitive and powerful way to format and display your data with precision and style. With ft_printf, you can effortlessly customize your output, align text, add leading zeros, and much more, making it an indispensable tool for any project where data presentation matters.

Say goodbye to tedious formatting struggles and hello to ft_printf – your one-stop solution for all your printf needs.

## 🛠️ Compile

> The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

**Using it in your code**


To use the printf in your code, first compile printf:

```shell
make
```

And simply include its header:

```C
#include "ft_printf.h"
```

When compile your code include the `libftprintf.a` file next to your code and include header, like:

```shell
gcc -L path/to/libftprintf.a -I path/to/ft_printf.h my_main.c
```

## 📋 Usage

The basic usability is like:

```c
char * name = "John";
ft_printf("Hello World %s", name);
```

The project has the following features:

- `%c` print a single character.
- `%s` print a string of characters.
- `%p` The void * pointer argument is printed in hexadecimal.
- `%d` print a decimal (base 10) number.
- `%i` print an integer in base 10.
- `%u` print an unsigned decimal (base 10) number.
- `%x` print a number in hexadecimal (base 16).
- `%%` print a percent sign.
- `-0.` manage minus, zero and dot flags with all possible combinations of different widths
- `# +` (yes, one of them is a space) manage all the flags than modify prefix string and works with width modifies
