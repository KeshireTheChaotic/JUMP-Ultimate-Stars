
void FUN_0205ebb8(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

