
void FUN_02024958(int param_1)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x224) == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x74);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      if ((*(byte *)(param_1 + 0x29) & 7) >> 2 == 0) {
        FUN_020288a4(*(undefined4 *)(*(int *)(param_1 + 0x6c) + uVar1 * *(int *)(param_1 + 0x70)));
      }
      else {
        FUN_02028868(*(undefined4 *)(*(int *)(param_1 + 0x6c) + uVar1 * *(int *)(param_1 + 0x70)));
      }
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
  }
  FUN_02022380(param_1);
  return;
}

