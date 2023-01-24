# import Numbers
# 1 from Numbers import DisplayFactors
# 2 from Numbers import *
import Numbers as NUM

def main():
    print("Enter number :")
    No = int(input())
    
    #Numbers.DisplayFactors(No)
    # 1 DisplayFactors(No)
    # 2 DisplayFactors(No)
    NUM.DisplayFactors(No)
    
if __name__ == "__main__":
    main()