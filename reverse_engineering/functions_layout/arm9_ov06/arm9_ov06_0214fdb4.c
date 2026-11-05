
void FUN_0214fdb4(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xc9) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    iVar1 = param_1 + iVar2 * 4;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}

