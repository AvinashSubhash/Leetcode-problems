class Solution:
    def isPalindrome(self, x: int) -> bool:
        data = list(str(x))
        print(data)
        size = len(data)
        for i in range(int(size/2)):
            if data[i]!=data[size-i-1]:
                return False
        return True
 