def maxlen(s):
    s = s.split(" ")
    s.sort(key=len, reverse = True)
    print(len(s[0]))
    for i in s:
        if len(i) == len(s[0]):
            print(i)



maxlen("Row, row, row your boat")
maxlen("Gently down the stream")