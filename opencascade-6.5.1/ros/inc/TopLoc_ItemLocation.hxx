// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_ItemLocation_HeaderFile
#define _TopLoc_ItemLocation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TopLoc_Datum3D_HeaderFile
#include <Handle_TopLoc_Datum3D.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopLoc_TrsfPtr_HeaderFile
#include <TopLoc_TrsfPtr.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopLoc_Datum3D;
class TopLoc_Location;


//! An ItemLocation is an elementary coordinate system <br>
//!          in a Location. <br>
//! <br>
//!          The  ItemLocation     contains : <br>
//! <br>
//!          * The elementary Datum. <br>
//! <br>
//!          * The exponent of the elementary Datum. <br>
//! <br>
//!          * The transformation associated to the composition. <br>
//! <br>
class TopLoc_ItemLocation  {
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

  //! Sets the elementary Datum to <D> <br>
//!          Sets the exponent to <P> <br>
  Standard_EXPORT   TopLoc_ItemLocation(const Handle(TopLoc_Datum3D)& D,const Standard_Integer P,const Standard_Boolean fromTrsf = Standard_False);
  
  Standard_EXPORT   TopLoc_ItemLocation(const TopLoc_ItemLocation& anOther);
  
  Standard_EXPORT     TopLoc_ItemLocation& Assign(const TopLoc_ItemLocation& anOther) ;
    TopLoc_ItemLocation& operator=(const TopLoc_ItemLocation& anOther) 
{
  return Assign(anOther);
}
  
  Standard_EXPORT     void Destroy() ;
~TopLoc_ItemLocation()
{
  Destroy();
}


friend class TopLoc_Location;



protected:





private:



Handle_TopLoc_Datum3D myDatum;
Standard_Integer myPower;
TopLoc_TrsfPtr myTrsf;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
