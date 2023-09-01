#pragma once
#include <iostream>
#include <string>

class CleverCpp {

    public:

        // Int functions

        // Enter the name of the file
        int fileSize(std::string filetosize);


        // String functions
        
        // command = The console command 
        // outputFile = Name of the file where the output go
        // You can set absolutePath if you have to get the log from a different location
        // You can set removeBat = true if you want to delete bat file after operation
        std::string commandOutput(std::string command, std::string outputFile = "Output.log", std::string absolutePath = "none", bool removeBat = false);
        // filename = The name of the file
        std::string read(std::string filename);


        // Void functions

        // filetowrite = The name of the file
        // content = Text to write
        // clearAndWrite = Clear the file and write content
        // append = Append the text
        void write(std::string filetowrite, std::string content, bool clearAndWrite = false, bool append = true);
        // filetohide = The name of the file
        // hidefile = Value for hide        
        void hide(std::string filetohide, bool hidefile = false);
        // filetoreadonly = The name of the file
        // readonlyfile = Value for read only
        void readonly(std::string filetoreadonly, bool readonlyfile = false);
        // filedelete = The name of the file
        void deleteFile(std::string filedelete);
        // fileclear = The name of the file
        void clear(std::string fileclear);
        // Efilename = The name of the file
        void encrypt(std::string Efilename);
        // Dfilename = The name of the file
        void decrypt(std::string Dfilename);
        // filetocreate = The name of the file
        void create(std::string filetocreate);
        // filetosetsize = The name of the file
        // size = Value for the new size in MB
        void setSize(std::string filetosetsize, int size);
        // fileSource = Path of the file
        // destinationSource = Path to move the file
        void moveFile(std::string fileSource, std::string destinationSource);

    private:

        bool defaultHide;
        bool defaultClear;
        bool defaultAppend;
        bool defaultReadOnly;
};