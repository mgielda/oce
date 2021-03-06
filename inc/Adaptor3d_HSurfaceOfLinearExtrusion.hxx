// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor3d_HSurfaceOfLinearExtrusion_HeaderFile
#define _Adaptor3d_HSurfaceOfLinearExtrusion_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Adaptor3d_HSurfaceOfLinearExtrusion.hxx>

#include <Adaptor3d_SurfaceOfLinearExtrusion.hxx>
#include <Adaptor3d_HSurface.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor3d_SurfaceOfLinearExtrusion;
class Adaptor3d_Surface;



class Adaptor3d_HSurfaceOfLinearExtrusion : public Adaptor3d_HSurface
{

public:

  
  Standard_EXPORT Adaptor3d_HSurfaceOfLinearExtrusion();
  
  Standard_EXPORT Adaptor3d_HSurfaceOfLinearExtrusion(const Adaptor3d_SurfaceOfLinearExtrusion& S);
  
  Standard_EXPORT   void Set (const Adaptor3d_SurfaceOfLinearExtrusion& S) ;
  
  Standard_EXPORT  const  Adaptor3d_Surface& Surface()  const;
  
      Adaptor3d_SurfaceOfLinearExtrusion& ChangeSurface() ;




  DEFINE_STANDARD_RTTI(Adaptor3d_HSurfaceOfLinearExtrusion)

protected:


  Adaptor3d_SurfaceOfLinearExtrusion mySurf;


private: 




};

#define TheSurface Adaptor3d_SurfaceOfLinearExtrusion
#define TheSurface_hxx <Adaptor3d_SurfaceOfLinearExtrusion.hxx>
#define Adaptor3d_GenHSurface Adaptor3d_HSurfaceOfLinearExtrusion
#define Adaptor3d_GenHSurface_hxx <Adaptor3d_HSurfaceOfLinearExtrusion.hxx>
#define Handle_Adaptor3d_GenHSurface Handle_Adaptor3d_HSurfaceOfLinearExtrusion
#define Adaptor3d_GenHSurface_Type_() Adaptor3d_HSurfaceOfLinearExtrusion_Type_()

#include <Adaptor3d_GenHSurface.lxx>

#undef TheSurface
#undef TheSurface_hxx
#undef Adaptor3d_GenHSurface
#undef Adaptor3d_GenHSurface_hxx
#undef Handle_Adaptor3d_GenHSurface
#undef Adaptor3d_GenHSurface_Type_




#endif // _Adaptor3d_HSurfaceOfLinearExtrusion_HeaderFile
