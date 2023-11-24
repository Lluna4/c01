void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
    int first;
    int initial;
    
    first = 0;
    initial = size >> 1;
    while (first < initial)
    {
        ft_swap(&tab[first], &tab[size - 1]);
        first++;
        size--;
    }
}
