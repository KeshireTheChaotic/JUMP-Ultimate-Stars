
void FUN_0215fe4c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = true;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = 2;
  do {
    bVar1 = *(byte *)(*(int *)(*(int *)(*(int *)(iVar4 + iVar3 * 4 + 4) + 4) + 100) + 0x10);
    if (((char)bVar1 < '\0') && ((bVar1 & 3) >> 1 != 0)) {
      bVar2 = false;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  if (bVar2) {
    FUN_0214ec4c(*(undefined4 *)(iVar4 + 0x20),3);
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

