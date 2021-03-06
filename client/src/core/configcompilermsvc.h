// <osiris_sps_source_header>
// This file is part of Osiris Serverless Portal System.
// Copyright (C)2005-2012 Osiris Team (info@osiris-sps.org) / http://www.osiris-sps.org )
//
// Osiris Serverless Portal System is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Osiris Serverless Portal System is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Osiris Serverless Portal System.  If not, see <http://www.gnu.org/licenses/>.
// </osiris_sps_source_header>

#ifndef _OS_CORE_CONFIGCOMPILERMSVC_H
#define _OS_CORE_CONFIGCOMPILERMSVC_H

#include "configcompilermsvcwarnings.h"

//////////////////////////////////////////////////////////////////////

#if _MSC_VER >= 1400			// Visual Studio 2005
	#ifndef _CRT_SECURE_NO_DEPRECATE
		#define _CRT_SECURE_NO_DEPRECATE
	#endif

	#ifndef _SCL_SECURE_NO_DEPRECATE
		#define _SCL_SECURE_NO_DEPRECATE
	#endif
#endif

#if _MSC_VER >= 1600			// Visual Studio 2010
	#define OS_SUPPORT_CPP0X
#endif

#define OS_ENDIANITY						OS_ENDIANITY_LITTLE
#define OS_FORCEINLINE						__forceinline

//////////////////////////////////////////////////////////////////////

#endif // _OS_CORE_CONFIGCOMPILERMSVC_H
