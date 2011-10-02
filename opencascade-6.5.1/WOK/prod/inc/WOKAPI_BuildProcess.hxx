// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKAPI_BuildProcess_HeaderFile
#define _WOKAPI_BuildProcess_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _WOKAPI_Workbench_HeaderFile
#include <WOKAPI_Workbench.hxx>
#endif
#ifndef _Handle_WOKMake_BuildProcess_HeaderFile
#include <Handle_WOKMake_BuildProcess.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_WOKMake_HSequenceOfStepOption_HeaderFile
#include <Handle_WOKMake_HSequenceOfStepOption.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKTools_HSequenceOfDefine_HeaderFile
#include <Handle_WOKTools_HSequenceOfDefine.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _WOKAPI_BuildStatus_HeaderFile
#include <WOKAPI_BuildStatus.hxx>
#endif
#ifndef _Handle_WOKMake_Step_HeaderFile
#include <Handle_WOKMake_Step.hxx>
#endif
class WOKMake_BuildProcess;
class WOKMake_HSequenceOfStepOption;
class WOKAPI_Workbench;
class WOKAPI_Unit;
class WOKAPI_SequenceOfUnit;
class TCollection_HAsciiString;
class TColStd_SequenceOfHAsciiString;
class WOKTools_HSequenceOfDefine;
class TColStd_HSequenceOfHAsciiString;
class WOKAPI_SequenceOfMakeStep;
class WOKMake_Step;



class WOKAPI_BuildProcess  {
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

  
  Standard_EXPORT   WOKAPI_BuildProcess();
  
  Standard_EXPORT     Standard_Boolean Init(const WOKAPI_Workbench& abench) ;
  
  Standard_EXPORT     void SetForceFlag(const Standard_Boolean aflag) ;
  
  Standard_EXPORT     void Add(const WOKAPI_Unit& adevunit) ;
  
  Standard_EXPORT     void Add(const WOKAPI_SequenceOfUnit& units) ;
  //! Select agroup AND aunit for execution <br>
//!            all groups are selected if agroup is Null <br>
//!            all units are treated if aunit is invalid <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnGroups(const WOKAPI_Unit& aunit,const Handle(TCollection_HAsciiString)& group,const Standard_Boolean selectflag = Standard_True) ;
  //!     Select groups AND units for execution <br>
//!            all groups are selected if groups is Empty <br>
//!            all units are treated if units is Empty <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnGroups(const WOKAPI_SequenceOfUnit& units,const TColStd_SequenceOfHAsciiString& groups,const Standard_Boolean selectflag = Standard_True) ;
  //!     Select groups AND units on their types for execution <br>
//!              all groups are selected if groups is Empty <br>
//!              all units are treated if unit types is Empty <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnTypesAndGroups(const TColStd_SequenceOfHAsciiString& unittypes,const TColStd_SequenceOfHAsciiString& groups,const Standard_Boolean selectflag = Standard_True) ;
  //! Select steps within aunit for execution <br>
//!            select from begining if astart is Null <br>
//!            select until end if aend is Nul <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnSteps(const WOKAPI_Unit& aunit,const Handle(TCollection_HAsciiString)& astart,const Handle(TCollection_HAsciiString)& aend,const Standard_Boolean selectflag = Standard_True) ;
  //! Select steps within units for execution <br>
//!            select from begining if astart is Null <br>
//!            select until end if aend is Nul <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnSteps(const WOKAPI_SequenceOfUnit& units,const Handle(TCollection_HAsciiString)& astart,const Handle(TCollection_HAsciiString)& aend,const Standard_Boolean selectflag = Standard_True) ;
  //! Select steps within unit types for execution <br>
//!            select from begining if astart is Null <br>
//!            select until end if aend is Nul <br>
//!            returns number of selected steps <br>
  Standard_EXPORT     Standard_Integer SelectOnSteps(const TColStd_SequenceOfHAsciiString& unittypes,const Handle(TCollection_HAsciiString)& astart,const Handle(TCollection_HAsciiString)& aend,const Standard_Boolean selectflag = Standard_True) ;
  //! select steps on defines <br>
//!          defines are: <br>
//!               for units: <br>
//!                       Units=Unit1,Unit2,...,UnitN <br>
//!                       UnitTypes=UnitType1,UnitType2,...,UnitTypeN <br>
//!                       XUnits=Unit1,Unit2,...,UnitN <br>
//!                       XUnitTypes=UnitType1,UnitType2,...,UnitTypeN <br>
//!               for steps within units: <br>
//!                       Groups=Group1,Group2,...GroupN <br>
//!                       XGroups=Group1,Group2,...GroupN <br>
  Standard_EXPORT     Standard_Integer SelectOnDefines(const Handle(WOKTools_HSequenceOfDefine)& defines) ;
  //! unselects all previously selected steps <br>
//!          returns number of unselected steps <br>
  Standard_EXPORT     Standard_Integer UnSelectAll() ;
  
  Standard_EXPORT     Standard_Integer ApplyTargetsToSteps(const Handle(TCollection_HAsciiString)& astep,const Handle(TColStd_HSequenceOfHAsciiString)& targets) const;
  
  Standard_EXPORT     Standard_Integer SelectedStepsNumber() const;
  
  Standard_EXPORT     void SelectedSteps(WOKAPI_SequenceOfMakeStep& aseq) const;
  
  Standard_EXPORT     void UnitSteps(const WOKAPI_Unit& aunit,WOKAPI_SequenceOfMakeStep& aseq) const;
  
  Standard_EXPORT     void PrintBanner() const;
  
  Standard_EXPORT     WOKAPI_BuildStatus Execute(const Standard_Boolean alogflag = Standard_False) ;





protected:





private:

  
  Standard_EXPORT     Standard_Integer SelectStep(const Handle(WOKMake_Step)& astep,const Standard_Boolean selectflag = Standard_True) ;


Standard_Boolean myinit;
WOKAPI_Workbench mybench;
Handle_WOKMake_BuildProcess myprocess;
Standard_Boolean myforce;
Standard_Integer myselect;
Handle_WOKMake_HSequenceOfStepOption myoptions;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif