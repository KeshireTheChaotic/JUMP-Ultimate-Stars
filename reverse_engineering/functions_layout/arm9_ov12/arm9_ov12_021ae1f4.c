
void FUN_021ae1f4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x158); uVar2 = uVar2 + 1) {
    if ((int)((uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x154) + uVar2 * 4) + 100) + 0x10
                             ) << 0x18) < 0) {
      iVar1 = iVar1 + 1;
    }
  }
  *(int *)(param_1 + 0x148) = iVar1;
  return;
}

