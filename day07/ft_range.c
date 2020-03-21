#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int *ft_range(int min, int max)
{
    unsigned int len;
    int *r;
    
    if (max > min)
        len = max - min;
    else
        return (NULL);
    r = (int *)malloc(sizeof(int) * len);
    if (r)
        while (len)
            r[--len] = --max;
    return (r);
    
}

int main()
{
    int *range;
    int min = -2147483648;
    	    //2147483647;
    int max = -2147483640;
    unsigned int i;
    
    //printf("%p", NULL);
    //printf("%u\n", i);
    
    range = ft_range(min, max);
    
    if (range)
    {
        i =  max - min;
        while (i--)
            printf("%i,", *range++);
    }
    else
        printf("%p", range);
    printf("\n");
    
    return (0);
}
