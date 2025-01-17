/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namkyu <namkyu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:06:43 by namkyu            #+#    #+#             */
/*   Updated: 2021/02/23 12:43:52 by namkyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// #include <stdio.h> //나중에 지워라
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft.h"



# define RIGHT_ALIGN 1
# define LEFT_ALIGN -1

typedef struct format_list
{
    int     zero_len;
    char    zero_symbol;
    int     width;
    int     align;
    int     precision;
    int     strlen;
    char    *base;
    int     sign;
}       format_list;

/***** Parsing format part A (flag, width, precision) *****/
int     flag_parse(const char *format, format_list *f_list);
int     width_parse(const char *format, format_list *f_list, va_list *ap);
int     precision_parse(const char *format, format_list *f_list, va_list *ap);
int     ft_printf_parsing_A(const char *format, format_list *f_list, va_list *ap, int *ret);
int     ft_printf_parsing_B(const char *format, format_list *f_list, va_list *ap);

/***** Parsing format part B (conversion) ******/
int     case_integer(format_list *f_list, va_list *ap);
int     case_undsigned_int(const char *format, format_list *f_list, va_list *ap);
int     case_character(const char *format, format_list *f_list, va_list *ap);
int     case_string(format_list *f_list, va_list *ap);
int     case_pointer(format_list *f_list, va_list *ap);

/***** display util ******/
void    print_str(format_list *f_list, const char *str);
int     print_width(format_list *f_list);
int     print_precision(format_list *f_list);
void    print_numbers(unsigned long long num, int base, char *base_str);
int     init_num_case(format_list *f_list, unsigned long long num);

/***** data utils ******/
void    num_data_input(unsigned long long num, format_list *f_list);
void    str_data_input(const char *str, format_list *f_list);

/***** main ******/
// void    f_test(format_list *f_list, char *s);
void    reset_flist(format_list *f_list);
int     ft_printf(const char *format, ...);

#endif