#lambda=inline fuction,no complex logic,anonnymus function(no name)
add=lambda num1,num2:num1+num2
print(add(20,80))


# squre of number
sq=lambda num:num**2
print(sq(30))

# convert in upper 
up_str=lambda name:name.upper()
print(up_str("manish"))

# checking number id even /odd

ans=lambda num:"even" if num%2==0 else "odd"
print(ans(23))

# checking max number

max_num=lambda a,b: a if a>b else b
print(max_num(20,30))

