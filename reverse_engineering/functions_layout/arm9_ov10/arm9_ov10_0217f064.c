
void FUN_0217f064(int param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x100) = 1;
  *(undefined1 *)(param_1 + 0x101) = 3;
  *(undefined1 *)(param_1 + 0x102) = 5;
  *(undefined1 *)(param_1 + 0x103) = 7;
  *(undefined1 *)(param_1 + 0x104) = 0xb;
  iVar2 = 0;
  cVar1 = -1;
  do {
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (iVar2 < 0x100);
  return;
}

