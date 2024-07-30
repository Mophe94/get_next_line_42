/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:02:08 by dbajeux           #+#    #+#             */
/*   Updated: 2024/07/29 14:05:18 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ************************************************************************** */
/*                                 MACRO                                      */
/* ************************************************************************** */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/* ************************************************************************** */
/*                                 INCLUDE                                    */
/* ************************************************************************** */

# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/* ************************************************************************** */
/*                                 FUNCTION                                   */
/* ************************************************************************** */

size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_fill_storage(int fd, char *storage);
char	*ft_clean_line(char *storage);
char	*ft_clean_storage(char *storage);
char	*get_next_line(int fd);
char	*ft_free(char **str);
#endif
