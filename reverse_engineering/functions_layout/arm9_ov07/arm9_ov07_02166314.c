
void FUN_02166314(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  func_0x021a31ec();
  if (DAT_0214ccf8 != 0) {
    func_0x0219a308();
    func_0x0219e08c();
    (**(code **)(**(int **)(DAT_0214ccf8 + 8) + 8))();
    func_0x021a03bc(*(undefined4 *)(DAT_0214ccf8 + 0x1bd4));
    iVar2 = 0;
    *(undefined4 *)(DAT_0214ccf8 + 0x1bd4) = 0;
    do {
      pcVar4 = (char *)(DAT_0214ccf8 + 0x2db);
      iVar3 = 0x200;
      while ((0 < iVar3 && (cVar1 = *pcVar4, pcVar4 = pcVar4 + -1, cVar1 == -1))) {
        iVar3 = iVar3 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    DAT_0214ccf8 = 0;
  }
  FUN_021671e4();
  return;
}

