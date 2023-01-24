
def CheckEvenX(No):
    return(No % 2 == 0)

Even = lambda No : No % 2 == 0

Ret = Even(11)

if(Ret == True):
    print("Number is even")
else:
    print("Number is odd")