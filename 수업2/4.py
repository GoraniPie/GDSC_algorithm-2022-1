'''
#### 오류?
import sys

input()
arr= sys.stdin.readline().split()
result = [int(i) for i in arr]
print(min(result), max(result))
'''
import sys

input()
result = list(map(int, sys.stdin.readline().split()))
print(min(result), max(result))