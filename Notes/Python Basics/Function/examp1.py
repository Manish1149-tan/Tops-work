# function with no parameter no return
def greet():
    print("have a good day")
greet()

# function with single paramter

def greet1(name):
    print("have good day",name)
greet1("manish")
greet1("neha") 

#function with 2 parameter and return value
# pass 2 value andreturn sum 
 
def add(no1,no2):
    return no1+no2
ans=add(23,11)
print(f"sum is {ans}")