num = int(input("Enter number: "))
k=1
for i in range(num ):
    for j in range( i + 1):
        print(k, end=" ")
    print()
    k+=2
