// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_StreamUnknownTypeError_HeaderFile
#define _Storage_StreamUnknownTypeError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Storage_StreamReadError.hxx>
#include <Handle_Storage_StreamUnknownTypeError.hxx>

#if !defined No_Exception && !defined No_Storage_StreamUnknownTypeError
  #define Storage_StreamUnknownTypeError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Storage_StreamUnknownTypeError::Raise(MESSAGE);
#else
  #define Storage_StreamUnknownTypeError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Storage_StreamUnknownTypeError, Storage_StreamReadError)

#endif // _Storage_StreamUnknownTypeError_HeaderFile
