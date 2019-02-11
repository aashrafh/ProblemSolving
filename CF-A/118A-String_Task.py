string = input()
string = string.lower()
Vowels = ['a', 'o', 'y', 'e', 'u', 'i']
for char in string:
    if char in Vowels:
        string = string.replace(char, '')
for char in string:
    print('.',char,end='', sep='')
