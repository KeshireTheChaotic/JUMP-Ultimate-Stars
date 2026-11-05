
void FUN_02047ccc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x9c); uVar1 = uVar1 + 1) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar1 * 4) + 0x18) != 0) {
      FUN_020472a0();
    }
  }
  return;
}

