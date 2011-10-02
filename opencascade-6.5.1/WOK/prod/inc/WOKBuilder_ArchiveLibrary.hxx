// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_ArchiveLibrary_HeaderFile
#define _WOKBuilder_ArchiveLibrary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKBuilder_ArchiveLibrary_HeaderFile
#include <Handle_WOKBuilder_ArchiveLibrary.hxx>
#endif

#ifndef _WOKBuilder_Library_HeaderFile
#include <WOKBuilder_Library.hxx>
#endif
#ifndef _Handle_WOKUtils_Path_HeaderFile
#include <Handle_WOKUtils_Path.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _WOKBuilder_LibReferenceType_HeaderFile
#include <WOKBuilder_LibReferenceType.hxx>
#endif
class WOKUtils_Path;
class TCollection_HAsciiString;
class WOKUtils_Param;



class WOKBuilder_ArchiveLibrary : public WOKBuilder_Library {

public:

  
  Standard_EXPORT   WOKBuilder_ArchiveLibrary(const Handle(WOKUtils_Path)& apath);
  
  Standard_EXPORT   WOKBuilder_ArchiveLibrary(const Handle(TCollection_HAsciiString)& aname,const Handle(WOKUtils_Path)& adir,const WOKBuilder_LibReferenceType areftype);
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString GetLibFileName(const WOKUtils_Param& params) ;
  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString GetLibFileName(const WOKUtils_Param& params,const Handle(TCollection_HAsciiString)& aname) ;




  DEFINE_STANDARD_RTTI(WOKBuilder_ArchiveLibrary)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif