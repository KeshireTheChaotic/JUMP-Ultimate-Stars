
void FUN_021614d4(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  iVar2 = FUN_02160040();
  if (iVar2 == 0) {
    if (*(int *)(iVar4 + 0xc) == 1) {
      if (*(int *)(iVar4 + 4) == 0) {
        *(undefined2 *)(iVar4 + 0x14) = 0xfffd;
      }
      else {
        *(undefined2 *)(iVar4 + 0x14) = 0xffff;
      }
    }
    else {
      uVar1 = FUN_0216172c(param_1);
      *(undefined2 *)(iVar4 + 0x14) = uVar1;
      if (*(short *)(iVar4 + 0x14) == -1) {
        *(undefined4 *)(iVar4 + 0xc) = 1;
      }
    }
    FUN_02161628(param_1,*(undefined2 *)(iVar4 + 0x214),iVar4 + 0x14,iVar4 + 0x420);
    FUN_021616dc(iVar4 + 0x14,*param_2);
    *(ushort *)(param_2 + 1) = *(short *)(iVar4 + 0x584) + 5U & 0xfffe;
    return;
  }
  uVar3 = *param_2;
  if (*(int *)(iVar4 + 0xc) == 1) {
    if (*(int *)(iVar4 + 4) == 0) {
      *(undefined2 *)(iVar4 + 0x14) = 0xfffd;
    }
    else {
      *(undefined2 *)(iVar4 + 0x14) = 0xffff;
    }
  }
  else {
    uVar1 = FUN_0216172c(param_1);
    *(undefined2 *)(iVar4 + 0x14) = uVar1;
    if (*(short *)(iVar4 + 0x14) == -1) {
      *(undefined4 *)(iVar4 + 0xc) = 1;
    }
  }
  if (*(int *)(iVar4 + 8) == 0) {
    uVar1 = *(undefined2 *)(iVar4 + 0x214);
  }
  else {
    uVar1 = 0xfffe;
  }
  FUN_02161628(param_1,uVar1,iVar4 + 0x14,iVar4 + 0x420);
  FUN_021616dc(iVar4 + 0x14,uVar3);
  *(ushort *)(param_2 + 1) = *(short *)(iVar4 + 0x584) + 5U & 0xfffe;
  return;
}

