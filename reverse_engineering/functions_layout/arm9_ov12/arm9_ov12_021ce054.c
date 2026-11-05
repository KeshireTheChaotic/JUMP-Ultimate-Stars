
int FUN_021ce054(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int local_18;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  local_18 = 0;
  if ((param_2 == DAT_021d57a4) && (DAT_021d57a0 != 0)) {
    uVar2 = 0;
    if (DAT_021d57a0 != 0) {
      do {
        iVar1 = FUN_021ce124(param_1,param_2,uVar2,param_3);
        if (iVar1 == 1) {
          local_18 = 1;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_021d57a0);
    }
    if (local_18 == 0) {
      MIi_CpuClearFast(0,param_1,param_2);
    }
    else {
      uVar2 = uVar2 + 1;
      if (uVar2 == DAT_021d57a0) {
        local_18 = 1;
      }
      else if (uVar2 < DAT_021d57a0) {
        do {
          iVar1 = FUN_021ce124(&DAT_021d5974,param_2,uVar2,param_3);
          if (iVar1 == 1) {
            FUN_021cfe3c(param_1,&DAT_021d5974,param_1,param_2);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_021d57a0);
      }
    }
  }
  else {
    MIi_CpuClearFast(0,param_1,param_2);
    local_18 = 0;
  }
  if (DAT_021d5798 != 0) {
    FUN_021cfcec(param_1,param_2);
  }
  return local_18;
}

