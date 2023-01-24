
values = [10,20,30,40]

print(values)

print(type(values))

print(len(values))

values.insert(2,11)
print("Data after insertion : ",values)

values.insert(15,89)
print("Data after insertion of 89 is  : ",values)
print("Size of list is now : ",len(values))

print(values[0])
print(values[1])
print(values[2])
print(values[3])

values.append(50)
values.append(50)

print(values)

values.remove(20)

print(values)

values.append(30.154)
print(type(values[0]))
print(values)