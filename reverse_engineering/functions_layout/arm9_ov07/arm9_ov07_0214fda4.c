
void FUN_0214fda4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x3c);
    if (iVar1 != 0) {
      func_0x021b65e0(*(undefined4 *)(iVar1 + 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),1);
  return;
}

