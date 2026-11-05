
void FUN_0214fe38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 3) {
    FUN_0214fb7c(*(undefined4 *)(iVar2 + 4));
    iVar1 = FUN_0214fde8();
    if (iVar1 == 0) {
      FUN_0207342c(0x78,2);
      return;
    }
  }
  FUN_0207342c(0x78,0);
  iVar1 = 0;
  do {
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + iVar1 * 4 + 0x20) + 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

