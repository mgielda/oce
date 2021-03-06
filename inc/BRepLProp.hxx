// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLProp_HeaderFile
#define _BRepLProp_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <GeomAbs_Shape.hxx>
#include <Standard_Real.hxx>
class BRepAdaptor_Curve;
class BRepLProp_CurveTool;
class BRepLProp_SurfaceTool;
class BRepLProp_CLProps;
class BRepLProp_SLProps;


//! These global functions compute the degree of
//! continuity of a curve built by concatenation of two
//! edges at their junction point.
class BRepLProp 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the regularity at the junction between C1 and
  //! C2. The point u1 on C1 and the point u2 on  C2 must be
  //! confused.   tl  and ta  are  the  linear  and  angular
  //! tolerance used two compare the derivative.
  Standard_EXPORT static   GeomAbs_Shape Continuity (const BRepAdaptor_Curve& C1, const BRepAdaptor_Curve& C2, const Standard_Real u1, const Standard_Real u2, const Standard_Real tl, const Standard_Real ta) ;
  
  //! The  same  as  preciding   but   using  the   standard
  //! tolerances from package Precision.
  Standard_EXPORT static   GeomAbs_Shape Continuity (const BRepAdaptor_Curve& C1, const BRepAdaptor_Curve& C2, const Standard_Real u1, const Standard_Real u2) ;




protected:





private:




friend class BRepLProp_CurveTool;
friend class BRepLProp_SurfaceTool;
friend class BRepLProp_CLProps;
friend class BRepLProp_SLProps;

};







#endif // _BRepLProp_HeaderFile
