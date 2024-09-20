#include "../includes/libft.h"
#include <stdlib.h>

/**
 * Counts the number of words in a string, separated by a delimiter.
 *
 * @param s	The string to count words in
 * @param c	The delimiter character
 *
 * @return The number of words in the string
 */

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/**
 * Extracts a word from a string, stopping at the delimiter.
 *
 * @param s	Pointer to the string pointer, will be updated
 * @param c	The delimiter character
 *
 * @return Newly allocated string containing the extracted word, or NULL
 * if allocation fails
 */

static char	*ft_extract_word(const char **s, char c)
{
	const char	*start;
	char		*word;
	size_t		len;

	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		(*s)++;
		len++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	*(word + len) = '\0';
	return (word);
}

/**
 * Frees the memory allocated for the result array and its contents.
 *
 * @param result	The array of strings to free
 * @param count		The number of strings in the array
 */

static void	ft_free_result(char **result, size_t count)
{
	char	**ptr;

	ptr = result;
	while (count--)
	{
		free(*ptr);
		ptr++;
	}
	free(result);
}

/**
 * Processes the input string and fills the result array.
 *
 * @param s			The input string
 * @param c			The delimiter character
 * @param result	The array to fill with substring
 *
 * @return 1 if successful, 0 if allocation fails
 */

static int	ft_fill_result(char const *s, char c, char **result)
{
	char	**ptr;

	ptr = result;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			*ptr = ft_extract_word(&s, c);
			if (!*ptr)
				return (0);
			ptr++;
		}
	}
	*ptr = NULL;
	return (1);
}

/**
 * Splits a string into an array of substring.
 *
 * @param s	The string to Split
 * @param c	The delimiter character
 *
 * @return Array of new strings resulting from the split, or NULL if the
 * allocation fails
 */

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_fill_result(s, c, result))
	{
		ft_free_result(result, word_count);
		return (NULL);
	}
	return (result);
}
