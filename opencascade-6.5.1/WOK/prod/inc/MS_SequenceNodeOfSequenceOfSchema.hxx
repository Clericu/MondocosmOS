// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_SequenceNodeOfSequenceOfSchema_HeaderFile
#define _MS_SequenceNodeOfSequenceOfSchema_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_SequenceNodeOfSequenceOfSchema_HeaderFile
#include <Handle_MS_SequenceNodeOfSequenceOfSchema.hxx>
#endif

#ifndef _Handle_MS_Schema_HeaderFile
#include <Handle_MS_Schema.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class MS_Schema;
class MS_SequenceOfSchema;



class MS_SequenceNodeOfSequenceOfSchema : public TCollection_SeqNode {

public:

  
      MS_SequenceNodeOfSequenceOfSchema(const Handle(MS_Schema)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_MS_Schema& Value() const;




  DEFINE_STANDARD_RTTI(MS_SequenceNodeOfSequenceOfSchema)

protected:




private: 


Handle_MS_Schema myValue;


};

#define SeqItem Handle_MS_Schema
#define SeqItem_hxx <MS_Schema.hxx>
#define TCollection_SequenceNode MS_SequenceNodeOfSequenceOfSchema
#define TCollection_SequenceNode_hxx <MS_SequenceNodeOfSequenceOfSchema.hxx>
#define Handle_TCollection_SequenceNode Handle_MS_SequenceNodeOfSequenceOfSchema
#define TCollection_SequenceNode_Type_() MS_SequenceNodeOfSequenceOfSchema_Type_()
#define TCollection_Sequence MS_SequenceOfSchema
#define TCollection_Sequence_hxx <MS_SequenceOfSchema.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif