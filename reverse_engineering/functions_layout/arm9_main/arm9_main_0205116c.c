
/* JUS-SDK MIi_CheckDma9 [behavioral] dir 0 / 0x800000 (source decrement) range end; panics if the
   range touches I/O or cartridge space */

void MIi_CheckDma9(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_1 != 0) {
    return;
  }
  uVar1 = param_2 & 0xff000000;
  if (param_4 == 0) {
    param_2 = param_2 + param_3;
  }
  else if (param_4 == 0x800000) {
    param_2 = param_2 - param_3;
  }
  if ((((uVar1 == 0x4000000) || (0x7ffffff < uVar1)) || ((param_2 & 0xff000000) == 0x4000000)) ||
     (0x7ffffff < (param_2 & 0xff000000))) {
    FUN_02055684();
    return;
  }
  return;
}

