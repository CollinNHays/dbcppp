/*
 * Copyright (C) 2013-2019 Tobias Lorenz.
 * Contact: tobias.lorenz@gmx.net
 *
 * This file was orginally part of Tobias Lorenz's Toolkit (https://bitbucket.org/tobylorenz/vector_dbc/src/master/).
 * Now it's part of the dbcppp (DBC C++ parser) program with some minor changes in this file.
 *
 * GNU General Public License 3.0 Usage
 * This file may be used under the terms of the GNU
 * General Public License version 3.0 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.  Please review the following information to
 * ensure the GNU General Public License version 3.0 requirements will be
 * met: http://www.gnu.org/copyleft/gpl.html.
 */

#pragma once

#include <Vector/DBC/platform.h>

#include <cstdint>
#include <ostream>

namespace Vector {
namespace DBC {

/**
 * Bit Timing (BS)
 */
class BitTiming
{
public:
    /** Baud rate */
    uint32_t baudrate;

    /** Bit Timing Register 1 */
    uint32_t btr1;

    /** Bit Timing Register 2 */
    uint32_t btr2;
};
}
}