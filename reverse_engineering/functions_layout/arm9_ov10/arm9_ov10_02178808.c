
void FUN_02178808(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x198) == 1) {
    FUN_02178434(6);
  }
  else {
    iVar1 = FUN_02178448();
    if ((*(int *)(iVar1 + 0x198) != 6) && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) != 0xb))
    {
      return;
    }
  }
  iVar1 = FUN_02178448();
  if (param_1 == *(int *)(iVar1 + 0x178)) {
    iVar1 = FUN_02178448();
    *(char *)(iVar1 + 0x174) = *(char *)(iVar1 + 0x174) + '\x01';
  }
  else {
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x174) = 0;
    iVar1 = FUN_02178448();
    *(int *)(iVar1 + 0x178) = param_1;
  }
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x17c) = 0;
  *(undefined4 *)(iVar1 + 0x180) = 0;
  FUN_0217c1f4(1,param_1);
  iVar1 = FUN_02179000();
  if (iVar1 == 0) {
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x3c4) = 0xff;
  }
  return;
}

