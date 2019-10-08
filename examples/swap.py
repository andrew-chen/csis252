def main():
    x = 3
    y = 8
    print(x,y)

    x,y = swap(x,y)
    print(x,y)

    x,y = y,x
    print(x,y)

def swap(x,y):
    return y,x

main()
