# user module

def DisplayFactors(No):
    print("Factors are :")
    #for i in range(1,int(No/2)+1,1)
    i = 1
    while (i < int(No/2)+1):
        if No % i == 0:
            print(i)
        i = i + 1
