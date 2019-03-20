// { dg-options "-std=gnu++0x" }
// { dg-do compile }

// Copyright (C) 2007 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this library; see the file COPYING.  If not, write to
// the Free Software Foundation, 51 Franklin Street, Fifth Floor,
// Boston, MA 02110-1301, USA.

#include <functional>
#include <string>

// Verify that we can instantiate hash for every required type.
template class std::hash<bool>;
template class std::hash<char>;
template class std::hash<signed char>;
template class std::hash<unsigned char>;
template class std::hash<short>;
template class std::hash<int>;
template class std::hash<long>;
template class std::hash<unsigned short>;
template class std::hash<unsigned int>;
template class std::hash<unsigned long>;
template class std::hash<float>;
template class std::hash<double>;
template class std::hash<long double>;
template class std::hash<void*>;
template class std::hash<std::string>;

#ifdef _GLIBCXX_USE_WCHAR_T
template class std::hash<wchar_t>;
template class std::hash<std::wstring>;
#endif

