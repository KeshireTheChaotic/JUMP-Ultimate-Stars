
void FUN_0207d020(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  param_2 = ~param_2;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[7] = puVar1[7] & param_2;
    *(uint *)(puVar1[2] + 0x14) = *(uint *)(puVar1[2] + 0x14) & param_2;
  }
  return;
}

