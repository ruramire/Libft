/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruramire <ruramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:48:19 by ruramire          #+#    #+#             */
/*   Updated: 2022/04/13 10:22:09 by ruramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ISALPHA

/* int	main(void)
{
	int c;

	c = 'A';
	printf("Función original: %d\n", isalpha(c));
	printf("Función propia:   %d\n", ft_isalpha(c));
} */

//////////////////////////////////////////////////////

//ISDIGIT

/* int	main(void)
{
	int c;

	c = '0';
	printf("Función original: %d\n", isdigit(c));
	printf("Función propia:   %d\n", ft_isdigit(c));
} */

//////////////////////////////////////////////////////

//ISALNUM

/* int	main(void)
{
	int c;

	c = '!';
	printf("Función original: %d\n", isalnum(c));
	printf("Función propia:   %d\n", ft_isalnum(c));
} */

//////////////////////////////////////////////////////

//ISASCII

/* int	main(void)
{
	int	c;

	c = 129;
	printf("Función original: %d\n", isascii(c));
	printf("Función propia:   %d\n", ft_isascii(c));
} */

//////////////////////////////////////////////////////

//ISPRINT

/* int	main(void)
{
	int	c;

	c = 126;
	printf("Función original: %d\n", isprint(c));
	printf("Función propia:   %d\n", ft_isprint(c));
} */

//////////////////////////////////////////////////////

//STRLEN

/* int main(void)
{
   char    *str =  "hola";
   printf("Función original: %lu\n", strlen(str));
   printf("Función propia:   %lu\n", ft_strlen(str));
} */

//////////////////////////////////////////////////////

//MEMSET

/* int	main(void)
{
	char str[50] = "Esta es una funcion muy bonica";

	printf("String original:             %s\n", str);
	memset(str + 5,'$', 4);
	printf("Función original:    %s\n", str);

	char str1[50] = "Esta es una funcion muy bonica";
	
	ft_memset(str1 + 5,'$', 4);
	printf("Función propia: %s\n", str1);
	return(0);
} */

//////////////////////////////////////////////////////

//BZERO

/* int	main(void)
{
	char str[50] = "Esta es la funcion bzero";

	printf("String original:  %s\n", str);
	bzero(str, 2);
	write(1, "Función original: ", 20);
	write(1, &str, 30);
	write(1, "\n", 1);

	char str1[50] = "Esta es la funcion bzero";

	ft_bzero(str1, 2);
	write(1, "Función propia:   ", 20);
	write(1, &str1, 30); 
	write(1, "\n", 1);
	return(0);
} */

//////////////////////////////////////////////////////

//MEMCPY

/* int	main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50];
	char dest1[50];

	memcpy(dest, src, 25);
	printf("Funcion original: %s\n", dest);
	ft_memcpy(dest1, src, 25);
	printf("Funcion propia:   %s\n", dest1);
	return (0);
} */

//////////////////////////////////////////////////////

//MEMMOVE

/* int main(void)
{
	char str1[50];
	char str2[50] = "Esta es la funcion memmove";
	char *ret;

	//ret = memmove(str1, str2, 11);
	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
} */

//////////////////////////////////////////////////////

//ATOI

/* int		main(int argc, char **argv)
{
	(void)argc;
	printf("Función original: %d\n", atoi(argv[1]));
	printf("Función propia:   %d\n", ft_atoi(argv[1]));
} */

//////////////////////////////////////////////////////




