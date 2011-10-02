// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKAPI_Unit_HeaderFile
#define _WOKAPI_Unit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKAPI_Entity_HeaderFile
#include <WOKAPI_Entity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_WOKUtils_HSequenceOfParamItem_HeaderFile
#include <Handle_WOKUtils_HSequenceOfParamItem.hxx>
#endif
#ifndef _Handle_WOKTools_HSequenceOfDefine_HeaderFile
#include <Handle_WOKTools_HSequenceOfDefine.hxx>
#endif
class WOKAPI_Entity;
class WOKAPI_Session;
class TCollection_HAsciiString;
class WOKUtils_HSequenceOfParamItem;
class WOKTools_HSequenceOfDefine;
class WOKAPI_Locator;
class WOKAPI_SequenceOfFile;


//! Unit API in WOK <br>
class WOKAPI_Unit  : public WOKAPI_Entity {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   WOKAPI_Unit();
  
  Standard_EXPORT   WOKAPI_Unit(const WOKAPI_Entity& aent);
  
  Standard_EXPORT   WOKAPI_Unit(const WOKAPI_Session& asession,const Handle(TCollection_HAsciiString)& aname,const Standard_Boolean verbose = Standard_True,const Standard_Boolean getit = Standard_True);
  
  Standard_EXPORT     Standard_Character TypeKey() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Type() const;
  
  Standard_EXPORT     Handle_WOKUtils_HSequenceOfParamItem BuildParameters(const WOKAPI_Session& asession,const Handle(TCollection_HAsciiString)& apath,const Standard_Character acode,const Handle(WOKTools_HSequenceOfDefine)& defines,const Standard_Boolean usedefaults) ;
  
  Standard_EXPORT     Standard_Boolean Build(const WOKAPI_Session& asession,const Handle(TCollection_HAsciiString)& apath,const Standard_Character acode,const Handle(WOKTools_HSequenceOfDefine)& defines,const Standard_Boolean usedefaults) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Destroy() ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsValid() const;
  
  Standard_EXPORT     void Files(const WOKAPI_Locator& alocator,WOKAPI_SequenceOfFile& fileseq) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif