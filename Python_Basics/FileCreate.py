import os

def CreateFile(FileName):

    if(os.path.exists(FileName)):
        print("File already exists")
        return
    else:
        fd = open(FileName, 'w')

def main():
    print("Enter the name of the file to be created : ")
    Name = input()
    
    CreateFile(Name)

if __name__ == "__main__":
    main()