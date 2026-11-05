
void FUN_0214fd84(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x3c);
    if (iVar1 != 0) {
      func_0x021b65d8(*(undefined4 *)(iVar1 + 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

