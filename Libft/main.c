#include <stdio.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
// size_t  ft_strlen(const char *s);
// void    *ft_memset(void *b, int c, size_t len);
// void    ft_bzero(void *s, size_t n);
// void    *ft_memcpy(void *dst, const void *src, size_t n);
// void    *ft_memmove(void *dst, const void *src, size_t len);
// size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
// size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
//  int     ft_toupper(int c);
//  int     ft_tolower(int c);
//  char    *ft_strchr(const char *s, int c);
//  char    *ft_strrchr(const char *s, int c);
//  int     ft_strncmp(const char *s1, const char *s2, size_t n);
//  void    *ft_memchr(const void *s, int c, size_t n);
//  int     ft_memcmp(const void *s1, const void *s2, size_t n);
//  char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
//  int     ft_atoi(const char *str);

int main(void)
{
    printf("=== TESTES ===\n\n");

    // ft_isalpha, ft_isdigit, ft_isalnum
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));

    // ft_isascii, ft_isprint
    printf("ft_isascii(128): %d\n", ft_isascii(128));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));

    // ft_strlen
    printf("ft_strlen(\"hello\"): %zu\n", ft_strlen("hello"));

    // ft_memset
    char buf[10] = "abcdef";
    ft_memset(buf, 'X', 3);
    printf("ft_memset: %s\n", buf);

    // ft_bzero
    char bz[5] = "test";
    ft_bzero(bz, 2);
    printf("ft_bzero: %s\n", bz);

    // ft_memcpy
    char src[] = "abc";
    char dst[10];
    ft_memcpy(dst, src, 4);
    printf("ft_memcpy: %s\n", dst);

    // ft_memmove (overlap)
    char mm[10] = "123456";
    ft_memmove(mm + 2, mm, 4);
    printf("ft_memmove: %s\n", mm);

    // ft_strlcpy
    char lcpy[10];
    ft_strlcpy(lcpy, "hello", 10);
    printf("ft_strlcpy: %s\n", lcpy);

    // ft_strlcat
    char lcat[20] = "Hi ";
    ft_strlcat(lcat, "there", 20);
    printf("ft_strlcat: %s\n\n", lcat);

    // // ft_toupper / ft_tolower
    // printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    // printf("ft_tolower('A'): %c\n\n", ft_tolower('A'));

    // // ft_strchr / ft_strrchr
    // char *s = "banana";
    // printf("ft_strchr: %s\n", ft_strchr(s, 'a'));
    // printf("ft_strrchr: %s\n\n", ft_strrchr(s, 'a'));

    // // ft_strncmp
    // printf("ft_strncmp: %d\n\n", ft_strncmp("abc", "abd", 3));

    // // ft_memchr
    // char mem[] = "hello";
    // printf("ft_memchr: %s\n\n", (char *)ft_memchr(mem, 'l', 5));

    // // ft_memcmp
    // printf("ft_memcmp: %d\n\n", ft_memcmp("abc", "abc", 3));

    // // ft_strnstr
    // printf("ft_strnstr: %s\n\n", ft_strnstr("hello world", "world", 11));

    // // ft_atoi
    // printf("ft_atoi(\"123\"): %d\n", ft_atoi("123"));

    return 0;
}