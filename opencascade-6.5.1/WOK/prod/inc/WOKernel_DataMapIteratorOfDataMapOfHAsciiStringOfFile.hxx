// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFile_HeaderFile
#define _WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMapIterator_HeaderFile
#include <WOKTools_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKernel_File_HeaderFile
#include <Handle_WOKernel_File.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_HAsciiString;
class WOKernel_File;
class WOKTools_HAsciiStringHasher;
class WOKernel_DataMapOfHAsciiStringOfFile;



class WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFile  : public WOKTools_BasicMapIterator {
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

  
  Standard_EXPORT   WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFile();
  
  Standard_EXPORT   WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFile(const WOKernel_DataMapOfHAsciiStringOfFile& aMap);
  
  Standard_EXPORT     void Initialize(const WOKernel_DataMapOfHAsciiStringOfFile& aMap) ;
  
  Standard_EXPORT    const Handle_TCollection_HAsciiString& Key() const;
  
  Standard_EXPORT    const Handle_WOKernel_File& Value() const;
  
  Standard_EXPORT     Standard_Integer Hashcode() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
