/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:55:14 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/31 16:17:57 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include "libft/libft.h"

int main()
{
	const char *ft_text_color = "\033[0;32m";
	const char *text_color = "\033[0;95m";
	const char *reset = "\033[0m";
	int size;

	// %c
	const char test_character = 'a';
	// %s
	const char *test_string = NULL;
	// %p
	const char *test_pointer = NULL;
	// %d
	const int test_decimal = 19;
	// %i
	const int test_integer = 42;
	// %u
	const unsigned int test_unsigned = 42;
	// %x
	const int test_hexadecimal_minus = 15;
	// %X
	const int test_hexadecimal_mayus = 255;
	// %%
	// No need to test

	ft_printf("\nTesting ft_printf comparing with printf\n");

	printf("\n");

	ft_printf("%sft_printf:\tCharacter: ", ft_text_color);
	size = ft_printf("%c", test_character);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tCharacter: ", text_color);
	size = printf("%c", test_character);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tString: ", ft_text_color);
	size = ft_printf("%s", test_string);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tString: ", text_color);
	size = printf("%s", test_string);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tDecimal: ", ft_text_color);
	size = ft_printf("%d", test_decimal);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tDecimal: ", text_color);
	size = printf("%d", test_decimal);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tInteger: ", ft_text_color);
	size = ft_printf("%i", test_integer);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tInteger: ", text_color);
	size = printf("%i", test_integer);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tUnsigned: ", ft_text_color);
	size = ft_printf("%u", test_unsigned);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tUnsigned: ", text_color);
	size = printf("%u", test_unsigned);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tHexadecimal minus: ", ft_text_color);
	size = ft_printf("%x", test_hexadecimal_minus);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tHexadecimal minus: ", text_color);
	size = printf("%x", test_hexadecimal_minus);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tHexadecimal mayus: ", ft_text_color);
	size = ft_printf("%X", test_hexadecimal_mayus);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tHexadecimal mayus: ", text_color);
	size = printf("%X", test_hexadecimal_mayus);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tPointer: ", ft_text_color);
	size = ft_printf("%p", test_pointer);
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tPointer: ", text_color);
	size = printf("%p", test_pointer);
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("\n");

	ft_printf("%sft_printf:\tPercent: ", ft_text_color);
	size = ft_printf("%%");
	printf("\n");
	printf("\t\tSize: %i\n", size);
	printf("%sprintf:\t\tPercent: ", text_color);
	size = printf("%%");
	printf("\n");
	printf("\t\tSize: %i\n", size);

	printf("%s\n", reset);

	return 0;
}
