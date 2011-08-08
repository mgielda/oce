// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_FileRecognizer_HeaderFile
#define _StepData_FileRecognizer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_FileRecognizer_HeaderFile
#include <Handle_StepData_FileRecognizer.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepData_FileRecognizer_HeaderFile
#include <Handle_StepData_FileRecognizer.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
class Standard_Transient;
class Standard_NoSuchObject;
class TCollection_AsciiString;



class StepData_FileRecognizer : public Standard_Transient {

public:

  
  Standard_EXPORT     Standard_Boolean Evaluate(const TCollection_AsciiString& akey,Handle(Standard_Transient)& res) ;
  
  Standard_EXPORT     Handle_Standard_Transient Result() const;
  
  Standard_EXPORT     void Add(const Handle(StepData_FileRecognizer)& reco) ;




  DEFINE_STANDARD_RTTI(StepData_FileRecognizer)

protected:

  
  Standard_EXPORT   StepData_FileRecognizer();
  
  Standard_EXPORT     void SetOK(const Handle(Standard_Transient)& aresult) ;
  
  Standard_EXPORT     void SetKO() ;
  
  Standard_EXPORT   virtual  void Eval(const TCollection_AsciiString& akey)  = 0;



private: 


Handle_Standard_Transient theres;
Standard_Boolean hasnext;
Handle_StepData_FileRecognizer thenext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif