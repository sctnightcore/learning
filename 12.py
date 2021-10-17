str1 = "python"
str1_len = len(str1)

for i in range(str1_len, 0, -1):
    for j in range(0, str1_len -  i ):
        print(end=" ")
    
    for j in range(0, i):
        print(str1[j], end=" ")
    
    print()
