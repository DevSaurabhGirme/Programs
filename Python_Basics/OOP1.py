class Arithematic:
    
    def __init__(self,A,B):
        print("Inside init method")
        self.No1 = A
        self.No2 = B
    
    def Addition(self):
        Ans = self.No1 + self.No2
        return Ans

    def Subtraction(self):
        Ans = self.No1 - self.No2
        return Ans

def main():
    print("Inside main method")
    
    obj = Arithematic(12,11)
    Output = obj.Addition()
    print("Addition is :",Output)
    
    Output = obj.Subtraction()
    print("Subtraction is :",Output)

    objX = Arithematic(21,20)

if __name__ == "__main__":
    print("inside Starter")
    main()