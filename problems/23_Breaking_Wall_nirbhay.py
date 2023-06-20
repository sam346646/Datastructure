# Wall Breaking Possibility
# Bob and Alice want to break a wall. When Bob hits wall, it gets A units of damage, whereas when Alice hits, it gets B units damage. In order to break the wall exactly *C* units of damage must be done. Find out if it is possible to break the wall.
# INPUT
# First Line of input contains T test cases.
# T lines follow each containing 3 space separated integers A, B, C
# OUTPUT
# Print "Yes" if wall can break otherwise "No".

def can_break_wall(A, B, C):
    if A > C and B > C:
        return "No"
    if C % gcd(A, B) == 0:
        return "Yes"
    else:
        return "No"

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

T = int(input())

for _ in range(T):
    A, B, C = map(int, input().split())
    result = can_break_wall(A, B, C)
    print(result)