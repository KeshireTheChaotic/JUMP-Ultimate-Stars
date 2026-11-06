
/* JUS-SDK MI_SendGXCommand [behavioral] DMA to the GX FIFO 0x04000400 with control 0x84400000
   (32-bit, destination fixed) in 0x1D8-byte chunks */

void MI_SendGXCommand(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  MIi_CheckDma9();
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  for (; param_3 != 0; param_3 = param_3 - uVar1) {
    if (param_3 < 0x1d9) {
      uVar1 = param_3;
    }
    else {
      uVar1 = 0x1d8;
    }
    MIi_DmaSetParams(param_1,param_2,0x4000400,uVar1 >> 2 | 0x84400000);
    param_2 = param_2 + uVar1;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  return;
}

