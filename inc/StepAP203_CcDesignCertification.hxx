// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CcDesignCertification_HeaderFile
#define _StepAP203_CcDesignCertification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP203_CcDesignCertification.hxx>

#include <Handle_StepAP203_HArray1OfCertifiedItem.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <Handle_StepBasic_Certification.hxx>
class StepAP203_HArray1OfCertifiedItem;
class StepBasic_Certification;


//! Representation of STEP entity CcDesignCertification
class StepAP203_CcDesignCertification : public StepBasic_CertificationAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP203_CcDesignCertification();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Certification)& aCertificationAssignment_AssignedCertification, const Handle(StepAP203_HArray1OfCertifiedItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP203_HArray1OfCertifiedItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP203_HArray1OfCertifiedItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_CcDesignCertification)

protected:




private: 


  Handle(StepAP203_HArray1OfCertifiedItem) theItems;


};







#endif // _StepAP203_CcDesignCertification_HeaderFile
