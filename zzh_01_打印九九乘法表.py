def multiple_table():
    """打印乘法表"""
    row = int(input("请输入你的要求的长度"))
    i = 1
    while i <= row:
        col = 1
        while col <= i:
            print("%d * %d = %d" % (col, i, i*col),end="\t")
            col += 1
        print()
        i += 1