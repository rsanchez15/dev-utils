// Copyright 2022 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file cast.ipp
 */

#pragma once

namespace eprosima {
namespace utils {

template <typename T>
void* cast_to_void_ptr(
        const T* c)
{
    return static_cast<void*>(const_cast<T*>(c));
}

template <typename T, typename U>
bool can_cast(
        const U& el)
{
    const T* _ptr = dynamic_cast<const T*>(&el);
    return _ptr;
}

} /* namespace utils */
} /* namespace eprosima */
