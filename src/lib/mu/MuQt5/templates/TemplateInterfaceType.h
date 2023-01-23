//*****************************************************************************
// Copyright (c) 2019 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

#ifndef __MuQt5__$TType__h__
#define __MuQt5__$TType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/Interface.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class $TType : public Interface
{
  public:
    //
    //  Constructors
    //

    typedef $T ValueType;

    struct Struct
    {
        $T* object;
    };


    $TType(Context* context, const char* name);
    virtual ~$TType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__$TType__h__