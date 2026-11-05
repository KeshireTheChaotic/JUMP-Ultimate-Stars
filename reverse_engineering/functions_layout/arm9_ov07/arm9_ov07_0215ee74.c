
void FUN_0215ee74(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = DAT_0216ad84;
  uVar5 = 0;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_0216ad84 + 0x50f0) = 1;
    *(undefined2 *)(iVar2 + 0x50e2) = 0;
    *(undefined4 *)(iVar2 + 0x5104) = 0x65;
  }
  else {
    iVar3 = FUN_0215fc84(DAT_0216ad84,param_1);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar2 + 0x5100) = 0;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 8);
      uVar5 = (uint)uVar1;
      if ((int)(uint)*(ushort *)(param_1 + 10) < *(int *)(iVar2 + 0x5104)) {
        *(uint *)(iVar2 + 0x5104) = (uint)*(ushort *)(param_1 + 10);
        *(ushort *)(iVar2 + 0x50e2) = uVar1;
      }
      uVar4 = FUN_0205889c();
      if (uVar5 == 0x20U - LZCOUNT(uVar4)) {
        *(undefined4 *)(iVar2 + 0x5100) = 0;
        FUN_0215f1f4();
        return;
      }
    }
  }
  if (*(int *)(iVar2 + 0x5100) == 0) {
    return;
  }
  uVar4 = FUN_0215e6a8(uVar5);
  uVar4 = FUN_0205ab10(FUN_0215ee74,3,0x11,uVar4);
  FUN_0215fcb8(iVar2,0x1e,uVar4);
  return;
}

