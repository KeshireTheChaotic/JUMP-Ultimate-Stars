
void FUN_020783dc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x558);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if ((*(char *)(puVar1 + 0x10) == '\0') && ((puVar1[0xf] & 1) == 0)) {
      FUN_02078488(puVar1,param_2);
    }
  }
  return;
}

