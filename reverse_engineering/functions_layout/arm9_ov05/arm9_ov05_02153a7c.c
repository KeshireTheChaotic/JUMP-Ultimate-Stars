
void FUN_02153a7c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x43c) = 0xffffffff;
  } while (iVar2 < 6);
  return;
}

