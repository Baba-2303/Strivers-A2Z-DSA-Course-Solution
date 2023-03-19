cnt = 1
def printfun():
    global cnt
    if cnt == 6:
        return

    print(f"{cnt}.JAI BAJRANG BALI!")
    cnt += 1
    printfun()

printfun()

