
void FUN_02153a9c(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + param_2 + 0x546) = 0;
  iVar1 = param_1 + param_2 * 4;
  *(undefined1 *)(param_1 + param_2 + 0x54c) = 1;
  if (*(int *)(iVar1 + 0x43c) != -1) {
    *(undefined4 *)(iVar1 + 0x43c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x544) = 1;
    *(undefined1 *)(param_1 + 0x545) = 1;
  }
  return;
}

