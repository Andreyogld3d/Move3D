//
// Move3D Engine
//
// Copyright (C) 2017-2018, by Andrey Geets (geecandrey.@gmail.com)
//
// Move3DEngine SDK
// Copyright (C) 2017-2018, by Andrey Geets (geecandrey.@gmail.com), Sergey Serb l-proger@yandex.ru
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// 

#ifndef __ISCENE_H__
#define __ISCENE_H__

#include <cstddef>
#include <cassert>

struct IDisplayedObject;

struct IScene {
	//
	virtual size_t GetNumObjects() const = 0;
	//
	virtual IDisplayedObject* GetObjectByIndex(size_t index) = 0;
	//
	virtual IDisplayedObject* GetObjectByName(const char* objectName) const = 0;
	// 
	template<typename ContainerType>
	void GetObjects(ContainerType& objects)
	{
		size_t n = GetNumObjects();
		objects.reserve(n);
		for (size_t i = 0; i < n; ++i) {
			IDisplayedObject* obj = GetObjectByIndex(i);
						
			assert(obj && "NULL Pointer");
			
			objects.push_back(obj);
		}
	}
};

#endif // __ISCENE_H__
