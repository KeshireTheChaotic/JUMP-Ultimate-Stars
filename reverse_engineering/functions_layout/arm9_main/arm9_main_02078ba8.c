
undefined1 FUN_02078ba8(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = 1;
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if ((*(char *)(puVar2 + 0x10) == '\0') && (param_2 != *(byte *)((int)puVar2 + 0x13))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

