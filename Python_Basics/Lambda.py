# Normal functions / Named functions
def Add(No1,No2):
    return No1+No2

# Lambda functions / Unnamed functions
# lambda parameters : body

AddFunction = lambda A,B : A+B

Ans1 = Add(10,11) 
Ans2 = AddFunction(11,12)

print("Addition using normal function :",Ans1)
print("Addition using lambda function :",Ans2)

print("Type of lambda function is :",type(AddFunction))