
int FUN_02192b80(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                uint param_6)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  undefined4 local_1c [2];
  
  local_24 = 0;
  local_28 = *(int *)(*(int *)(*(int *)(param_1 + 0x68) + 0x10c) + 0x48);
  if (*(char *)(param_1 + 0x73) == '\x01') {
    if (local_28 + -0x2a < param_3) {
      return -0x23;
    }
    local_28 = param_3;
  }
  else {
    local_28 = local_28 + -0x36;
    if (param_3 <= local_28) {
      local_28 = param_3;
    }
  }
  if (0 < param_3) {
    do {
      iVar1 = FUN_02192b10(param_1,param_3,local_28,local_1c,param_6);
      if (0 < iVar1) {
        iVar2 = FUN_021929c4(param_1,param_2,iVar1,local_1c[0],param_4,param_5,param_6);
        if (iVar2 < 1) {
          return -6;
        }
        param_2 = param_2 + iVar1;
        param_3 = param_3 - iVar1;
        local_24 = local_24 + iVar1;
      }
      if ((param_6 & 1) == 0) {
        if (iVar1 < 1) {
          return -6;
        }
        return local_24;
      }
    } while (0 < param_3);
  }
  return local_24;
}

