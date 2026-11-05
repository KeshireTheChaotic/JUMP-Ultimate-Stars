
void FUN_021ac2a8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x24); uVar1 = uVar1 + 1) {
    iVar2 = *(int *)(uVar1 * 0x24 + *(int *)(param_1 + 0x20) + 0x14);
    if (iVar2 != 0) {
      FUN_021ac3c4(iVar2);
      FUN_0201b244(iVar2);
    }
  }
  FUN_021ac1dc(param_1 + 0x20,*(undefined4 *)(param_1 + 0x24));
  return;
}

