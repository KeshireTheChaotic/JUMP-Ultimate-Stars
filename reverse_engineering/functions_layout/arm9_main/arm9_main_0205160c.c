
/* JUS-SDK MI_DmaCopy32 [behavioral] control 0x84000000 | size/4 (32-bit copy), waits */

void MI_DmaCopy32(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  MIi_CheckDma9(param_1,param_2,param_4,0);
  if (param_4 == 0) {
    return;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  MIi_DmaSetParams_wait(param_1,param_2,param_3,param_4 >> 2 | 0x84000000);
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  return;
}

