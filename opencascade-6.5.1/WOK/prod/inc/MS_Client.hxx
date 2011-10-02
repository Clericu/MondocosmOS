// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_Client_HeaderFile
#define _MS_Client_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_Client_HeaderFile
#include <Handle_MS_Client.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _MS_GlobalEntity_HeaderFile
#include <MS_GlobalEntity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_MS_HSequenceOfExternMet_HeaderFile
#include <Handle_MS_HSequenceOfExternMet.hxx>
#endif
#ifndef _Handle_MS_HSequenceOfMemberMet_HeaderFile
#include <Handle_MS_HSequenceOfMemberMet.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;
class TCollection_HAsciiString;
class MS_HSequenceOfExternMet;
class MS_HSequenceOfMemberMet;
class WOKTools_MapOfHAsciiString;



class MS_Client : public MS_GlobalEntity {

public:

  
  Standard_EXPORT   MS_Client(const Handle(TCollection_HAsciiString)& aInterface);
  
  Standard_EXPORT     void Interface(const Handle(TCollection_HAsciiString)& anInterface) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Interfaces() const;
  
  Standard_EXPORT     void Method(const Handle(TCollection_HAsciiString)& aMethod) ;
  //! The methods declared here will have an asynchronous execution <br>
//!          mode. The 'Create' methods are not allowd here. <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Methods() const;
  
  Standard_EXPORT     void ComputeTypes(const Handle(MS_HSequenceOfExternMet)& SeqOfExternMet,const Handle(MS_HSequenceOfMemberMet)& SeqOfMemberMet,WOKTools_MapOfHAsciiString& CompleteMap,WOKTools_MapOfHAsciiString& IncompleteMap,WOKTools_MapOfHAsciiString& SemiCompleteMap) const;
  
  Standard_EXPORT     void Use(const Handle(TCollection_HAsciiString)& aClient) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Uses() const;




  DEFINE_STANDARD_RTTI(MS_Client)

protected:




private: 


Handle_TColStd_HSequenceOfHAsciiString myInterfaces;
Handle_TColStd_HSequenceOfHAsciiString myMethods;
Handle_TColStd_HSequenceOfHAsciiString myUses;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif