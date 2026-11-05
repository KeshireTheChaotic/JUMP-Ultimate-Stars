
int FUN_02001cbc(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18;
  ushort local_14;
  ushort local_12;
  
  local_14 = (ushort)(param_2 != (undefined4 *)0x0);
  if (param_3 != (undefined4 *)0x0) {
    local_14 = local_14 | 8;
  }
  local_12 = 0;
  local_18 = param_1;
  iVar1 = func_0x0219350c(&local_18,1,0,0);
  if (iVar1 < 0) {
    return -1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((iVar1 < 1) || ((local_12 & 0x41) == 0)) {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    if ((iVar1 < 1) || ((local_12 & 8) == 0)) {
      *param_3 = 0;
    }
    else {
      *param_3 = 1;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    if ((0 < iVar1) && ((local_12 & 0x20) != 0)) {
      *param_4 = 1;
      return iVar1;
    }
    *param_4 = 0;
  }
  return iVar1;
}

