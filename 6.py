def is_quirksome(x, digit):
    first = int(x[int(digit)//2:])
    second = int(x[:-int(digit)//2])
    answer = ( first + second ) ** 2
    return True if answer == int(x) else False

print(is_quirksome("1234", "4"))
print(is_quirksome("3025", "4"))
print(is_quirksome("81", "2"))