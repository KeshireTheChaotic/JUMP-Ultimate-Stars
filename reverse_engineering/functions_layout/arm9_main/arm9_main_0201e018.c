
void FUN_0201e018(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  for (uVar3 = 0; uVar3 < *(ushort *)(param_2 + 0x14); uVar3 = uVar3 + 1) {
    iVar2 = FUN_0201d5f4(param_1,uVar3 * *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc));
    bVar1 = bVar1 || iVar2 != 0;
  }
  if (bVar1) {
    FUN_0201d558(param_1);
    return;
  }
  return;
}

