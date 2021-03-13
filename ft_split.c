/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cruz <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:21:04 by mda-cruz          #+#    #+#             */
/*   Updated: 2021/03/13 16:32:28 by mda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int counter;
	int	state;

	counter = 0;
	state = 0;
	while (*str)
	{
		if (*str == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++counter;
		}
		++str;
	}
	return (counter);
}

static int	get_end(char const *str1, char c1)
{
	int len;

	len = 0;
	while (str1[len] && str1[len] != c1)
		len++;
	return (len);
}

char		**ft_split(char const *s, char c)
{
	int		word_count;
	char	**words_array;
	int		i;

	if (!s || !c)
		return (0);
	word_count = count_words(s, c);
	words_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	i = 0;
	if (!words_array)
		return (0);
	while (i < word_count)
	{
		if (*s == c)
			s++;
		else
		{
			words_array[i] = ft_substr(s, 0, get_end(s, c));
			s += get_end(s, c);
			i++;
		}
	}
	words_array[i] = 0;
	return (words_array);
}
