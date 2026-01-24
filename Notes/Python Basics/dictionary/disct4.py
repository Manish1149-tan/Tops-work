# calculate sum all the marks

student_data={
    "manish@gmail.com":["manish","20","322633",200],
    "riya@gmail.com":["riya","21","56252",203],
    "rahul@yahoo.com":['rahul',25,525652,245]
}
sum=0
for i,j in student_data.items():
    print(student_data[i][3])
    sum+=student_data[i][3]
    print("sum of all the marks",sum)

# for searching

search=input("please enter email")
for i,j in student_data.items():
    if search==i:
        for i1 in j:
            print(i1)
else:
    print(f"{search} not found in student data")



