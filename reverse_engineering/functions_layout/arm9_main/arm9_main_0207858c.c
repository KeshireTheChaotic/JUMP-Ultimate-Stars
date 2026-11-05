
void FUN_0207858c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puVar1[0xf] = puVar1[0xf] | 0x1000;
  }
  return;
}

