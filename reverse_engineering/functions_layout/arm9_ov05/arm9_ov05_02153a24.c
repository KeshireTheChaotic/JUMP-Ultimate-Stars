
void FUN_02153a24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    *(undefined4 *)(iVar2 + 0x43c) = *(undefined4 *)(param_2 + iVar1 * 4);
    *(undefined4 *)(iVar2 + 0x454) = *(undefined4 *)(param_2 + iVar1 * 4 + 0x18);
    if (*(int *)(iVar2 + 0x43c) != -1) {
      *(undefined1 *)(param_1 + iVar1 + 0x546) = 1;
      *(undefined1 *)(param_1 + iVar1 + 0x54c) = 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*(int *)(param_2 + 0x30) != 0) {
    *(char *)(param_1 + 0x438) = (char)*(int *)(param_2 + 0x30);
  }
  return;
}

