
void FUN_020774c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 0x10) != '\x02') {
      *(byte *)((int)puVar1 + 0xf) = *(byte *)((int)puVar1 + 0xf) & ~(&DAT_02092e28)[param_2];
    }
  }
  return;
}

