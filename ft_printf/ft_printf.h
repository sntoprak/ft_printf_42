/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoprak <stoprak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:57:30 by stoprak           #+#    #+#             */
/*   Updated: 2022/12/11 13:12:33 by stoprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

//utils
int	ft_putchar(char a);
int	ft_putstr(char *a);
int	ft_point(unsigned long a, int check);
int	ft_udec(unsigned int a);
int	ft_dec(int a);
int	ft_hex(unsigned int a, int check);

//main
int	ft_write(char str, va_list *a);
int	ft_checker(char str);
int	ft_printf(const char *str, ...);

#endif