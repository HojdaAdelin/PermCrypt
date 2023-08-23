Run the command to create the library:

1. Create object files

g++ -c src/decryptFile.cpp -o decryptFile.o
g++ -c src/encryptFile.cpp -o encryptFile.o
g++ -c src/specialVisuals.cpp -o specialVisuals.o

2. Shared library

g++ -shared -o libclever.so decryptFile.o encryptFile.o specialVisuals.o

3. Use the shared library in your own project

g++ -o "YourProgram.exe" ".cpp files" "location of the library"

The location of the library can be libclever.so if the library is in the same directory or "folder"/libclever.so if is in another directory.