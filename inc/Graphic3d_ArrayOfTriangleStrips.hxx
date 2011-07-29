// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfTriangleStrips_HeaderFile
#define _Graphic3d_ArrayOfTriangleStrips_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfTriangleStrips_HeaderFile
#include <Handle_Graphic3d_ArrayOfTriangleStrips.hxx>
#endif

#ifndef _Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class Graphic3d_ArrayOfTriangleStrips : public Graphic3d_ArrayOfPrimitives {

public:

  //! Creates an array of triangle strips, <br>
//! a polygon can be filled as: <br>
//! 1) creating a single strip defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfTriangleStrips(7) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 2) creating separate strips defined with a predefined <br>
//!    number of strips and the number of vertex per strip. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfTriangleStrips(8,2) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!      .... <br>
//!    myArray->AddVertex(x8,y8,z8) <br>
  Standard_EXPORT   Graphic3d_ArrayOfTriangleStrips(const Standard_Integer maxVertexs,const Standard_Integer maxStrips = 0,const Standard_Boolean hasVNormals = Standard_False,const Standard_Boolean hasVColors = Standard_False,const Standard_Boolean hasSColors = Standard_False,const Standard_Boolean hasTexels = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfTriangleStrips)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif