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
        /* Skip any spaces before a word */
        while (str[i] == ' ')
            i++;

        /* If a non-space character is found, it is a word */
        if (str[i] && str[i] != ' ')
        {
            words++; /* Count the word */
            /* Skip the rest of the characters in the word */
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
        /* Skip leading spaces */
        while (str[i] == ' ')
            i++;

        /* Calculate the length of the word */
        w_len = 0;
        while (str[i + w_len] && str[i + w_len] != ' ')
            w_len++;

        /* Allocate memory for the word (+1 for '\0') */
        words[k] = malloc(sizeof(char) * (w_len + 1));
        if (!words[k])
        {
            /* Free previously allocated memory if malloc fails */
            for (j = 0; j < k; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        /* Copy the word from the string */
        for (j = 0; j < w_len; j++)
            words[k][j] = str[i + j];
        words[k][j] = '\0'; /* Null-terminate the word */

        i += w_len; /* Move to the next word */
        k++;
    }

    words[k] = NULL; /* Last element is NULL */
    return words;
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s$", tab[i]); /* Print each word followed by $ */
    }
    printf("\n"); /* Newline after all words */
{
    char **tab;
    tab = strtow("      Best School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return 1;
    }
    print_tab(tab);
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return 0;
}
