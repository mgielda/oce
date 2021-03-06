// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_ContextDependentOverRidingStyledItem_HeaderFile
#define _StepVisual_ContextDependentOverRidingStyledItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_ContextDependentOverRidingStyledItem.hxx>

#include <Handle_StepVisual_HArray1OfStyleContextSelect.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <Handle_StepRepr_RepresentationItem.hxx>
#include <Handle_StepVisual_StyledItem.hxx>
#include <Standard_Integer.hxx>
class StepVisual_HArray1OfStyleContextSelect;
class TCollection_HAsciiString;
class StepVisual_HArray1OfPresentationStyleAssignment;
class StepRepr_RepresentationItem;
class StepVisual_StyledItem;
class StepVisual_StyleContextSelect;



class StepVisual_ContextDependentOverRidingStyledItem : public StepVisual_OverRidingStyledItem
{

public:

  
  //! Returns a ContextDependentOverRidingStyledItem
  Standard_EXPORT StepVisual_ContextDependentOverRidingStyledItem();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles, const Handle(StepRepr_RepresentationItem)& aItem, const Handle(StepVisual_StyledItem)& aOverRiddenStyle) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepVisual_HArray1OfPresentationStyleAssignment)& aStyles, const Handle(StepRepr_RepresentationItem)& aItem, const Handle(StepVisual_StyledItem)& aOverRiddenStyle, const Handle(StepVisual_HArray1OfStyleContextSelect)& aStyleContext) ;
  
  Standard_EXPORT   void SetStyleContext (const Handle(StepVisual_HArray1OfStyleContextSelect)& aStyleContext) ;
  
  Standard_EXPORT   Handle(StepVisual_HArray1OfStyleContextSelect) StyleContext()  const;
  
  Standard_EXPORT   StepVisual_StyleContextSelect StyleContextValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbStyleContext()  const;




  DEFINE_STANDARD_RTTI(StepVisual_ContextDependentOverRidingStyledItem)

protected:




private: 


  Handle(StepVisual_HArray1OfStyleContextSelect) styleContext;


};







#endif // _StepVisual_ContextDependentOverRidingStyledItem_HeaderFile
