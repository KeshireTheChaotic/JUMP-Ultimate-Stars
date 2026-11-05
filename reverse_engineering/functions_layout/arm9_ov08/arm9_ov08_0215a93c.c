
void FUN_0215a93c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_020507a8(DAT_0216e770,0x1c);
  uVar4 = (uint)*(byte *)(DAT_0216e774 + 0x51);
  FUN_021663fc(*(undefined4 *)(DAT_0216e774 + 0xc),0);
  if (5 < uVar4) {
    uVar4 = 5;
  }
  iVar2 = 0;
  iVar3 = iVar1;
  if (uVar4 != 0) {
    do {
      FUN_0215a868(iVar3,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 < (int)uVar4);
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    do {
      FUN_0215a80c(iVar1,iVar3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar3 < (int)uVar4);
  }
  FUN_02166370(*(undefined4 *)(DAT_0216e774 + 0xc));
  FUN_0215a780();
  return;
}

