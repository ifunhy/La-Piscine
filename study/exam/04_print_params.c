void main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc < 2)
        return (0);
    if (argc <= 2)
    {
        while (argv[i] != '\0')
        {
            if (i <= 2)
            {
                write(1, &argv[i], 1);
            }
            i++;
        }
        return (0);
    }
}