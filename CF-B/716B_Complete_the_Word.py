from string import ascii_uppercase as C
def f(s):
    for i in range(len(s)):
        t=s[i:i+26]
        X=set(t)|{'?'}
        if len(X)+t.count('?')==27:
            x=list(set(C)-X)
            for j in range(26):
                if s[i+j]=='?':
                    s[i+j]=x.pop()
            return ''.join(s).replace('?', 'A')
    return '-1'
print(f(list(input())))
