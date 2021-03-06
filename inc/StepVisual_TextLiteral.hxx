// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_TextLiteral_HeaderFile
#define _StepVisual_TextLiteral_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_TextLiteral.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement.hxx>
#include <StepVisual_TextPath.hxx>
#include <StepVisual_FontSelect.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;
class StepVisual_FontSelect;



class StepVisual_TextLiteral : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a TextLiteral
  Standard_EXPORT StepVisual_TextLiteral();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aLiteral, const StepGeom_Axis2Placement& aPlacement, const Handle(TCollection_HAsciiString)& aAlignment, const StepVisual_TextPath aPath, const StepVisual_FontSelect& aFont) ;
  
  Standard_EXPORT   void SetLiteral (const Handle(TCollection_HAsciiString)& aLiteral) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Literal()  const;
  
  Standard_EXPORT   void SetPlacement (const StepGeom_Axis2Placement& aPlacement) ;
  
  Standard_EXPORT   StepGeom_Axis2Placement Placement()  const;
  
  Standard_EXPORT   void SetAlignment (const Handle(TCollection_HAsciiString)& aAlignment) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Alignment()  const;
  
  Standard_EXPORT   void SetPath (const StepVisual_TextPath aPath) ;
  
  Standard_EXPORT   StepVisual_TextPath Path()  const;
  
  Standard_EXPORT   void SetFont (const StepVisual_FontSelect& aFont) ;
  
  Standard_EXPORT   StepVisual_FontSelect Font()  const;




  DEFINE_STANDARD_RTTI(StepVisual_TextLiteral)

protected:




private: 


  Handle(TCollection_HAsciiString) literal;
  StepGeom_Axis2Placement placement;
  Handle(TCollection_HAsciiString) alignment;
  StepVisual_TextPath path;
  StepVisual_FontSelect font;


};







#endif // _StepVisual_TextLiteral_HeaderFile
