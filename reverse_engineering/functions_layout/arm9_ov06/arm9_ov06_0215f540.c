
void FUN_0215f540(int param_1,undefined1 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x1c0);
  if (cVar1 < 0xd) {
    *(char *)(param_1 + 0x1c0) = cVar1 + '\x01';
    iVar2 = cVar1 * 0x1c + param_1 + 8;
    *(undefined1 *)(iVar2 + 0x15) = param_2;
    *(undefined2 *)(iVar2 + 0x16) = param_3;
    return;
  }
  return;
}

