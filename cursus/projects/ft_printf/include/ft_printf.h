/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:00:51 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 15:48:08 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// for va_list
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_formats(va_list args, const char format);
int	ft_print_nbr(int n);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_unsigned(unsigned int num);
int	ft_print_percent(void);

void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t ptr);
int	    ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int	    ft_num_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int	    ft_hex_len(unsigned int num);

#endif
