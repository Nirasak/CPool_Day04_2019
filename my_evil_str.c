/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** evil str
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int b = my_strlen(str) - 1;
    char stock;

    for (int a = 0; a < b; a++) {
        stock = str[a];
        str[a] = str[b];
        str[b] = stock;
        b--;
    }
    return (str);
}
