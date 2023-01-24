import os

def DeleteFile(FileName):
    if(os.path.exists(FileName)):
        os.remove(FileName)
    else:
        print("File doesn't exist")
        return


def main():
    print("Enter the name of the file to delete : ")
    Name = input()
    
    DeleteFile(Name)

if __name__ == "__main__":
    main()