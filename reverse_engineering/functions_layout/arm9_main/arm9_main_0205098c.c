
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205098c(uint *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
                    /* JUS-TAG hw={"MATH_DIVSQRT":11}
                       io=["04000280","04000290","04000294","04000298","0400029c","040002a0","040002a4","040002b0","040002b4","040002b8","040002bc"]
                        */
  _DAT_04000298 =
       (longlong)(int)param_1[2] * (longlong)(int)param_1[2] +
       (longlong)(int)*param_1 * (longlong)(int)*param_1 +
       (longlong)(int)param_1[1] * (longlong)(int)param_1[1];
  _DAT_04000280 = 2;
  _DAT_04000290 = 0;
  _DAT_04000294 = 0x1000000;
  _DAT_040002b0 = 1;
  _DAT_040002b8 = _DAT_04000298 * 4;
  uVar4 = *param_1;
  uVar1 = (ulonglong)_DAT_040002b4 * (ulonglong)_DAT_040002a0;
  iVar3 = (int)uVar1;
  iVar2 = _DAT_040002a4 * _DAT_040002b4 +
          _DAT_040002a0 * ((int)_DAT_040002b4 >> 0x1f) + (int)(uVar1 >> 0x20);
  *param_2 = (int)(iVar2 * uVar4 +
                   iVar3 * ((int)uVar4 >> 0x1f) +
                   (int)((ulonglong)uVar4 * (uVar1 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd;
  uVar4 = param_1[1];
  param_2[1] = (int)(iVar2 * uVar4 +
                     iVar3 * ((int)uVar4 >> 0x1f) +
                     (int)((ulonglong)uVar4 * (uVar1 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd;
  uVar4 = param_1[2];
  param_2[2] = (int)(iVar2 * uVar4 +
                     iVar3 * ((int)uVar4 >> 0x1f) +
                     (int)((ulonglong)uVar4 * (uVar1 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd;
  return;
}

