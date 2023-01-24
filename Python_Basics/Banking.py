# Instance Variables : Name, Account ,Address, AccountNo
# Instance Method : CreateAccount() , DisplayAccountInfo()
# Class Variables : Bank_Name, ROI_On_FD
# Class Method : DisplayBankInformation()

class Bank_Account:

    Bank_Name = "HDFC Bank PVT LTD"
    ROI_On_FD = 6.7

    def __init__(self):
        self.Name = ""
        self.Amount = 0.0
        self.Address = ""
        self.AccountNo = 0

    def CreateAccount(self):
        print("Enter your name :")
        self.Name = input()
        
        print("Enter your initial amount :")
        self.Amount = int(input())
        
        print("Enter your address :")
        self.Address = input()
        
        print("Enter your account number :")
        self.AccountNo = int(input())

    def DisplayAccountInfo(self):
        print("----------Your account information is as below----------")
        print("Name of account holder :",self.Name)
        print("Account number :",self.AccountNo)
        print("Address of account holder :",self.Address)
        print("Current amount of account holder :",self.Amount)
        print("--------------------------------------------------------")

    @classmethod
    def DisplayBankInformation(cls):
        print("Welcome to Banking console")
        print("Name of your bank is :",cls.Bank_Name)
        print("Rate of interest offered on FD is :",cls.ROI_On_FD)

def main():

    print("Name of bank :",Bank_Account.Bank_Name)
    print("Rate of Interest on Fixed deposit :",Bank_Account.ROI_On_FD)
    
    Bank_Account.DisplayBankInformation()
    
    User1 = Bank_Account()
    User2 = Bank_Account()

    print("Creating account for first customer")
    User1.CreateAccount()

    print("Creating account for second customer")
    User2.CreateAccount()

    User1.DisplayAccountInfo()
    User2.DisplayAccountInfo()

if __name__ == "__main__":
    main()