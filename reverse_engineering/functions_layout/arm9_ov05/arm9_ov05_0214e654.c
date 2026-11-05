
undefined4 FUN_0214e654(int param_1,uint param_2)

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
    if (*(ushort *)(puVar1[0xd] + 2) == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

