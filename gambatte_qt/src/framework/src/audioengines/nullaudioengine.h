//
//   Copyright (C) 2007 by sinamas <sinamas at users.sourceforge.net>
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License version 2 for more details.
//
//   You should have received a copy of the GNU General Public License
//   version 2 along with this program; if not, write to the
//   Free Software Foundation, Inc.,
//   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#ifndef NULLAUDIOENGINE_H
#define NULLAUDIOENGINE_H

#include "../audioengine.h"

class NullAudioEngine : public AudioEngine {
public:
	NullAudioEngine() : AudioEngine("Null") {}
	virtual int write(void */*buffer*/, std::size_t /*samples*/) { return 0; }

protected:
	virtual long doInit(long rate, int /*latency*/) { return rate; }
};

#endif
