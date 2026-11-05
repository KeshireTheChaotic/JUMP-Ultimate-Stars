
void FUN_02152764(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (iVar1 != 5) {
    *(char *)(iVar2 + 0x438) = (char)iVar1;
    *(undefined1 *)(iVar2 + 0x544) = 1;
    *(undefined1 *)(iVar2 + 0x545) = 1;
  }
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  FUN_021527c8(iVar2);
  FUN_0207342c(0x78,0);
  return;
}

