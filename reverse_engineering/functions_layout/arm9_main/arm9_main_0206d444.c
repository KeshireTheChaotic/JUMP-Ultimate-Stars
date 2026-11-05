
void FUN_0206d444(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x48); iVar1 = iVar1 + 1) {
    FUN_0201b244(*(undefined4 *)(param_1 + iVar1 * 4));
    FUN_0201b244(*(undefined4 *)(param_1 + iVar1 * 4 + 0x20));
  }
  FUN_0201b244(param_1);
  return;
}

