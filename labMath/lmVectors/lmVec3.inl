#include "lmVec3.h"

inline
lmVec3::lmVec3()
{

}

inline
lmVec3::lmVec3(float a_fX ,float a_fY ,float a_fZ)
	: x(a_fX),y(a_fY),z(a_fZ)
{

}

inline
lmVec3::lmVec3(const lmVec3& ac_rkArgIn)
	:x(ac_rkArgIn.x),y(ac_rkArgIn.y),z(ac_rkArgIn.z)
{

}

inline
lmVec3::lmVec3(float* a_pfArgL)
	:x(a_pfArgL[0]),y(a_pfArgL[1]),z(a_pfArgL[2])
{

}

inline
lmVec3::~lmVec3()
{

}

inline
void lmVec3::Set(float a_fX,float a_fY,float a_fZ)
{
	x = a_fX;
	y = a_fY;
	z = a_fZ;
}

inline
lmVec3& lmVec3::operator = (const lmVec3& ac_pkArgL)
{
	x = ac_pkArgL.x;
	y = ac_pkArgL.y;
	z = ac_pkArgL.z;
	return (*this);
}

inline
lmVec3& lmVec3::operator = (float* a_pfArgL)
{
	x = a_pfArgL[0];
	y = a_pfArgL[1];
	z = a_pfArgL[2];
	return (*this);
}

inline
lmVec3& lmVec3::operator = (const float* a_pfArgL)
{
	x = a_pfArgL[0];
	y = a_pfArgL[1];
	z = a_pfArgL[2];
	return (*this);
}

inline
lmVec3 lmVec3::operator + (const lmVec3& ac_rkArgL) const
{
	lmVec3 rkRetVec3;
	lmVec3Add(rkRetVec3,(*this),ac_rkArgL);
	return rkRetVec3;
}

inline
lmVec3 lmVec3::operator - (const lmVec3& ac_rkArgL) const
{
	lmVec3 rkRetVec3;
	lmVec3Sub(rkRetVec3,(*this),ac_rkArgL);
	return rkRetVec3;
}

inline
lmVec3& lmVec3::operator += (const lmVec3& ac_rkArgL)
{
	lmVec3Add((*this),(*this),ac_rkArgL);
	return (*this);
}

inline
lmVec3& lmVec3::operator -= (const lmVec3& ac_rkArgL)
{
	lmVec3Sub((*this),(*this),ac_rkArgL);
	return (*this);
}

inline
lmVec3 lmVec3::operator * (const float ac_fArg0) const
{
	lmVec3 rkRetVec3;
	lmVec3Mul(rkRetVec3,(*this),ac_fArg0);
	return rkRetVec3;
}

inline
lmVec3 lmVec3::operator / (const float ac_fArg0) const
{
	lmVec3 rkRetVec3;
	lmVec3Div(rkRetVec3,(*this),ac_fArg0);
	return rkRetVec3;
}

inline
lmVec3& lmVec3::operator *= (const float ac_fArg0)
{
	lmVec3Mul((*this),(*this),ac_fArg0);
	return (*this);
}

inline
lmVec3& lmVec3::operator /= (const float ac_fArg0)
{
	lmVec3Div((*this),(*this),ac_fArg0);
	return (*this);
}

inline
lmVec3 lmVec3::operator - ()
{
	lmVec3 rkRetVec3;
	lmVec3Negative(rkRetVec3,(*this));
	return rkRetVec3;
}

inline
float& lmVec3::operator [] (unsigned int a_uiIndex)
{
	return v[a_uiIndex];
}

inline
const float& lmVec3::operator [] (unsigned int a_uiIndex) const
{
	return v[a_uiIndex];
}

inline
bool lmVec3::operator == (const lmVec3& ac_rkArgL) const
{
	return lmVec3Equals((*this),ac_rkArgL);
}

inline
bool lmVec3::operator != (const lmVec3& ac_rkArgL) const
{
	return lmVec3NotEquals((*this),ac_rkArgL);
}

inline
lmVec3::operator const float *() const
{
	return (const float*)v;
}

inline 
lmVec3::operator float *()
{
	return v;
}

inline
float lmVec3::Length() const
{
	return lmVec3Length((*this));
}

inline
float lmVec3::LengthSqr() const
{
	return lmVec3LengthSqr((*this));
}

inline
void lmVec3::Normalise()
{
	lmVec3Normalise((*this),(*this));
}

inline
void lmVec3::Maximize()
{
	lmVec3Maximise((*this),(*this));
}

inline
void lmVec3::Minimize()
{
	lmVec3Minimise((*this),(*this));
}

inline
float lmVec3::DotProduct(const lmVec3& ac_rkArgL) const
{
	return lmVec3DotProduct((*this),ac_rkArgL);
}

inline
lmVec3 lmVec3::CrossProduct(const lmVec3& ac_rkArgL) const
{
	lmVec3 kRetVec;
	lmVec3CrossProduct(kRetVec,(*this),ac_rkArgL);
	return kRetVec;
}