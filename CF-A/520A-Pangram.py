def pangram(string):
    s = string.lower()
    cnt = 0
    alpha = 'abcdefghijklmnopqrstuvwxyz'

    for char in alpha:
        if s.find(char) != -1:
            cnt+=1
    return cnt == 26

n = input(int())
string = input()
if pangram(string) == True :
        print("YES")
else:
        print("NO")
