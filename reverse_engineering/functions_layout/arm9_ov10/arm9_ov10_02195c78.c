
undefined4 FUN_02195c78(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int local_24;
  byte *local_18;
  
  local_18 = (byte *)*param_2 + 1;
  bVar1 = *(byte *)*param_2;
  iVar2 = FUN_021960d8(&local_18);
  pbVar7 = local_18;
  if ((iVar2 < 0) || (2000 < iVar2)) {
    return 1;
  }
  switch(bVar1 & 0x1f) {
  default:
    if (bVar1 == 0xa0) {
      pbVar7 = local_18 + iVar2;
      while (local_18 < pbVar7) {
        iVar2 = FUN_02195c78(param_1,&local_18,param_3 + 1,0,param_5);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
    else {
      local_18 = local_18 + iVar2;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x5ad) != '\0') {
      if (param_4 == 0) {
        bVar1 = *local_18;
        while (bVar1 == 0) {
          iVar2 = iVar2 + -1;
          bVar1 = local_18[1];
          local_18 = local_18 + 1;
        }
        if (param_5 == 0) {
          if (iVar2 < 0x101) {
            FUN_02051890(local_18,param_1 + 0x494,iVar2);
            *(int *)(param_1 + 0x594) = iVar2;
          }
        }
        else if (param_5 == 2) {
          *(int *)(param_1 + 0x484) = iVar2;
          *(byte **)(param_1 + 0x488) = local_18;
        }
      }
      else if (param_4 == 1) {
        bVar1 = *local_18;
        while (bVar1 == 0) {
          iVar2 = iVar2 + -1;
          bVar1 = local_18[1];
          local_18 = local_18 + 1;
        }
        if (param_5 == 0) {
          if (iVar2 < 9) {
            FUN_02051890(local_18,param_1 + 0x598,iVar2);
            *(int *)(param_1 + 0x5a0) = iVar2;
          }
        }
        else if (param_5 == 2) {
          *(int *)(param_1 + 0x48c) = iVar2;
          *(byte **)(param_1 + 0x490) = local_18;
        }
      }
    }
    local_18 = local_18 + iVar2;
    break;
  case 3:
    if ((param_3 == 1) && (param_5 != 2)) {
      *(byte **)(param_1 + 0x5a4) = local_18 + 1;
      *(int *)(param_1 + 0x5a8) = iVar2 + -1;
    }
    if (*(char *)(param_1 + 0x5ad) == '\0') {
      local_18 = local_18 + iVar2;
    }
    else {
      local_18 = local_18 + 1;
      iVar2 = FUN_02195c78(param_1,&local_18,param_3,0,param_5);
      if (iVar2 != 0) {
        return 1;
      }
      *(undefined1 *)(param_1 + 0x5ad) = 0;
    }
    break;
  case 6:
    local_24 = 0;
    puVar8 = &DAT_021a6f50;
    do {
      uVar3 = *puVar8;
      uVar4 = FUN_02004b04();
      iVar6 = FUN_020024cc(pbVar7,uVar3,uVar4);
      if (iVar6 == 0) {
        switch(local_24) {
        case 1:
        case 2:
          if (param_5 == 0) {
            *(int *)(param_1 + 0x45c) = local_24;
          }
          *(char *)(param_1 + 0x5ad) = (char)local_24;
          break;
        case 3:
        case 4:
          if (param_5 != 2) {
            *(int *)(param_1 + 0x458) = local_24;
          }
          break;
        case 5:
          if (param_5 != 2) {
            *(char *)(param_1 + 0x5ae) = (char)local_24;
          }
        }
        break;
      }
      puVar8 = puVar8 + 1;
      local_24 = local_24 + 1;
    } while (local_24 < 6);
    local_18 = local_18 + iVar2;
    break;
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x16:
    if (param_5 != 2) {
      if (*(char *)(param_1 + 0x5ac) == '\0') {
        FUN_02196090(param_1 + 0x5b0,local_18,iVar2);
      }
      else {
        FUN_02196090(param_1 + 0x6b0,local_18,iVar2);
        if ((*(char *)(param_1 + 0x5ae) == '\x05') && (iVar2 < 0x50)) {
          FUN_02051890(local_18,param_1 + 0x7b0,iVar2);
          *(undefined1 *)(param_1 + iVar2 + 0x7b0) = 0;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x5ae) = 0;
    local_18 = local_18 + iVar2;
    break;
  case 0x10:
    if (((param_3 == 0) && (param_4 == 0)) && (param_5 != 2)) {
      *(byte **)(param_1 + 0x460) = local_18;
    }
    pbVar7 = local_18 + iVar2;
    iVar2 = 0;
    while (local_18 < pbVar7) {
      iVar6 = FUN_02195c78(param_1,&local_18,param_3 + 1,iVar2,param_5);
      iVar2 = iVar2 + 1;
      if (iVar6 != 0) {
        return 1;
      }
    }
    if (((param_3 == 1) && (param_4 == 0)) && (param_5 != 2)) {
      *(byte **)(param_1 + 0x464) = local_18;
    }
    break;
  case 0x11:
    pbVar7 = local_18 + iVar2;
    while (local_18 < pbVar7) {
      iVar2 = FUN_02195c78(param_1,&local_18,param_3 + 1,0,param_5);
      if (iVar2 != 0) {
        return 1;
      }
    }
    break;
  case 0x17:
  case 0x18:
    if (param_5 != 2) {
      uVar5 = FUN_02196028(local_18);
      if (param_4 == 0) {
        if (uVar5 <= *(uint *)(param_1 + 0x80c)) {
          *(undefined1 *)(param_1 + 0x5af) = 1;
        }
      }
      else if (uVar5 < *(uint *)(param_1 + 0x80c)) {
        *(undefined1 *)(param_1 + 0x5af) = 0;
      }
    }
    local_18 = local_18 + iVar2;
    *(undefined1 *)(param_1 + 0x5ac) = 1;
  }
  *param_2 = local_18;
  return 0;
}

