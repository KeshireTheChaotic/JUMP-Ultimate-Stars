
void FUN_02154ac4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x44) = 0xffffffff;
  } while (iVar2 < 4);
  return;
}

