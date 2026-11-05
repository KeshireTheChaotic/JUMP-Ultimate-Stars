
void FUN_02079c30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 4;
    if (*(int *)(iVar1 + 100) != 0) {
      local_1c = param_2 << 0xc;
      FUN_0206c4d4(*(undefined4 *)(iVar1 + 100),&local_1c);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 4;
    if (*(int *)(iVar1 + 0x78) != 0) {
      local_20 = (param_2 + -1) * 0x1000;
      FUN_0206c4d4(*(undefined4 *)(iVar1 + 0x78),&local_20);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

