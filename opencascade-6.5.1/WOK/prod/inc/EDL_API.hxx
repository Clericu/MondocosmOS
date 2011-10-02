// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _EDL_API_HeaderFile
#define _EDL_API_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_EDL_API_HeaderFile
#include <Handle_EDL_API.hxx>
#endif

#ifndef _Handle_EDL_Interpretor_HeaderFile
#include <Handle_EDL_Interpretor.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _EDL_Error_HeaderFile
#include <EDL_Error.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
class EDL_Interpretor;
class TColStd_HSequenceOfHAsciiString;
class EDL_Template;
class EDL_Variable;
class TCollection_HAsciiString;
class TColStd_HSequenceOfAsciiString;
class EDL_DataMapIteratorOfMapOfTemplate;
class EDL_DataMapIteratorOfMapOfVariable;



class EDL_API : public MMgt_TShared {

public:

  
  Standard_EXPORT   EDL_API();
  //! Open a shared library named <aName> <br>
//!          The name must not be the name of the file <br>
//!          but the significant part : <br>
//! <br>
//!          ex.: <br>
//! <br>
//!          for library libTest.so <br>
//!          the name must be Test <br>
  Standard_EXPORT     EDL_Error Openlib(const Standard_CString aName) const;
  //! Call a function <aFunction> from library <aLibName> with <br>
//!          the arguments list <anArgList> <br>
//!          The name of the library is the same than Openlib <br>
  Standard_EXPORT     EDL_Error Call(const Standard_CString aLibName,const Standard_CString aFunction,const Handle(TColStd_HSequenceOfHAsciiString)& anArgList) const;
  //! Close the library named <aName> <br>
//!          The name is the same than Openlib <br>
  Standard_EXPORT     void Closelib(const Standard_CString aName) const;
  //! Add a template named <aName> with <aDefinition> as definition <br>
  Standard_EXPORT     void AddTemplate(const Standard_CString aName,const Handle(TColStd_HSequenceOfHAsciiString)& aDefinition,const Handle(TColStd_HSequenceOfHAsciiString)& aVarList) const;
  //! Evaluate a template named <aName> with the variables <br>
//!          list <aVarList> and set the result in a variable named <aResult> <br>
  Standard_EXPORT     void Apply(const Standard_CString aResult,const Standard_CString aName) const;
  //! Remove a template <br>
  Standard_EXPORT     void RemoveTemplate(const Standard_CString aName) const;
  
  Standard_EXPORT     EDL_Template& GetTemplate(const Standard_CString aName) const;
  //! Create a variable <aName> or modifie it s value <br>
  Standard_EXPORT     void AddVariable(const Standard_CString aName,const Standard_CString aValue) const;
  //! Create a variable <aName> or modifie it s value <br>
  Standard_EXPORT     void AddVariable(const Standard_CString aName,const Standard_Integer aValue) const;
  //! Create a variable <aName> or modifie it s value <br>
  Standard_EXPORT     void AddVariable(const Standard_CString aName,const Standard_Real aValue) const;
  //! Create a variable <aName> or modifie it s value <br>
  Standard_EXPORT     void AddVariable(const Standard_CString aName,const Standard_Character aValue) const;
  //! Returns the value of the variable named <aName>. <br>
  Standard_EXPORT     EDL_Variable& GetVariable(const Standard_CString aName) const;
  //! Returns the value of the variable named <aName>. <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString GetVariableValue(const Standard_CString aName) const;
  //! Remove a variable named <aName>. <br>
  Standard_EXPORT     void RemoveVariable(const Standard_CString aName) const;
  //! Return Standard_True if a variable or template named <aName> is defined <br>
  Standard_EXPORT     Standard_Boolean IsDefined(const Standard_CString aName) const;
  //! Open a file named <aNamed> with a filename <aPath> <br>
//!          <aPath> can be either a variable name or a full path. <br>
//!          Ex. in EDL : @file afile "/tmp/output.txt"; <br>
//!                        or <br>
//!                       @file afile %filename; <br>
  Standard_EXPORT     EDL_Error OpenFile(const Standard_CString aName,const Standard_CString aPath) const;
  //! Write in file <aName> (see OpenFile for the name) the value <br>
//!          of the variable named <aVar> <br>
  Standard_EXPORT     void WriteFile(const Standard_CString aName,const Standard_CString aVar) const;
  //! Write in file <aName> (see OpenFile for the name) the value <br>
//!          named <aVar> <br>
  Standard_EXPORT     void WriteFileConst(const Standard_CString aName,const Standard_CString aVar) const;
  //! Write in file <aName> (see OpenFile for the name) the value <br>
//!          named <aValue> <br>
  Standard_EXPORT     void WriteFileConst(const Standard_CString aName,const Standard_Character aValue) const;
  //! Write in file <aName> (see OpenFile for the name) the value <br>
//!          named <aValue> <br>
  Standard_EXPORT     void WriteFileConst(const Standard_CString aName,const Standard_Integer aValue) const;
  //! Write in file <aName> (see OpenFile for the name) the value <br>
//!          named <aValue> <br>
  Standard_EXPORT     void WriteFileConst(const Standard_CString aName,const Standard_Real aValue) const;
  //! Close the file named <aName> (see OpenFile for the name) <br>
  Standard_EXPORT     void CloseFile(const Standard_CString aName) const;
  //! Add a directory <aDirectory> to the EDL file search list <br>
//!          for the @uses command <br>
  Standard_EXPORT     void AddIncludeDirectory(const Standard_CString aDirectory) const;
  //! Remove a directory <aDirectory> from the EDL file search list <br>
//!          for the @uses command <br>
  Standard_EXPORT     void RemoveIncludeDirectory(const Standard_CString aDirectory) const;
  //! return the directory list <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfAsciiString GetIncludeDirectory() const;
  
  Standard_EXPORT     EDL_DataMapIteratorOfMapOfTemplate GetTemplateIterator() const;
  
  Standard_EXPORT     EDL_DataMapIteratorOfMapOfVariable GetVariableIterator() const;
  //! Destroy all variables. <br>
  Standard_EXPORT     void ClearVariables() const;
  //! Destroy all templates. <br>
  Standard_EXPORT     void ClearTemplates() const;
  //! Destroy all include directories. <br>
  Standard_EXPORT     void ClearIncludes() const;
  //! Execute the EDL file <aFileName>. <br>
  Standard_EXPORT     EDL_Error Execute(const Standard_CString aFileName) const;




  DEFINE_STANDARD_RTTI(EDL_API)

protected:




private: 


Handle_EDL_Interpretor myInter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif