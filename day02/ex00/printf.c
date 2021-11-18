/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurinedenis <laurinedenis@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:33:10 by laurinedeni       #+#    #+#             */
/*   Updated: 2021/11/18 12:20:27 by laurinedeni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int print_d(va_list ap)
{
    int     nb;
    int     tmp;
    int     size;
    char    *bruh;

    nb = va_arg(ap, int);
    size = 1;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        size++;
        nb = nb * -1;
    }
    tmp = nb;
    while ((tmp = tmp / 10) > 0)
        size++;
    bruh = malloc(sizeof(char) * size + 1);
    tmp = size - 1;
    bruh[size] = '\0';
    while (nb > 0)
    {
        bruh[tmp] = nb % 10 + '0';
        nb = nb / 10;
        tmp--;
    }
    write(1, bruh, size);
    free(bruh);
    return (size);
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int print_s(va_list ap)
{
    char    *s;
    int     size;

    s = va_arg(ap, char *);
    if (!s)
    {
       write(1, "(null)", 6);
       return (6);
    }
    size = ft_strlen(s);
    write(1, s, size);
    return (size);
}

int print_x(va_list ap)
{
    unsigned int     nb;
    unsigned int     tmp;
    int             size;
    char            *bruh;
    char            base[16] = "0123456789abcdef";

    nb = va_arg(ap, unsigned int);
    size = 1;
    if (!nb)
    {
        write(1, "0", 1);
        return (1);
    }
    tmp = nb;
    while ((tmp = tmp / 16) > 0)
        size++;
    bruh = malloc(sizeof(char) * size + 1);
    tmp = size - 1;
    while (nb > 0)
    {
        bruh[tmp] = base[nb % 16];
        nb = nb / 16;
        tmp--;
    }
    write(1, bruh, size);
    free(bruh);
    return (size);
}

int ft_printf(char *str, ...)
{
    int i;
    int count;
    va_list ap;

    i = 0;
    count = 0;
    va_start(ap, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == 'd')
                count += print_d(ap);
            else if (str[i] == 's')
                count += print_s(ap);
            else if (str[i] == 'x')
                count += print_x(ap);
            else
            {
                write(1, &str[i], 1);
                count++;
            }
        }
        else
        {
            write(1, &str[i], 1);
            count++;
        }
        i++;
    }
    va_end(ap);
    return (count);
}

int main(void)
{
    // int min = -2147483648;
    // int max = 2147483647;
    int ret = 0;
    int d = -2147483648;
    int dnul = 2147483647;
    char *s = "this is fcking char*";
    char *snul = 0;
    int xnul = 0;
    int x = 8430845;

    ret = printf("\n--Mother printf--\n");
    printf("\nret is %d\n", ret);
    ret = printf("\nint min is %d, and int max is %d\n", d, dnul);
    printf("\nret is %d\n", ret);
    ret = printf("\nx is %x, and x nul is %x\n", x, xnul);
    printf("\nret is %d\n", ret);
    ret = printf("\ns is |%s|, and s nul is %s\n", s, snul);
    printf("\nret is %d\n", ret);
    ret = ft_printf("\n--Son ft_printf--\n");
    ft_printf("\nret is %d\n", ret);
    ret = ft_printf("\nd is %d, and d nul is %d\n", d, dnul);
    ft_printf("\nret is %d\n", ret);
    ret = ft_printf("\nx is %x, and x nul is %x\n", x, xnul);
    printf("\nret is %d\n", ret);
    ret = ft_printf("\ns is |%s|, and s nul is %s\n", s, snul);
    ft_printf("\nret is %d\n", ret);

    ret = ft_printf("\n% and %% are now printed\n");
    ft_printf("\nret is %d\n", ret);
    return 0;
}