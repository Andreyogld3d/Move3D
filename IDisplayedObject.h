//
// Move3D Engine
//
// Copyright (C) 2017, by Andrey Geets (geecandrey.@gmail.com)
//
// Move3DEngine SDK
// Copyright (C) 2017, by Andrey Geets (geecandrey.@gmail.com), Sergey Serb l-proger@yandex.ru
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

#ifndef __IDISPLAYEDOBJECT_H__
#define __IDISPLAYEDOBJECT_H__

struct IMaterial;

struct IDisplayedObject {
	//
	virtual const char* GetObjectName() const = 0;
	//
	virtual IMaterial* GetObjectMaterial() const = 0;
	//
	virtual void SetPosition(float x, float y, float z) = 0;
	//
	virtual const float* GetObjectPosition() = 0;
	//
	virtual void Scale(float scaleValue) = 0;
	//
	virtual float GetScale() const = 0;
	// rotate object around 0X axis by given angle in radian
	virtual void RotateX(float angle) = 0;
	// rotate object around 0Y axis by given angle in radian
	virtual void RotateY(float angle) = 0;
	// rotate object around 0Z axis by given angle in radian
	virtual void RotateZ(float angle) = 0;
};

#endif // __IDISPLAYEDOBJECT_H__
