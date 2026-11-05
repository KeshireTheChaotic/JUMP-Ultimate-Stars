
void FUN_02156710(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 4);
  if (*(char *)(param_2 + 2) != 0) {
    *(short *)(param_1 + 0x9c) = (short)((int)*(char *)(param_2 + 2) << 5);
    iVar1 = FUN_02155c9c(*(undefined4 *)(param_1 + 0x88));
    if (iVar1 != 0) {
      *(short *)(param_1 + 0x9c) = -*(short *)(param_1 + 0x9c);
    }
  }
  if (*(char *)(param_2 + 3) != '\0') {
    *(short *)(param_1 + 0x9e) = *(char *)(param_2 + 3) * -0x7e;
  }
  return;
}

