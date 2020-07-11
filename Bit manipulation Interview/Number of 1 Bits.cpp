// https://www.interviewbit.com/problems/number-of-1-bits/#  Adobe Yahoo
int Solution::numSetBits(unsigned int A) {
    int count=0;
while (A) { 
        count += A & 1; 
        A >>= 1; 
    } 
    return count; 
    
}
