
uint FUN_03801b88(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_03801c78(*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar2 = uVar1 & 0x7f | uVar2 << 7;
  } while ((uVar1 & 0x80) != 0);
  return uVar2;
}

