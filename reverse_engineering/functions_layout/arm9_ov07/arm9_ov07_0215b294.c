
void FUN_0215b294(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = uVar3 & 0xffff0fff;
  if (uVar3 == 0x4ff0) {
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) != 0) {
        if (*(int *)(iVar5 + 0x5c) < 5) {
          *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (*(int *)(iVar5 + 0x5c) + 1) * 4);
          return;
        }
        *param_3 = param_1;
        return;
      }
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar1) {
        if ((*(uint *)(iVar5 + 0x6c) & 0x2000) == 0) {
          *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (iVar1 + -1) * 4);
          return;
        }
        *param_3 = *(int *)(*(int *)(iVar5 + 0x50) + (iVar1 + -1) * 4);
        return;
      }
    }
  }
  else if ((uVar3 & 0xf000) == 0x8000) {
    if ((param_2 & 1) != 0) {
      *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (uVar2 - 1) * 4);
      return;
    }
    if ((param_2 & 2) != 0) {
      if (uVar2 < 5) {
        *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (uVar2 + 1) * 4);
        return;
      }
      *param_3 = param_1;
      return;
    }
  }
  else if ((uVar3 & 0x1000) == 0) {
    if ((uVar3 & 0x2000) != 0) {
      if ((param_2 & 8) != 0) {
        *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + uVar2 * 4);
        return;
      }
      if ((param_2 & 1) != 0) {
        if (uVar2 == 0) {
          *param_3 = param_1;
          return;
        }
        *param_3 = *(int *)(*(int *)(iVar5 + 0x50) + (uVar2 - 1) * 4);
        return;
      }
      if ((param_2 & 2) != 0) {
        iVar1 = (uVar2 + 1) * 4;
        iVar4 = *(int *)(*(int *)(iVar5 + 0x4c) + iVar1);
        if (*(int *)(*(int *)(iVar4 + 4) + 0x124) == 0x4ff0) {
          *param_3 = iVar4;
          return;
        }
        *param_3 = *(int *)(*(int *)(iVar5 + 0x50) + iVar1);
      }
    }
  }
  else {
    if ((param_2 & 4) != 0) {
      *param_3 = *(int *)(*(int *)(iVar5 + 0x50) + uVar2 * 4);
      return;
    }
    if ((param_2 & 1) != 0) {
      if (uVar2 == 0) {
        *param_3 = param_1;
        return;
      }
      *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (uVar2 - 1) * 4);
      return;
    }
    if ((param_2 & 2) != 0) {
      *param_3 = *(int *)(*(int *)(iVar5 + 0x4c) + (uVar2 + 1) * 4);
      return;
    }
  }
  return;
}

