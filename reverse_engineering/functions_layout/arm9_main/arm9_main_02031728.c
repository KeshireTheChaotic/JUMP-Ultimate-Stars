
void FUN_02031728(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_020a0d10 + 4) + 0xc);
  while (iVar2 = *(int *)(iVar1 + 0xc), iVar2 != 0) {
    if (*(int *)(iVar1 + 600) != 0) {
      FUN_020275ec();
      *(undefined4 *)(iVar1 + 600) = 0;
    }
    FUN_02031554(iVar1);
    iVar1 = iVar2;
  }
  return;
}

