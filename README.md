# Clever++ / Libclever

### Clever++ is a C++ file manipulator library.
### Clever++ give proof of a imbattable performance and fast operation.
### Also it provide a strong documentation in practice when we use the library.

# Build

### Any library need object files so Clever++ also need object files thus every .cpp files need to be converted in .o files.
<pre>
  1. g++ -c ".cpp file" -o ".o file"
</pre>

### After this we need to gather all .o files into a .so file which is the shared library.
<pre>
  2. g++ -shared -o libclever.so "all .o files"
</pre>

### Finaly we can use this in our projects.
<pre>
  3. g++ -o "App.exe" ".cpp files" "library location"
</pre>

## When you use this library make sure to put this in the same directory with the .cpp files.

## [Build doc](build/BUILD.md)

# Features

## All commands:
```cpp
CleverCpp clever;

// Display file size in bytes
int fileSize(std::string filetosize);
clever.fileSize();

// Get the output of a command
std::string commandOutput(std::string command, std::string outputFile = "Output.log", std::string absolutePath = "none", bool removeBat = false);
clever.commandOutput();

// Read file
std::string read(std::string filename);
clever.read();

// Write to file
void write(std::string filetowrite, std::string content, bool clearAndWrite = false, bool append = true);
clever.write();

// Hide file attribute
void hide(std::string filetohide, bool hidefile = false);
clever.hide();

// Read only attribute
void readonly(std::string filetoreadonly, bool readonlyfile = false);
clever.readonly();

// Delete file
void deleteFile(std::string filedelete);
clever.deleteFile();

// Clear file
void clear(std::string fileclear);
clever.clear();

// Encrypt file
void encrypt(std::string Efilename);
clever.encrypt();

// Decrypt file
void decrypt(std::string Dfilename);
clever.decrypt();

// Create file
void create(std::string filetocreate);
clever.create();

// Set file size in MB
void setSize(std::string filetosetsize, int size);
clever.setSize();

// Move file
void moveFile(std::string fileSource, std::string destinationSource);
clever.moveFile();

```
## To acces these functions you need to craete an object of the library main class.
## The main class is "CleverCpp"
