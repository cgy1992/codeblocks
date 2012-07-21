#ifndef COMPILER_XML_H
#define COMPILER_XML_H

#include <compiler.h>

class CompilerXML : public Compiler
{
    public:
        CompilerXML(const wxString& name, const wxString& ID, const wxString& file);
        virtual ~CompilerXML();

        virtual AutoDetectResult AutoDetectInstallationDir();

    protected:
        virtual Compiler* CreateCopy();

    private:
        bool AddPath(const wxString& pth, int sm, int rmDirs = 0);

        wxString m_fileName;
};

#endif // COMPILER_XML_H