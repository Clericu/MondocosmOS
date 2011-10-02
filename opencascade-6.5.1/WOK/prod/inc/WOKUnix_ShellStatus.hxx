// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKUnix_ShellStatus_HeaderFile
#define _WOKUnix_ShellStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKUnix_ShellStatus_HeaderFile
#include <Handle_WOKUnix_ShellStatus.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _WOKUnix_FDescr_HeaderFile
#include <WOKUnix_FDescr.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKUnix_Shell_HeaderFile
#include <Handle_WOKUnix_Shell.hxx>
#endif
class Standard_ProgramError;
class TCollection_AsciiString;
class WOKUnix_FDescr;
class TCollection_HAsciiString;
class WOKUnix_Shell;



class WOKUnix_ShellStatus : public MMgt_TShared {

public:

  
  Standard_EXPORT     WOKUnix_FDescr& StatusFile() ;
  
  Standard_EXPORT     Standard_Integer No() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     Standard_Integer Status() const;
  
  Standard_EXPORT   virtual  void EndCmd(const Handle(WOKUnix_Shell)& ashell)  = 0;
  
  Standard_EXPORT   virtual  void Sync(const Handle(WOKUnix_Shell)& ashell)  = 0;
  
  Standard_EXPORT   virtual  void Reset(const Handle(WOKUnix_Shell)& ashell)  = 0;
  
  Standard_EXPORT   virtual  Standard_Integer Get() ;
  
  Standard_EXPORT   virtual  Standard_Integer GetRemote() ;
  
  Standard_EXPORT   virtual  void Destroy() ;
~WOKUnix_ShellStatus()
{
  Destroy();
}



  DEFINE_STANDARD_RTTI(WOKUnix_ShellStatus)

protected:

  
  Standard_EXPORT   WOKUnix_ShellStatus();
  
  Standard_EXPORT   WOKUnix_ShellStatus(const TCollection_AsciiString& apath);

Standard_Integer mystatus;


private: 


WOKUnix_FDescr myfile;
WOKUnix_FDescr myfileend;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif