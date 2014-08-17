/* <bruce/input_dg/any_partition/v0/v0_input_dg_constants.h>

   ----------------------------------------------------------------------------
   Copyright 2013-2014 Tagged

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
   ----------------------------------------------------------------------------

   Constants related to version 0 of AnyPartition input datagram format.
 */

#pragma once

namespace Bruce {

  namespace InputDg {

    namespace AnyPartition {

      namespace V0 {

        enum { FLAGS_FIELD_SIZE = 2 };

        enum { TOPIC_SZ_FIELD_SIZE = 1 };

        enum { TS_FIELD_SIZE = 8 };

        enum { KEY_SZ_FIELD_SIZE = 4 };

        enum { VALUE_SZ_FIELD_SIZE = 4 };

      }  // V0

    }  // AnyPartition

  }  // InputDg

}  // Bruce