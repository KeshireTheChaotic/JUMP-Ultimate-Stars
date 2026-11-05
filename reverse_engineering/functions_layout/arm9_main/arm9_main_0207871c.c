
void FUN_0207871c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 0x10) == '\0') {
      if ((*(byte *)((int)puVar1 + 0xf) & 0x10) == 0 || param_2 == 0) {
        puVar1[0xf] = puVar1[0xf] | 0x5000;
        *(undefined2 *)(puVar1 + 6) = 0;
      }
      else {
        puVar1[0xf] = puVar1[0xf] & 0xffffefff | 0x4000;
        *(short *)(puVar1 + 6) = *(short *)((int)puVar1 + 0x16) / 2;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x5cd) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  return;
}

