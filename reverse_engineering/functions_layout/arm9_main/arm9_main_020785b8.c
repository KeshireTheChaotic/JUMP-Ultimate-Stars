
void FUN_020785b8(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if ((puVar2[0xf] & 0x2000) != 0) break;
    puVar2[0xf] = puVar2[0xf] & 0xffffefff;
    if (*(char *)(puVar2 + 0x10) == '\0') {
      uVar1 = FUN_0200d12c(*(short *)((int)puVar2 + 0x16) * 100,param_2);
      *(undefined2 *)(puVar2 + 6) = uVar1;
    }
    puVar2 = (undefined4 *)*puVar2;
  }
  return;
}

