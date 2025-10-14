How Each Part Works

Part (a) – BookType
    cd PartA_BookType
    C:\msys64\ucrt64\bin\g++.exe -Iinclude src\BookType.cpp mainA.cpp -o output\BookType.exe
    .\output\BookType.exe


Part (b) – MemberType
    cd PartB_MemberType
    C:\msys64\ucrt64\bin\g++.exe -Iinclude src\MemberType.cpp mainB.cpp -o output\MemberType.exe
    .\output\MemberType.exe


Part (c) – BookStore
    cd PartC_BookStore
    C:\msys64\ucrt64\bin\g++.exe -Iinclude src\*.cpp mainC.cpp -o output\BookStore.exe
    .\output\BookStore.exe
