
void FUN_02169908(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0x34) == '\0') {
    iVar1 = func_0x021bacf4(*(undefined4 *)(iVar2 + 0x30));
    if (iVar1 != 0) {
      func_0x021bace0(*(undefined4 *)(iVar2 + 0x30));
      while (iVar1 = func_0x021bacf4(*(undefined4 *)(iVar2 + 0x30)), iVar1 != 0) {
        (*DAT_020a0e18)();
      }
    }
    func_0x021bac28(*(undefined4 *)(iVar2 + 0x30),0x4e,0,0,0,0,0,0);
  }
  FUN_02169998(param_1);
  return;
}

