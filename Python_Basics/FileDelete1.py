import os

def DeleteFile(FileName):
    if(os.path.exists(FileName)):
        size = os.path.getsize(FileName)
        print(size)
        if(size == 0):
            os.remove(FileName)
            print("File deletion completed")
        else:
            print("Are you sure you want to delete the file?")
            option = input()
            if(option == "Y" or option == "y"):
                os.remove(FileName)
            else:
                print("File deletion process stopped")
                return


def main():
    print("Enter the name of the file to delete : ")
    Name = input()
    
    DeleteFile(Name)

if __name__ == "__main__":
    main()