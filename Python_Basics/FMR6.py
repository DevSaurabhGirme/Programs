# Code with lambda functions

CheckEven = lambda No: (No % 2 == 0)

Multiply = lambda No : (No * 2)

Sum = lambda A,B: A+B

def filterX(Helper_Function, Data):
    Result = []
    for No in Data:
        if(Helper_Function(No) == True):
            Result.append(No)
    return Result

def mapX(Helper_Function, Data):
    Result = []
    for No in Data:
        Value = Helper_Function(No)
        Result.append(Value)
    return Result

def reduceX(Helper_Function,Data):
    Ans = 0
    for No in Data:
        Ans = Helper_Function(Ans,No)
    return Ans

def main():
    print("Enter number of elements you want to enter :")
    iSize = int(input())
    
    Data_Input = []
    print("Enter the data")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is :",Data_Input)

    Data_Filter = filterX(CheckEven, Data_Input)
    print("Data after filter is :",Data_Filter)
    
    Data_Map = mapX(Multiply, Data_Filter)
    print("Data after mapping is :",Data_Map)
    
    Data_Reduce = reduceX(Sum, Data_Map)
    print("Data after reducing is :",Data_Reduce)

if __name__ == "__main__":
    main()