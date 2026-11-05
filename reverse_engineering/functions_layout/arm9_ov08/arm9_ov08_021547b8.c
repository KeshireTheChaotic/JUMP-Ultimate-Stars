
void FUN_021547b8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(DAT_0216e6d0 + iVar1) != 0) {
      FUN_02165d6c();
      *(undefined4 *)(DAT_0216e6d0 + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

