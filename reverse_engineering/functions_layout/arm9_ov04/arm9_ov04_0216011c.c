
void FUN_0216011c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (iVar3 = 0; iVar2 = FUN_0214f72c(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
    iVar2 = FUN_02158384(*(undefined4 *)(iVar4 + 0xd4),iVar3);
    if (iVar2 != 0) {
      uVar1 = FUN_0214f7c8(iVar3);
      FUN_021582fc(*(undefined4 *)(iVar4 + 0xd4),iVar3,uVar1);
    }
  }
  iVar3 = FUN_021583a4(*(undefined4 *)(iVar4 + 0xd4));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_021574e8(*(undefined4 *)(iVar4 + 0xcc));
  if (iVar3 == 0) {
    return;
  }
  FUN_0215fdcc(iVar4);
  return;
}

