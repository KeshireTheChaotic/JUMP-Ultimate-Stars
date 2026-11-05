
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02060acc(undefined2 *param_1,uint param_2,uint param_3,uint param_4,ushort param_5,
            ushort param_6,ushort param_7,ushort param_8,ushort param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"MATH_DIVSQRT":5}
                       io=["04000280","04000290","04000298","0400029c","040002a0"] */
  if ((((0xfff < param_2) || (0xfff < param_3)) || (0xfff < param_6)) || (0xfff < param_7)) {
    return 1;
  }
  if (((0xff < param_4) || (0xff < param_8)) || ((0xbf < param_5 || (0xbf < param_9)))) {
    return 1;
  }
  if (((param_4 == param_8) || (param_5 == param_9)) ||
     ((param_2 == param_6 || (param_3 == param_7)))) {
    return 1;
  }
  uVar1 = OS_DisableInterrupts();
  _DAT_04000298 = (uint)param_5 - (uint)param_9;
  _DAT_04000280 = 0;
  _DAT_04000290 = (param_3 - param_7) * 0x100;
  _DAT_0400029c = 0;
  if ((0x7fff < _DAT_040002a0) || (_DAT_040002a0 < -0x8000)) {
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  param_1[2] = (short)_DAT_040002a0;
  iVar2 = ((param_2 + param_6) * 0x100 - (param_4 + param_8) * (int)(short)param_1[2]) * 0x200;
  iVar3 = iVar2 >> 0x10;
  if ((0x7fff < iVar3) || (iVar3 < -0x8000)) {
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  *param_1 = (short)((uint)iVar2 >> 0x10);
  iVar2 = _DAT_040002a0;
  do {
  } while ((_DAT_04000280 & 0x8000) != 0);
  OS_RestoreInterrupts(uVar1);
  if ((0x7fff < iVar2) || (iVar2 < -0x8000)) {
    return 1;
  }
  param_1[3] = (short)iVar2;
  iVar2 = ((param_3 + param_7) * 0x100 - ((uint)param_5 + (uint)param_9) * (int)(short)param_1[3]) *
          0x200;
  iVar3 = iVar2 >> 0x10;
  if ((iVar3 < 0x8000) && (-0x8001 < iVar3)) {
    param_1[1] = (short)((uint)iVar2 >> 0x10);
    return 0;
  }
  return 1;
}

