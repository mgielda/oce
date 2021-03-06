// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Intersector_HeaderFile
#define _HLRBRep_Intersector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <IntRes2d_IntersectionPoint.hxx>
#include <Standard_Integer.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <Standard_Address.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class StdFail_UndefinedDerivative;
class gp_Lin;
class IntRes2d_IntersectionPoint;
class IntCurveSurface_IntersectionPoint;
class IntRes2d_IntersectionSegment;
class IntCurveSurface_IntersectionSegment;


//! The Intersector  computes 2D  intersections of the
//! projections of 3D curves.
//!
//! It can also computes the intersection of a 3D line
//! and a surface.
class HLRBRep_Intersector 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_Intersector();
  
  //! Performs the auto  intersection  of  an edge. The
  //! edge domain is cutted at start with da1*(b-a) and
  //! at end with db1*(b-a).
  Standard_EXPORT   void Perform (const Standard_Address A1, const Standard_Real da1, const Standard_Real db1) ;
  
  //! Performs the  intersection between the two edges.
  //! The  edges  domains  are  cutted  at  start  with
  //! da*(b-a) and at end with db*(b-a).
  Standard_EXPORT   void Perform (const Standard_Integer nA, const Standard_Address A1, const Standard_Real da1, const Standard_Real db1, const Standard_Integer nB, const Standard_Address A2, const Standard_Real da2, const Standard_Real db2, const Standard_Boolean NoBound) ;
  
  //! Create a single IntersectionPoint (U on A1) (V on A2)
  //! The point is middle on both curves.
  Standard_EXPORT   void SimulateOnePoint (const Standard_Address A1, const Standard_Real U, const Standard_Address A2, const Standard_Real V) ;
  
  Standard_EXPORT   void Load (Standard_Address& A) ;
  
  Standard_EXPORT   void Perform (const gp_Lin& L, const Standard_Real P) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  Standard_EXPORT  const  IntRes2d_IntersectionPoint& Point (const Standard_Integer N)  const;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionPoint& CSPoint (const Standard_Integer N)  const;
  
  Standard_EXPORT   Standard_Integer NbSegments()  const;
  
  Standard_EXPORT  const  IntRes2d_IntersectionSegment& Segment (const Standard_Integer N)  const;
  
  Standard_EXPORT  const  IntCurveSurface_IntersectionSegment& CSSegment (const Standard_Integer N)  const;
  
  Standard_EXPORT   void Destroy() ;
~HLRBRep_Intersector()
{
  Destroy();
}




protected:





private:



  IntRes2d_IntersectionPoint mySinglePoint;
  Standard_Integer myTypePerform;
  HLRBRep_CInter myIntersector;
  HLRBRep_InterCSurf myCSIntersector;
  Standard_Address mySurface;
  Standard_Address myPolyhedron;


};







#endif // _HLRBRep_Intersector_HeaderFile
