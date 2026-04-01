#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * count_words - Counts the number of words in a string
 * @str: The string to evaluate
 *
 * Return: Number of words in str
 *
 * A word is defined as a sequence of characters separated by spaces.
 */
int count_words(char *str)
{
    int i = 0, words = 0;

    while (str[i])
    {  
        while (str[i] == ' ')
            i++;
        if (str[i] && str[i] != ' ')
        {
            words++;
                while (str[i] && str[i] != ' ')
                i++;
        }
    }
    return words;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 *         NULL if str is NULL, empty, or memory allocation fails
 *
 * Each word is null-terminated. The last element of the array is NULL.
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j, k = 0, w_len, num_words;

    if (!str || str[0] == '\0')
        return NULL;
    num_words = count_words(str);
    if (num_words == 0)
        return NULL;
    words = malloc(sizeof(char *) * (num_words + 1));
    if (!words)
        return NULL;
    while (str[i] && k < num_words)
    {
        while (str[i] == ' ')
            i++;
        w_len = 0;
        while (str[i + w_len] && str[i + w_len] != ' ')
            w_len++;
        words[k] = malloc(sizeof(char) * (w_len + 1));
        if (!words[k])
        {
            for (j = 0; j < k; j++)
                free(words[j]);
            free(words);
            return NULL;
        }
        for (j = 0; j < w_len; j++)
            words[k][j] = str[i + j];
        words[k][j] = '\0';
        i += w_len;
        k++;
    }
    words[k] = NULL;
    return words;
}
/**
 * print_tab - Prints an array of words with $ at the end of each word
 * @tab: The array of strings
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s$", tab[i]);
    }
    printf("\n");
}
/**
 * main - Test the strtow function
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
    char **tab;
    int i; 
    tab = strtow("      Best School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return 1;
    }
    print_tab(tab);
    for (i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);

    return 0;
}
