# Licence of Jus.Video.Vx

This project is a C# port of the Actimagine VX video decoder by Florian Nouwt, posted to
FFmpeg-devel as "[PATCH v3] avcodec: add Actimagine VX video decoder" (March 2021,
libavcodec/actimagine_vx.c, actimagine_vx_data.c, h264_cavlc_data.c), with the H.264 4x4
intra prediction and inverse transform it calls (libavcodec/h264pred_template.c,
h264idct_template.c).

Like the original, this project is licensed under the **GNU Lesser General Public License,
version 2.1 or (at your option) any later version**. See
<https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html>.

It is kept as a separate assembly (`Jus.Video.Vx.dll`) so the rest of the port is not a
derivative of it; the game only uses its public `VxFile` / `VxDecoder` API.

Original notice:

    Actimagine VX Video decoder
    Copyright (c) 2021 Florian Nouwt

    This file is part of FFmpeg.

    FFmpeg is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    FFmpeg is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
