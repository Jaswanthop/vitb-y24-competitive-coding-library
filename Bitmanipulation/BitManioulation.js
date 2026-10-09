//bitmanipulation class in js

class BitManipulation {
    // Function to set a bit at a given position
    setBit(num, pos) {
        return num | (1 << pos);
    }

    // Function to clear a bit at a given position
    clearBit(num, pos) {
        return num & ~(1 << pos);
    }

    // Function to toggle a bit at a given position
    toggleBit(num, pos) {
        return num ^ (1 << pos);
    }

    // Function to check if a bit at a given position is set
    isBitSet(num, pos) {
          return (num & (1 << pos)) !== 0;
    }
}



