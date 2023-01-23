//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QCloseEventType__h__
#define __MuQt5__QCloseEventType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QCloseEventType : public Class
{
  public:
    //
    //  Types
    //

    typedef QCloseEvent ValueType;

    struct Struct
    {
        QCloseEvent* object;
    };

    //
    //  Constructors
    //

    QCloseEventType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QCloseEventType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QCloseEventType__h__