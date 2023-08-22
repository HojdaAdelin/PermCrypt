Run the command to create the library:

1. Create object files

g++ -c src/DECdecrypt.cpp -o DECdecrypt.o
g++ -c src/DECencrypt.cpp -o DECencrypt.o

2. Shared library

g++ -shared -o libdec.so DECdecrypt.o DECencrypt.o

3. Use the shared library in your own project

g++ -o "YourProgram.exe" ".cpp files" -I./external -L./external -ldec

The -I./external will be the path to the .h file.
Just change the "/external" by your path.
Also -L./external will be the path to the library.
Just chnage the "-L./external" to the library path in your project.