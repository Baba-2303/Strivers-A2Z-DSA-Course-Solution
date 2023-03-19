def revprint(n):
    if n == 0:
        return
    print(n,end=" ")
    n -= 1
    revprint(n)
if __name__ == "__main__":
    n = int(input("Enter The No. : "))
    revprint(n)