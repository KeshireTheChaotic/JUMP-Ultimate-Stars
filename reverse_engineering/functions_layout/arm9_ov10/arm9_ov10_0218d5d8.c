
void FUN_0218d5d8(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  int local_134;
  int local_130;
  int local_12c;
  int local_120;
  undefined1 local_11c;
  undefined1 uStack_11b;
  byte local_118 [256];
  int local_18;
  
  local_18 = 0;
  if (param_4 == 0) {
    return;
  }
  if (param_3 - 1U < 2) {
    if (0x800U - *(int *)(param_2 + 0x800) < 2) {
      return;
    }
    local_130 = (**(code **)(param_1 + 0x98))(param_3,*(undefined4 *)(param_1 + 0x10c));
    piVar2 = (int *)(param_2 + 0x800);
    iVar4 = *piVar2;
    local_11c = (undefined1)((uint)local_130 >> 8);
    *(undefined1 *)(param_2 + iVar4) = local_11c;
    uStack_11b = (undefined1)local_130;
    *(undefined1 *)(param_2 + iVar4 + 1) = uStack_11b;
    *piVar2 = *piVar2 + 2;
  }
  else {
    local_130 = 1;
  }
  local_134 = param_4;
  if (param_4 == 0xff) {
    (**(code **)(param_1 + 0x94))(param_3,local_118,*(undefined4 *)(param_1 + 0x10c));
    iVar4 = 0;
    if (0 < local_18) {
      pbVar5 = local_118;
      do {
        pcVar3 = (&PTR_DAT_021a6aa0)[*pbVar5];
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_unknown_021a68dc;
        }
        FUN_0218daf8(param_2,pcVar3);
        if ((param_3 == 0) &&
           (iVar1 = *(int *)(param_2 + 0x800),
           (**(code **)(param_1 + 0x88))(*pbVar5,param_2,*(undefined4 *)(param_1 + 0x10c)),
           iVar1 == *(int *)(param_2 + 0x800))) {
          FUN_0218daf8(param_2,&DAT_021a68e4);
        }
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_18);
    }
    iVar4 = *(int *)(param_2 + 0x800);
    if (0x800 - iVar4 < 1) {
      return;
    }
    *(int *)(param_2 + 0x800) = iVar4 + 1;
    *(undefined1 *)(param_2 + iVar4) = 0;
    local_134 = local_18;
    param_5 = local_118;
    if (param_3 == 0) {
      return;
    }
  }
  local_12c = 0;
  if (0 < local_130) {
    local_120 = 0;
    do {
      iVar4 = local_120;
      if (0 < local_134) {
        do {
          iVar1 = *(int *)(param_2 + 0x800);
          if (param_3 == 0) {
            (**(code **)(param_1 + 0x88))(param_5[iVar4],param_2,*(undefined4 *)(param_1 + 0x10c));
          }
          else if (param_3 == 1) {
            (**(code **)(param_1 + 0x8c))
                      (param_5[iVar4],local_12c,param_2,*(undefined4 *)(param_1 + 0x10c));
          }
          else if (param_3 == 2) {
            (**(code **)(param_1 + 0x90))
                      (param_5[iVar4],local_12c,param_2,*(undefined4 *)(param_1 + 0x10c));
          }
          if (iVar1 == *(int *)(param_2 + 0x800)) {
            FUN_0218daf8(param_2,&DAT_021a68e4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_134);
      }
      local_12c = local_12c + 1;
    } while (local_12c < local_130);
  }
  return;
}

