#pragma once
#include <iostream>
#include <string>

class CleverCpp {

    public:

        std::string select(std::string filetoselect) {

            return selectfile = filetoselect;

        }

        CleverCpp();

        void read(std::string filename);
        void write(std::string filetowrite, std::string content, bool clearAndWrite, bool append);
        void hide(bool hidefile);
        void readonly(bool readonlyfile);
        void deleteFile(std::string filedelete);
        void clear(std::string fileclear);
        void encrypt(std::string Efilename);
        void decrypt(std::string Dfilename);
        void create(std::string filetocreate);
        std::string commandOutput(std::string command, std::string outputFile);
        std::string fileSize(std::string filetosize);


    private:

        std::string selectfile;
        bool defaultHide;
        bool defaultClear;
        bool defaultAppend;
        bool defaultReadOnly;
};