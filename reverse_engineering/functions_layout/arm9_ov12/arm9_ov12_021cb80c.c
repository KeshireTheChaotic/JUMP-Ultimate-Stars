
void FUN_021cb80c(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 2);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_020288a4(*(undefined4 *)(*param_1 + uVar1 * param_1[1] + 8));
  }
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

