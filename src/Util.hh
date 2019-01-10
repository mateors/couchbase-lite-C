//
// Util.hh
//
// Copyright © 2018 Couchbase. All rights reserved.
//

#pragma once
#include "CBLBase.h"
#include "fleece/FLSlice.h"
#include <string>

namespace cbl_internal {

    /** Like sprintf(), but returns a std::string */
    std::string format(const char *fmt _cblnonnull, ...) __printflike(1, 2);

    /** Like vsprintf(), but returns a std::string */
    std::string vformat(const char *fmt _cblnonnull, va_list);

    char* allocCString(FLSliceResult result);
}