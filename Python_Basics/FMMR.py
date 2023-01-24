CheckEven = lambda No : (No % 2 == 0) 

Doubles = lambda No : (No * 2)

Summation = lambda A,B : A + B

def filterX(Helper_Function, Data):
    Result = []
    for No in Data:
        if(Helper_Function(No) == True):
            Result.append(No)
    
    return Result

def mapX(Helper_Function,Data):
    Result = []
    for No in Data:
        Value = Helper_Function(No)
        Result.append(Value)
    
    return Result

def reduceX(Helper_Function,Data):
    Answer = 0
    for No in Data:
        Answer = Helper_Function(Answer,No)

    return Answer

def main():
    print("Enter number of elements you want: ")
    iSize = int(input())
    
    Data_Input = []
    print("Enter the data :")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)
        
    print("Data is : ",Data_Input)
    
    Data_Filter = filterX(CheckEven,Data_Input)
    print("Data after filtering is :",Data_Filter)
    
    Data_Map = mapX(Doubles,Data_Filter)
    print("Data after mapping is :",Data_Map)

    Data_Reduce = reduceX(Summation,Data_Map)
    print("Data after reducing is :",Data_Reduce)

if __name__ == "__main__":
    main()