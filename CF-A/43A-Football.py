n = int(input())
Dict = {}
for i in range(n):
    tmp = input()
    if tmp not in Dict:
        Dict[tmp] = 1
    else:
        Dict[tmp] += 1

max_key = 0
key = ''
for aDict in Dict:
    if Dict[aDict] > max_key :
        key = aDict
        
print(key)