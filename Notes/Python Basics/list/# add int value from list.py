# add int value from list
lst_number=[1,2,3,4,5,9,0,300,200]
sum=0
for i in lst_number:                     if type(i)==int or type(i)==float:
    sum+=i
print(f"total of element is {sum}")