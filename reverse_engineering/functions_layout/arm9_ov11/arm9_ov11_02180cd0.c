
void FUN_02180cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 0x24);
  iVar3 = *(int *)(iVar1 + 4);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x24);
  }
  uStack_10 = param_4;
  if (iVar3 != 0 && iVar1 != 0) {
    if (iVar3 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*(uint *)(iVar3 + 0xa8) & 0x10) != 0;
    }
    if (!bVar4) {
      iVar1 = FUN_02180cbc(*(undefined4 *)(param_1 + 0x24));
      if (iVar1 == 0) {
        bVar4 = true;
      }
      else if ((*(uint *)(iVar1 + 0x180) & 4) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_18 = (int)*(short *)(*(int *)(iVar3 + 0x24) + 0x34) << 8;
        local_14 = (int)*(short *)(*(int *)(iVar3 + 0x24) + 0x36) << 8;
        uVar2 = FUN_02180cbc(*(undefined4 *)(param_1 + 0x24));
        FUN_02176d64(uVar2,&local_18,0xffffffff);
        return;
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x105) = 1;
  FUN_02180be4(param_1);
  return;
}

