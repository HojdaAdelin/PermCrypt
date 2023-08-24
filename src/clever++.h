#pragma once
#include <iostream>
#include <string>

class CleverCpp {

    public:
    
        void read(std::string filename);
        void write(std::string filetowrite, std::string content, bool clearAndWrite, bool append);
        void hide(std::string filetohide, bool hidefile);
        void readonly(std::string filetoreadonly, bool readonlyfile);
        void deleteFile(std::string filedelete);
        void clear(std::string fileclear);
        void encrypt(std::string Efilename);
        void decrypt(std::string Dfilename);
        void create(std::string filetocreate);
        std::string commandOutput(std::string command, std::string outputFile);
        std::string fileSize(std::string filetosize);
        void setSize(std::string filetosetsize, int size);


    private:

        bool defaultHide;
        bool defaultClear;
        bool defaultAppend;
        bool defaultReadOnly;
};