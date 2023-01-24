# Accept function in init method

class Numbers:
    def __init__(self):
        self.Size = 0
        self.Arr = list()   #[]
        self.Accept()
    
    def Accept(self):
        print("Enter number of elements to be entered :")
        self.Size = int(input())

        print("Enter the elements now ")
        Value = 0
        for i in range(0, self.Size):
            Value = int(input())
            self.Arr.append(Value)

    def Display(self):
        print("Elements from list are :")
        for i in range(0,self.Size):
            print(self.Arr[i])
    
    def Summation(self):
        Sum = 0
        
        for i in range(0, self.Size):
            Sum = Sum + self.Arr[i]
        
        return Sum
    
    def Average(self):
        Sum = 0
        for i in range(0, self.Size):
           Sum = Sum + self.Arr[i]
            
        return (Sum/self.Size)    
    
    def Maximum(self):
        Max = self.Arr[0]
        for i in range(0, self.Size):
            if(self.Arr[i] > Max):
                Max = self.Arr[i]
    
        return Max

    def Minimum(self):
        Min = self.Arr[0]
        for i in range(0, self.Size):
            if(self.Arr[i] < Min):
                Min = self.Arr[i]
    
        return Min
    
def main():
    obj = Numbers()
    obj.Display()
    
    Output = obj.Summation()
    print("Summation of all elements is :",Output)

    Output = obj.Average()
    print("Average of all elements is :",Output)

    Output = obj.Maximum()
    print("Maximum of all elements is :",Output)

    Output = obj.Minimum()
    print("Minimum of all elements is :",Output)

if __name__ == "__main__":
    main()