
def Outer():        #100
    print("Inside Outer")
    
    def Inner():    #200
        print("Inside Inner")
        
    print(id(Inner))
    return Inner    #return 200
    
ret = Outer()       #return = 100()
print(type(ret))
print(id(ret))
ret()  # its like ret is replaced with Inner but in actual id is called # 200()