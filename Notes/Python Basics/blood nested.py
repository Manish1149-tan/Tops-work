age = int(input("Please enter age"))
weight= int(input("Please enter weight"))
if age>=18:
    if weight>=55:
        print("user is able to donate blood")
    else:
        print("user is unable to donate blood due to under weight")
else:
        print(" user is unable to donate blood due to minor")