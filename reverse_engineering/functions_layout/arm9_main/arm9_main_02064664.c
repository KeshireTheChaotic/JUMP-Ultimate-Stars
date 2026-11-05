
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02064664(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((*param_2 == '/') || (*param_2 == '\\')) {
    local_24 = DAT_020afb14;
    local_1c = 0;
    local_20 = 0;
    param_2 = param_2 + 1;
  }
  else {
    local_24 = DAT_020afb14;
    local_20 = _DAT_020afb18;
    local_1c = DAT_020afb1c;
    iVar3 = 0;
    do {
      cVar1 = param_2[iVar3];
      if (((cVar1 == '\0') || (cVar1 == '/')) || (cVar1 == '\\')) break;
      if (cVar1 == ':') {
        local_24 = FUN_02063f94(param_2,iVar3);
        if (local_24 == 0) {
          return 0;
        }
        if ((*(uint *)(local_24 + 0x1c) & 2) == 0) {
          return 0;
        }
        local_1c = 0;
        local_20 = 0;
        param_2 = param_2 + iVar3 + 1;
        if ((*param_2 == '/') || (*param_2 == '\\')) {
          param_2 = param_2 + 1;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  *(int *)(param_1 + 8) = local_24;
  *(char **)(param_1 + 0x3c) = param_2;
  *(int *)(param_1 + 0x30) = local_24;
  *(undefined4 *)(param_1 + 0x34) = local_20;
  *(undefined4 *)(param_1 + 0x38) = local_1c;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(int *)(param_1 + 0x44) = param_4;
  }
  uVar2 = FUN_02063fe8(param_1,4);
  return uVar2;
}

