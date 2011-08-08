// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_MapIteratorOfMapOfSurfaceSample_HeaderFile
#define _IntTools_MapIteratorOfMapOfSurfaceSample_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_IntTools_StdMapNodeOfMapOfSurfaceSample_HeaderFile
#include <Handle_IntTools_StdMapNodeOfMapOfSurfaceSample.hxx>
#endif
class Standard_NoSuchObject;
class IntTools_SurfaceRangeSample;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_MapOfSurfaceSample;
class IntTools_StdMapNodeOfMapOfSurfaceSample;



class IntTools_MapIteratorOfMapOfSurfaceSample  : public TCollection_BasicMapIterator {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   IntTools_MapIteratorOfMapOfSurfaceSample();
  
  Standard_EXPORT   IntTools_MapIteratorOfMapOfSurfaceSample(const IntTools_MapOfSurfaceSample& aMap);
  
  Standard_EXPORT     void Initialize(const IntTools_MapOfSurfaceSample& aMap) ;
  
  Standard_EXPORT    const IntTools_SurfaceRangeSample& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif