
void FUN_0214d19c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = **(int **)(iVar3 + 8);
  uVar4 = *(uint *)(iVar2 + *(int *)(iVar2 + 0x70) * 4 + 0x18) &
          ~*(uint *)(iVar2 + *(int *)(iVar2 + 0x74) * 4 + 0x18);
  uVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xc) + 4) + 0x130))();
  iVar2 = *(int *)(iVar3 + 0x10) + 1;
  *(int *)(iVar3 + 0x10) = iVar2;
  if ((0xb4 < iVar2) || ((uVar1 & 1) != 0 || (uVar4 & 0x8010) != 0)) {
    FUN_02073ebc(3,1);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214d34c);
  }
  iVar2 = *(int *)(iVar3 + 0x14);
  switch(iVar2) {
  case 0:
    break;
  case 1:
    if ((uVar4 & 1) != 0) {
      *(int *)(iVar3 + 0x14) = iVar2 + 1;
      return;
    }
    if ((uVar4 & 0xe) != 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    return;
  case 2:
    if ((uVar4 & 8) != 0) {
      *(int *)(iVar3 + 0x14) = iVar2 + 1;
      return;
    }
    if ((uVar4 & 7) != 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    return;
  case 3:
    if ((uVar4 & 2) != 0) {
      *(int *)(iVar3 + 0x14) = iVar2 + 1;
      return;
    }
    if ((uVar4 & 0xd) != 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    return;
  case 4:
    if ((uVar4 & 4) != 0) {
      *(int *)(iVar3 + 0x14) = iVar2 + 1;
      return;
    }
    if ((uVar4 & 0xb) != 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    return;
  case 5:
    if ((uVar4 & 8) != 0) {
      *(int *)(iVar3 + 0x14) = iVar2 + 1;
      return;
    }
    if ((uVar4 & 7) != 0) {
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    return;
  case 6:
    FUN_0207342c(0x78,0xb);
    FUN_02070d40();
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    return;
  case 7:
    return;
  default:
    return;
  }
  if ((uVar4 & 4) != 0) {
    *(int *)(iVar3 + 0x14) = iVar2 + 1;
    return;
  }
  if ((uVar4 & 0xb) != 0) {
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  return;
}

