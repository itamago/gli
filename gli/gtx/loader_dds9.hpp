///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Image Copyright (c) 2008 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2010-09-08
// Updated : 2010-09-27
// Licence : This source is under MIT License
// File    : gli/gtx/loader_dds9.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef GLI_GTX_LOADER_DDS9_INCLUDED
#define GLI_GTX_LOADER_DDS9_INCLUDED

#include "../gli.hpp"

namespace gli{
namespace gtx{
namespace loader_dds9
{
	image loadDDS9(
		std::string const & Filename);

	void saveDDS9(
		image const & Image, 
		std::string const & Filename);

}//namespace loader_dds9
}//namespace gtx
}//namespace gli

#include "loader_dds9.inl"

#endif//GLI_GTX_LOADER_DDS9_INCLUDED