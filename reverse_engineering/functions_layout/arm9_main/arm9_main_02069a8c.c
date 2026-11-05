
void FUN_02069a8c(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["0123456789abcdefghijklmnopqrstuv"] */
  iVar1 = FUN_0200d12c(param_3 + 4,5);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *(char *)((param_4 + iVar1 + -1) - iVar2) =
           s_0123456789abcdefghijklmnopqrstuv_0209ddec[param_1 & 0x1f];
      param_1 = param_1 >> 5 | param_2 << 0x1b;
      param_2 = param_2 >> 5;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined1 *)(param_4 + iVar1) = 0;
  return;
}

