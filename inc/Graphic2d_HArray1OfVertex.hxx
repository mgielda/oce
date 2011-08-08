// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_HArray1OfVertex_HeaderFile
#define _Graphic2d_HArray1OfVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_HArray1OfVertex_HeaderFile
#include <Handle_Graphic2d_HArray1OfVertex.hxx>
#endif

#ifndef _Graphic2d_Array1OfVertex_HeaderFile
#include <Graphic2d_Array1OfVertex.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Graphic2d_Vertex;
class Graphic2d_Array1OfVertex;



class Graphic2d_HArray1OfVertex : public MMgt_TShared {

public:

  
  Standard_EXPORT   Graphic2d_HArray1OfVertex(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Graphic2d_HArray1OfVertex(const Standard_Integer Low,const Standard_Integer Up,const Graphic2d_Vertex& V);
  
  Standard_EXPORT     void Init(const Graphic2d_Vertex& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Graphic2d_Vertex& Value) ;
  
       const Graphic2d_Vertex& Value(const Standard_Integer Index) const;
  
        Graphic2d_Vertex& ChangeValue(const Standard_Integer Index) ;
  
       const Graphic2d_Array1OfVertex& Array1() const;
  
        Graphic2d_Array1OfVertex& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Graphic2d_HArray1OfVertex)

protected:




private: 


Graphic2d_Array1OfVertex myArray;


};

#define ItemHArray1 Graphic2d_Vertex
#define ItemHArray1_hxx <Graphic2d_Vertex.hxx>
#define TheArray1 Graphic2d_Array1OfVertex
#define TheArray1_hxx <Graphic2d_Array1OfVertex.hxx>
#define TCollection_HArray1 Graphic2d_HArray1OfVertex
#define TCollection_HArray1_hxx <Graphic2d_HArray1OfVertex.hxx>
#define Handle_TCollection_HArray1 Handle_Graphic2d_HArray1OfVertex
#define TCollection_HArray1_Type_() Graphic2d_HArray1OfVertex_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif