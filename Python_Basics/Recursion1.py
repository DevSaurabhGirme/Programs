# improper code with limitless calls

def Display(No):
    iCnt = 0
    
    if(iCnt < No):
        print("Ganpati Bappa")
        iCnt += 1
        Display(No)

def main():
    Display(4)

if __name__ == "__main__":
    main()