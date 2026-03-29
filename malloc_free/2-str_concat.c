#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i;
    char *res;

    /* تعامل مع NULL كما لو أنها سلسلة فارغة */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* حساب طول كل سلسلة */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* حجز الذاكرة اللازمة + 1 للـ null terminator */
    res = malloc((len1 + len2 + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);

    /* نسخ s1 */
    for (i = 0; i < len1; i++)
        res[i] = s1[i];

    /* نسخ s2 بعد s1 */
    for (i = 0; i < len2; i++)
        res[len1 + i] = s2[i];

    /* إنهاء السلسلة بـ null terminator */
    res[len1 + len2] = '\0';

    return (res);
}
