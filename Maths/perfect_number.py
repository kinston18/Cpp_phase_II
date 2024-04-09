n = int(input("Give the number: "))
sum = 0
for i in range(1,n-1):
    if n%i == 0:
        sum += i

if sum == n:
    print("The number is perfect !!!")
else:
    print("Not a perfect number")