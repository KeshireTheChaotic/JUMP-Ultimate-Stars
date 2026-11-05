
void FUN_0218f378(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_020aab78 + 0xa4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = DAT_020aab78;
    *(undefined1 *)(piVar1 + 2) = 0;
    piVar1[0x11] = 0;
    piVar1[0x18] = 0;
    piVar1[0xe] = 0;
  }
  return;
}

