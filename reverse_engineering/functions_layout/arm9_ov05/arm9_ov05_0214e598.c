
void FUN_0214e598(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(DAT_0214bd80 + 0x18e4) == 2) {
    uVar1 = param_1 >> 5;
    *(uint *)(*(int *)(DAT_0214bd80 + 0x60) + uVar1 * 4) =
         *(uint *)(*(int *)(DAT_0214bd80 + 0x60) + uVar1 * 4) | 1 << (param_1 & 0x1f);
    iVar2 = *(int *)(DAT_0214bd80 + 0x60) + 0x74;
    *(uint *)(iVar2 + uVar1 * 4) = *(uint *)(iVar2 + uVar1 * 4) | 1 << (param_1 & 0x1f);
    return;
  }
  return;
}

