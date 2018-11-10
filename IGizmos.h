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

#ifndef __IGIZMOS_H__
#define __IGIZMOS_H__

struct vec3 {
	float x;
	float y;
	float z;
};

struct Matrix {
	union {
		float matrix[16];
		struct {
			float x[3];
			float wx;
			float y[3];
			float wy;
			float z[3];
			float wz;
		};
		struct {
			float _11, _12, _13, _14;
			float _21, _22, _23, _24;
			float _31, _32, _33, _34;
			float _41, _42, _43, _44;
		};
		struct {
			float m[4][4];
		};
	};
};

// The debug drawing interface
struct IGizmos {
	typedef unsigned int uint;
	// Draw line with two points
	virtual void DrawLine(const vec3& from, const vec3& to) = 0;
	// Draw Triangle
	virtual void DrawTriangle(const vec3& v0, const vec3& v1, const vec3& v2) = 0;
	// Drawing od polyline
	virtual void DrawPolyLine(const vec3* points, size_t size) = 0;
	// Set Current color RGBA
	virtual void SetColor(uint color) = 0;
	// Set transformation matrix
	virtual void SetMatrix(const Matrix& transform) = 0;
	// Get Current Tranbsformation Matrix
	virtual const Matrix& GetMatrix() const = 0;
};

#endif // __IGIZMOS_H__
