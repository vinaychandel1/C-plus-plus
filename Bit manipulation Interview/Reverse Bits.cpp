//interviewbit.com/problems/reverse-bits/
unsigned int Solution::reverse(unsigned int n) {

     int ret = 0; uint32_t power = 31;
    while (n != 0) {
      ret += (n & 1) << power;
      n = n >> 1;
      power -= 1;
    }
    return ret;
}
