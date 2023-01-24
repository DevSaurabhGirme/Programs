# Code with lambda functions

from functools import reduce
CheckEven = lambda No: (No % 2 == 0)

Multiply = lambda No : (No * 2)

Sum = lambda A,B: A+B

def main():
    print("Enter number of elements you want to enter :")
    iSize = int(input())
    
    Data_Input = []
    print("Enter the data")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is :",Data_Input)

    Data_Filter = list(filter(CheckEven, Data_Input))
    print("Data after filter is :",Data_Filter)
    
    Data_Map = list(map(Multiply, Data_Filter))
    print("Data after mapping is :",Data_Map)
    
    Data_Reduce = reduce(Sum, Data_Map)
    print("Data after reducing is :",Data_Reduce)

if __name__ == "__main__":
    main()