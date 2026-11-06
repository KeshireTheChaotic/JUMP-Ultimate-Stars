
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02055588(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* JUS-TAG hw={"GX_3D":1,"GX_2D_main":1,"SYSTEM_SHARED":11,"KEYPAD":1}
                       io=["027ffc3c","027ffcf4","027ffcf8","027ffde8","027ffdec","027fff90","027fff94","027fff98","027fffa8","027fffaa","027fffac","04000006","04000130","04000600"]
                        */
  uVar2 = (uint)_DAT_04000006;
  uVar1 = OS_GetTickLo();
  *param_1 = uVar1 | uVar2 << 0x10;
  param_1[1] = DAT_020aae90 ^ (uint)_DAT_027ffcf8 << 0x10;
  param_1[2] = _DAT_027ffc3c ^ DAT_020aae94 ^ _DAT_027ffcf4;
  param_1[2] = param_1[2] ^ _DAT_04000600;
  param_1[3] = _DAT_027ffde8;
  param_1[4] = _DAT_027ffdec;
  param_1[5] = _DAT_027fff90 ^ (uint)_DAT_027fff94 << 0x10;
  param_1[6] = CONCAT22(_DAT_027fffaa,_DAT_027fffac);
  param_1[7] = CONCAT22(_DAT_027fff98,_DAT_04000130 | _DAT_027fffa8);
  return;
}

