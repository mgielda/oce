// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ExternalIdentificationAssignment_HeaderFile
#define _StepBasic_ExternalIdentificationAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ExternalIdentificationAssignment.hxx>

#include <Handle_StepBasic_ExternalSource.hxx>
#include <StepBasic_IdentificationAssignment.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_IdentificationRole.hxx>
class StepBasic_ExternalSource;
class TCollection_HAsciiString;
class StepBasic_IdentificationRole;


//! Representation of STEP entity ExternalIdentificationAssignment
class StepBasic_ExternalIdentificationAssignment : public StepBasic_IdentificationAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ExternalIdentificationAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aIdentificationAssignment_AssignedId, const Handle(StepBasic_IdentificationRole)& aIdentificationAssignment_Role, const Handle(StepBasic_ExternalSource)& aSource) ;
  
  //! Returns field Source
  Standard_EXPORT   Handle(StepBasic_ExternalSource) Source()  const;
  
  //! Set field Source
  Standard_EXPORT   void SetSource (const Handle(StepBasic_ExternalSource)& Source) ;




  DEFINE_STANDARD_RTTI(StepBasic_ExternalIdentificationAssignment)

protected:




private: 


  Handle(StepBasic_ExternalSource) theSource;


};







#endif // _StepBasic_ExternalIdentificationAssignment_HeaderFile
