For the Banking program (exercise 1)

cd "Assignment1\Banking"

then

C:\msys64\ucrt64\bin\g++.exe -std=c++17 -Wall -Wextra -g3 -Iinclude src\*.cpp -o output\banking.exe

then run 
.\output\banking.exe

For the LibraryApp (Bookstore) program exercise 2:

cd "Assignment1\LibraryApp"

then compile

& "C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra -g3 -Iinclude src\*.cpp -o output\library.exe "-Wl,-subsystem,console"

then run 

.\output\library.exe



