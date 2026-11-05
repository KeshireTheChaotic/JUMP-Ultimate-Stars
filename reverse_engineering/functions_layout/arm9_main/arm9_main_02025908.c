
undefined4 FUN_02025908(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 8); (uint)puVar1[2] <= param_2;
      puVar1 = (undefined4 *)*puVar1) {
    param_2 = param_2 - puVar1[2];
  }
  return puVar1[param_2 + 3];
}

