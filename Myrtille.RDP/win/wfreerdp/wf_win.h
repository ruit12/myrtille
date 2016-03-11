/*
   FreeRDP: A Remote Desktop Protocol client.

   Copyright (c) 2009-2011 Jay Sorg
   Copyright (c) 2010-2011 Vic Lee

   Myrtille: A native HTML4/5 Remote Desktop Protocol client.

   Copyright (c) 2014-2016 Cedric Coste

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __WF_WIN_H
#define __WF_WIN_H

#include "wf_types.h"
#include <string>

int
wf_pre_connect(wfInfo * wfif);
int
wf_post_connect(wfInfo * wfi);
void
wf_toggle_fullscreen(wfInfo * wfi);
void
wf_uninit(wfInfo * wfi);

#pragma region Myrtille
std::string createLogDirectory();
DWORD wf_connect_pipes(wfInfo * wfi);
#pragma endregion

#endif
