// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_Protocol_HeaderFile
#define _HeaderSection_Protocol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HeaderSection_Protocol.hxx>

#include <StepData_Protocol.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Type.hxx>
#include <Standard_CString.hxx>
class Standard_Type;


//! Protocol for HeaderSection Entities
//! It requires HeaderSection as a Resource
class HeaderSection_Protocol : public StepData_Protocol
{

public:

  
  Standard_EXPORT HeaderSection_Protocol();
  
  //! Returns a Case Number for each of the HeaderSection Entities
  Standard_EXPORT virtual   Standard_Integer TypeNumber (const Handle(Standard_Type)& atype)  const;
  
  Standard_EXPORT virtual   Standard_CString SchemaName()  const;




  DEFINE_STANDARD_RTTI(HeaderSection_Protocol)

protected:




private: 




};







#endif // _HeaderSection_Protocol_HeaderFile
