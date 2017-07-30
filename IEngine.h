//
// Move3D Engine
//
// Copyright (C) 2017, by Andrey Geets (geecandrey@gmail.com)
//
// Move3DEngine SDK
// Copyright (C) 2017, by Andrey Geets (geecandrey@gmail.com), Sergey Serb l-proger@yandex.ru
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

#ifndef __IENGINE_H__
#define __IENGINE_H__

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

struct UserCallback;
struct IUserCallback;

struct IEngine {
	virtual void SetUserCallback(UserCallback* usrCallback) = 0;
	virtual void SetUserCallback(IUserCallback* usrCallback) = 0;
#ifdef _WIN32
	virtual bool Run(int argc = 0, char** argv = NULL, HWND hWnd = NULL, bool isEditor = false, IUserCallback* userCallback = NULL) = 0;
#endif
	static IEngine* GetEngine();
};

#endif // __IENGINE_H__

