# Latest Solution Tested in Python


# Author: [Your Name or Username]
# Creation Date: [Date of Creation]

# Description: [Brief description of the script and its purpose]

# Solution to: [LeetCode Problem Number and Title]
# URL: [URL to the LeetCode Problem Description]


class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        number = x
        reversed_number = 0
        while number != 0:
            digit = number % 10
            reversed_number = reversed_number * 10 + digit
            number //= 10
        return reversed_number == x
        
if __name__ == "__main__":
    res = Solution.isPalindrome(Solution, 11011)
    print(res)
    