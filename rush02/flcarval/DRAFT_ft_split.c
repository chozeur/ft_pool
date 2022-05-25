/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:00:40 by flcarval          #+#    #+#             */
/*   Updated: 2021/10/30 14:57:22 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_final_len(char *str, char *charset)
{
	int	i;
	int	final_len;

	i = 0;
	final_len = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) == 0)
			final_len++;
		i++;
	}
	return (final_len);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) == 0)
			i++;
		result++;
		while (ft_is_charset(str[i], charset) == 1)
			i++;
	}
	return (result);
}

int	*ft_words_len(char *str, char *charset)
{
	int	*result;
	int	words;
	int	i;

	words = ft_count_words(str, charset);
	result = malloc(sizeof(int) * words);
	result = {0};
	i = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) == 0)
	}
}

char **ft_split(char *str, char *charset)
{
	char	**result;
	int	final_len;
	int	words;

	final_len = ft_final(str, charset);
	words = ft_count_words(str, charset);
	result = malloc(sizeof(char*) * words + 1);

}
