# count no of strings which starts with letter 'm' from list

lst_name=['meet','naresh','harsh','manish']
count=0
for i in lst_name:
    if i.startswith('m'):
        print(i)
        count=count + 1
print(count)

