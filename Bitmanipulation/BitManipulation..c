// bitManipulation

long setBit(long n, int k)
{
    return (n | (1L << k));
}

long clearBit(long n, int k)
{
    return (n & ~(1L << k));
}

long toggleBit(long n, int k)
{
    return (n ^ (1L << k));
}
long isBitSet(long n, int k)
{
    return (n & (1L << k)) != 0;
}

long countNoOfSetBits(long n)
{
    long count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
