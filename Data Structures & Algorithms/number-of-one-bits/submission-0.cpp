class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::bitset<32> binary(n);
        // 000...0001
        std::bitset<32> mask(1);
        int count = 0; 

        for (int i = 0; i < 32;)
        {
            if ((binary & mask).to_ulong())
            {
                count++;
            }
            mask <<= 1;
            i++;
        }
        return count;
    }
};
