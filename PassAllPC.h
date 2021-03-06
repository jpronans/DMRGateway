/*
*   Copyright (C) 2017 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(PASSALLPC_H)
#define	PASSALLPC_H

#include "Rewrite.h"
#include "DMRData.h"

class CPassAllPC : public IRewrite {
public:
	CPassAllPC(const char* name, unsigned int slot);
	virtual ~CPassAllPC();

	virtual bool processRF(CDMRData& data);
	virtual bool processNet(CDMRData& data);

private:
	const char*  m_name;
	unsigned int m_slot;

	bool process(CDMRData& data);
};


#endif
