/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:26:21 by juan-anm          #+#    #+#             */
/*   Updated: 2023/05/19 15:25:47 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_typesort(va_list val, char c);
int	ft_putchars(char c);
int	ft_typesort(va_list val, char c);
int	ft_putstrs(char *str);
int	ft_putnbrs(long long int n, int cont);
int	ft_base_cnvrt(unsigned int nbr, char x);
int	ft_base_pointer(unsigned long long pntr);
int	ft_unsputnbrs(long long int n, int cont);

#endif
