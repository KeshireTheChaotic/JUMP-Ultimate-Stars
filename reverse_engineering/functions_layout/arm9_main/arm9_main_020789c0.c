
undefined1 FUN_020789c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if ((*(char *)(puVar1 + 0x10) == '\0') && ((*(byte *)((int)puVar1 + 0xf) & 0x10) != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return *(undefined1 *)((int)puVar1 + 0x41);
}

