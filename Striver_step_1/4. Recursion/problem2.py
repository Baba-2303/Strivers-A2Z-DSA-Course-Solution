cnt = 1
def printNN(n):
    global cnt;
    if (cnt > n):
        return
    print(cnt)
    cnt += 1
    printNN(n)
    


if __name__ == "__main__":
    n = int(input("Enter the no. : "))
    printNN(n)