/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:02:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2021/12/03 14:40:07 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

int	ft_2lowerhexa(unsigned int nb);

int	ft_checkprintf(char a, va_list *av);

int	ft_checksize(long long nb);

int	ft_printf(const char *format, ...);

int	ft_point(long unsigned nb);

int	ft_putdeci(unsigned int nb);

int	ft_upperhexa(unsigned int nb);

int	ft_lowerhexa(unsigned long nb);

int	ft_putchar(char c);

int	ft_putstr(char *str);

int	ft_putnbr(long int nb);
#endif
