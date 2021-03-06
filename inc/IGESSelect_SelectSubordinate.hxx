// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectSubordinate_HeaderFile
#define _IGESSelect_SelectSubordinate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectSubordinate.hxx>

#include <Standard_Integer.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! This selections uses Subordinate Status as sort criterium
//! It is an integer number which can be :
//! 0 Independant
//! 1 Physically Dependant
//! 2 Logically Dependant
//! 3 Both (recorded)
//! + to sort :
//! 4 : 1 or 3  ->  at least Physically
//! 5 : 2 or 3  ->  at least Logically
//! 6 : 1 or 2 or 3 -> any kind of dependance
//! (corresponds to 0 reversed)
class IGESSelect_SelectSubordinate : public IFSelect_SelectExtract
{

public:

  
  //! Creates a SelectSubordinate with a status to be sorted
  Standard_EXPORT IGESSelect_SelectSubordinate(const Standard_Integer status);
  
  //! Returns the status used for sorting
  Standard_EXPORT   Standard_Integer Status()  const;
  
  //! Returns True if <ent> is an IGES Entity with Subordinate
  //! Status matching the criterium
  Standard_EXPORT   Standard_Boolean Sort (const Standard_Integer rank, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Returns the Selection criterium : "IGES Entity, Independant"
  //! etc...
  Standard_EXPORT   TCollection_AsciiString ExtractLabel()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectSubordinate)

protected:




private: 


  Standard_Integer thestatus;


};







#endif // _IGESSelect_SelectSubordinate_HeaderFile
