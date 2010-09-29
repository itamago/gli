///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Image Copyright (c) 2008 - 2010 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2008-12-19
// Updated : 2010-09-08
// Licence : This source is under MIT License
// File    : gli/core/size.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace gli
{
	inline texture::size_type size
	(
		image const & Mipmap,
		size_type const & SizeType
	)
	{
		switch(SizeType)
		{
		case LINEAR_SIZE:
			return detail::sizeLinear(Mipmap);
		case BLOCK_SIZE:
			return detail::sizeBlock(Mipmap);
		case BIT_PER_PIXEL:
			return detail::sizeBitPerPixel(Mipmap);
		case COMPONENT:
			return detail::sizeComponent(Mipmap);
		default:
			assert(0);
			return 0;
		};
	}

	inline texture::size_type size
	(
		texture const & Image,
		size_type const & SizeType
	)
	{
		switch(SizeType)
		{
		case LINEAR_SIZE:
			return detail::sizeLinear(Image);
		case BLOCK_SIZE:
			return detail::sizeBlock(Image);
		case BIT_PER_PIXEL:
			return detail::sizeBitPerPixel(Image);
		case COMPONENT:
			return detail::sizeComponent(Image);
		default:
			assert(0);
			return 0;
		};
	}

}//namespace
