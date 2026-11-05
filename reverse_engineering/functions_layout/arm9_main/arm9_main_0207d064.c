
void FUN_0207d064(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | param_2;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | param_3;
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[5] = puVar1[5] | param_2;
    puVar1[6] = puVar1[6] | param_3;
    *(uint *)(puVar1[2] + 0x10) = *(uint *)(puVar1[2] + 0x10) | param_2;
  }
  return;
}

