
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0204f8d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"MATH_DIVSQRT":8}
                       io=["04000280","04000290","04000294","04000298","0400029c","040002b0","040002b8","040002bc"]
                        */
  uVar1 = _DAT_04000294;
  *param_1 = _DAT_04000290;
  param_1[1] = uVar1;
  uVar1 = _DAT_0400029c;
  param_1[2] = _DAT_04000298;
  param_1[3] = uVar1;
  *(ushort *)(param_1 + 6) = _DAT_04000280 & 3;
  uVar1 = _DAT_040002bc;
  param_1[4] = _DAT_040002b8;
  param_1[5] = uVar1;
  *(ushort *)((int)param_1 + 0x1a) = _DAT_040002b0 & 1;
  return;
}

