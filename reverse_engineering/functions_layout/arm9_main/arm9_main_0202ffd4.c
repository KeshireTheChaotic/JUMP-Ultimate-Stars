
void FUN_0202ffd4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))();
      return;
    }
  } while (*(int *)(*(int *)(param_1 + 0x10) + uVar1 * 4) != param_2);
  return;
}

