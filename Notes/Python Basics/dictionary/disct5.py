name = input("enter name: ")
m_no = int(input("enter mobile number: "))
age = int(input("enter age: "))

dr_dist = {
    "dr.harmi": {"10am": 0, "11am": 0},
    "dr.disha": {"2pm": 0, "4pm": 0}
} 

print(dr_dist.keys(), end=" ")

pre_dr = input("enter perfered dr.from: ")
print(dr_dist[pre_dr], end=" ")

sel_slot = input("enter slot: ")
print(f"{name} appointment is booked with {pre_dr} at {sel_slot}")
