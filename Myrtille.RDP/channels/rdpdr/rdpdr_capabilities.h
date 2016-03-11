/*
   FreeRDP: A Remote Desktop Protocol client.
   Device Redirection Capabilities

   Copyright 2010 Marc-Andre Moreau <marcandre.moreau@gmail.com>

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

#ifndef __RDPDR_CAPABILITIES_H
#define __RDPDR_CAPABILITIES_H

int
rdpdr_out_general_capset(char* data, int size);
int
rdpdr_out_printer_capset(char* data, int size);
int
rdpdr_out_port_capset(char* data, int size);
int
rdpdr_out_drive_capset(char* data, int size);
int
rdpdr_out_smartcard_capset(char* data, int size);

int
rdpdr_process_general_capset(char* data, int size);
int
rdpdr_process_printer_capset(char* data, int size);
int
rdpdr_process_port_capset(char* data, int size);
int
rdpdr_process_drive_capset(char* data, int size);
int
rdpdr_process_smartcard_capset(char* data, int size);

void
rdpdr_process_capabilities(char* data, int size);

#endif /* __RDPDR_CAPABILITIES_H */
