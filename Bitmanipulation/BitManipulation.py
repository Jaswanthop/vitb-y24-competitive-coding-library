#bitmanipulation class

class BitManipulation:
    def __init__(self):
        pass

    def set_bit(self, num, bit_position):
        return num | (1 << bit_position)

    def clear_bit(self, num, bit_position):
        return num & ~(1 << bit_position)

    def toggle_bit(self, num, bit_position):
        return num ^ (1 << bit_position)

    def check_bit(self, num, bit_position):
        return (num & (1 << bit_position)) != 0

    def count_set_bits(self, num):
        count = 0
        while num:
            count += num & 1
            num >>= 1
        return count

    def is_power_of_two(self, num):
        return num > 0 and (num & (num - 1)) == 0

    def get_rightmost_set_bit(self, num):
        return num & -num

    def clear_rightmost_set_bit(self, num):
        return num & (num - 1)