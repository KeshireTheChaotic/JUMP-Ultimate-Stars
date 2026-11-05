
void FUN_02061d38(void)

{
  int iVar1;
  
  while (DAT_020aebd0 != 0) {
    iVar1 = OS_GetProcMode();
    if (iVar1 == 0x12) {
      FUN_020556a4();
    }
  }
  return;
}

