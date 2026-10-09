class BitManipulation
{

public:
    // Function to set a bit at a specific position
    static int setBit(int num, int pos)
    {
        return num | (1 << pos);
    }

    // Function to clear a bit at a specific position
    static int clearBit(int num, int pos)
    {
        return num & ~(1 << pos);
    }

    // Function to toggle a bit at a specific position
    static int toggleBit(int num, int pos)
    {
        return num ^ (1 << pos);
    }

    // Function to check if a bit is set at a specific position
    static bool isBitSet(int num, int pos)
    {
        return (num & (1 << pos)) != 0;
    }
};