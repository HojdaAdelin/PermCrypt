#pragma once
#include <iostream>
#include <string>

class CleverCpp {

    public:

        // Int functions

        int generate(int numbers);
        // Enter the length of the number

        int fileSize(std::string filetosize);
        // Enter the name of the file


        // String functions

        std::string commandOutput(std::string command, std::string outputFile = "Output.log");
        // command = The console command 
        // outputFile = Name of the file where the output go
        std::string read(std::string filename);
        // filename = The name of the file


        // Void functions

        void write(std::string filetowrite, std::string content, bool clearAndWrite = false, bool append = true);
        // filetowrite = The name of the file
        // content = Text to write
        // clearAndWrite = Clear the file and write content
        // append = Append the text
        void hide(std::string filetohide, bool hidefile = false);
        // filetohide = The name of the file
        // hidefile = Value for hide
        void readonly(std::string filetoreadonly, bool readonlyfile = false);
        // filetoreadonly = The name of the file
        // readonlyfile = Value for read only
        void deleteFile(std::string filedelete);
        // filedelete = The name of the file
        void clear(std::string fileclear);
        // fileclear = The name of the file
        void encrypt(std::string Efilename);
        // Efilename = The name of the file
        void decrypt(std::string Dfilename);
        // Dfilename = The name of the file
        void create(std::string filetocreate);
        // filetocreate = The name of the file
        void setSize(std::string filetosetsize, int size);
        // filetosetsize = The name of the file
        // size = Value for the new size in MB

        

    private:

        bool defaultHide;
        bool defaultClear;
        bool defaultAppend;
        bool defaultReadOnly;
};