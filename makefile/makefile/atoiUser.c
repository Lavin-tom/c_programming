// atoi user defined function
int atoiUser(char argv[])
{
    int i = 0, n = 0;
    // check for input value is negative or not
    // if negative ignore the symbol skip to 2nd position
    if (argv[0] == '-')
    {
        i = 1;
    }
    // for loop for checking the integer in string
    for (; argv[i]; i++)
    {
        if (argv[i] >= '0' && argv[i] <= '9')
        {
            // if interger present subtract '0' to get no in integer
            // convetion of ascii to integer here
            n = n * 10 + (argv[i] - '0');
        }
    }
    // if input value is negative output no is also negative
    if (argv[0] != '-')
    {
        return n;
    }
    // convert positive no here
    // return the final n value along with the sign
    else
    {
        return -n;
    }
}