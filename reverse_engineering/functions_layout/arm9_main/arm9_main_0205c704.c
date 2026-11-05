
void FUN_0205c704(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  MIi_CpuCopy32(param_2,param_1,0x30);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x84) = iVar1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x88) = iVar1;
  iVar1 = *(int *)(param_1 + 0x84);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(iVar1 + 0xc + iVar3);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_2 + iVar2;
      }
      *(int *)(iVar1 + 0xc + iVar3 + 8) = iVar2;
      iVar1 = *(int *)(param_1 + 0x84);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < *(uint *)(iVar1 + 8));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  DAT_020ae050 = param_1;
  return;
}

