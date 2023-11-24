void ft_ultimate_div_mod(int *a, int *b)
{
    int cp_a;

    cp_a = *a;
    *a = cp_a / *b;
    *b = cp_a % *b;
}