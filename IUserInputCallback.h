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

#ifndef __IUSERINPUTCALLBACK_H__
#define __IUSERINPUTCALLBACK_H__

// The user input callback interface
struct IUserInputCallback {
	typedef unsigned int uint;
	// notification about key pressing, returns the pressed key
	virtual void NotifyKeyPressed(uint key) = 0;
	// notification about key releasing, returns the released key
	virtual void NotifyKeyReleased(uint key) = 0;
	// notification about mouse moving, returns the cursor position.
	virtual void NotifyMouseMoved(uint x, uint y) = 0;
	// notification about left mouse button pressed.
	virtual void NotifyLeftMouseButtonPressed() = 0;
	// notification about left mouse button pressed.
	virtual void NotifyRightMouseButtonPressed() = 0;
	// notification about touch to screen
	virtual void NotifyTouch(uint x, uint y) = 0;
	// notification about touch to screen
	virtual void NotifyTouch() = 0;
};

// default implementation
struct UserInputCallback : IUserInputCallback {
	// notification about key pressing, returns the pressed key
	virtual void NotifyKeyPressed(uint key) override
	{}
	// notification about key releasing, returns the released key
	virtual void NotifyKeyReleased(uint key) override
	{}
	// notification about mouse mouving, returns the cursor position.
	virtual void NotifyMouseMoved(uint x, uint y) override
	{}
	// notification about left mouse button pressed.
	virtual void NotifyLeftMouseButtonPressed() override
	{}
	// notification about right mouse button pressed.
	virtual void NotifyRightMouseButtonPressed() override
	{}
	// notification about touch to screen
	virtual void NotifyTouch(uint x, uint y) override
	{}
	// notification about touch to screen
	virtual void NotifyTouch() override
	{}
};

#endif // __IINPUTUSERCALLBACK_H__
