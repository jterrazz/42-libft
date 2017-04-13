/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_whitespaces.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:51:37 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/13 20:10:21 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		get_size(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static int		get_nb_words(char const *str, char c)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || i == 0))
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int		copy_str(char **tab, char const *str, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (str[k])
	{
		if (str[k] != c && (str[k - 1] == c || !k))
		{
			j = 0;
			tab[i] = (char *)malloc(sizeof(char) * (get_size(&str[k], c) + 1));
			if (tab[i] == NULL)
				return (0);
			while (str[k] != c && str[k])
			{
				tab[i][j] = str[k];
				j++;
				k++;
			}
			tab[i++][j] = 0;
		}
		k++;
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**tab;

	if (s == NULL)
		return (0);
	nb_words = get_nb_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (tab == NULL)
		return (NULL);
	if (copy_str(tab, s, c) == 0)
		return (NULL);
	tab[nb_words] = 0;
	return (tab);
}
