#  Functional Code without Lambda function
# This file includes Step 1,2,3

def CheckEven(No):
    return(No % 2 == 0)

def Multiply(No):
    return(No * 2)

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

def reduceX(Data):
    Sum = 0
    for No in Data:
        Sum = Sum + No
    return Sum

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
    
    Data_Reduce = reduceX(Data_Map)
    print("Data after reducing is :",Data_Reduce)

if __name__ == "__main__":
    main()