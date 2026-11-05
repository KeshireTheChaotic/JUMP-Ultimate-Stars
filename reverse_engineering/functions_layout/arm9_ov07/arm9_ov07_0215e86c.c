
void FUN_0215e86c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_2 + 0x44);
  if (uVar3 == 0) {
    return;
  }
  iVar4 = 0;
  iVar1 = param_1 + 0x24;
  do {
    iVar2 = iVar1;
    uVar5 = *(uint *)(iVar2 + 4);
    if (uVar5 == uVar3) {
      break;
    }
    if (((uVar3 & 0x80000000) != 0) && ((uVar5 & 0x80000000) != 0)) {
      if (uVar3 == 0x80400120) {
        if (uVar5 != 0x80000000) {
          uVar3 = uVar5;
          break;
        }
      }
      else if (uVar5 == 0x80000000) break;
    }
    iVar4 = iVar4 + 1;
    iVar1 = iVar2 + 0x30;
    iVar2 = 0;
  } while (iVar4 < 0x10);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)(iVar2 + 0xc) + 8))(param_1);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x20) = iVar2;
    *(uint *)(param_1 + 0x324) = uVar3;
  }
  return;
}

