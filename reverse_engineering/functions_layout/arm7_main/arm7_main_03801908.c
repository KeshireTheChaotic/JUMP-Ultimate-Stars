
void FUN_03801908(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = *param_1 & 0xfb;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  param_1[0x18] = 0x78;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 1;
  param_1[0x1c] = 0xf0;
  param_1[0x1d] = 0;
  param_1[5] = 0x7f;
  iVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0x40;
  do {
    param_1[iVar1 + 8] = 0xff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  if (DAT_03808aa4 != 0) {
    iVar1 = 0;
    *(undefined4 *)((uint)param_1[1] * 0x24 + DAT_03808aa4 + 0x40) = 0;
    do {
      *(undefined2 *)((uint)param_1[1] * 0x24 + DAT_03808aa4 + iVar1 * 2 + 0x20) = 0xffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
  }
  return;
}

