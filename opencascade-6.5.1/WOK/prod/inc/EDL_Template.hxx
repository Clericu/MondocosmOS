// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _EDL_Template_HeaderFile
#define _EDL_Template_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_EDL_HSequenceOfVariable_HeaderFile
#include <Handle_EDL_HSequenceOfVariable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;
class TColStd_HSequenceOfHAsciiString;
class TColStd_HSequenceOfAsciiString;
class EDL_HSequenceOfVariable;



class EDL_Template  {
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

  
  Standard_EXPORT   EDL_Template();
  
  Standard_EXPORT   EDL_Template(const Standard_CString aName);
  
  Standard_EXPORT   EDL_Template(const EDL_Template& aTmp);
  
  Standard_EXPORT     void Assign(const EDL_Template& aTemplate) ;
    void operator =(const EDL_Template& aTemplate) 
{
  Assign(aTemplate);
}
  
  Standard_EXPORT     void Destroy() const;
~EDL_Template()
{
  Destroy();
}
  
  Standard_EXPORT     Standard_CString GetName() const;
  
  Standard_EXPORT     Standard_CString GetLine(const Standard_Integer index) const;
  
  Standard_EXPORT     void SetLine(const Standard_Integer index,const Standard_CString aValue) ;
  
  Standard_EXPORT     void AddLine(const Standard_CString aValue) ;
  
  Standard_EXPORT     void ClearLines() ;
  
  Standard_EXPORT     void Eval(const Handle(EDL_HSequenceOfVariable)& aVar) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfAsciiString GetEval() const;
  
  Standard_EXPORT     void VariableList(const Handle(TColStd_HSequenceOfHAsciiString)& aVarList) ;
  
  Standard_EXPORT     void AddToVariableList(const Handle(TCollection_HAsciiString)& aVarName) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString GetVariableList() const;
  
  Standard_EXPORT   static  Standard_Integer HashCode(const EDL_Template& aVar,const Standard_Integer Upper) ;
  
  Standard_EXPORT   static  Standard_Boolean IsEqual(const EDL_Template& aTemp1,const EDL_Template& aTemp2) ;





protected:





private:



Handle_TCollection_HAsciiString myName;
Handle_TColStd_HSequenceOfHAsciiString myVariable;
Handle_TColStd_HSequenceOfAsciiString myValue;
Handle_TColStd_HSequenceOfAsciiString myEval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif