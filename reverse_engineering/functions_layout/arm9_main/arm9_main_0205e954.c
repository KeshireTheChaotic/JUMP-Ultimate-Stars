
undefined2 * FUN_0205e954(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = param_2;
  puVar1[1] = 0;
  *(int *)(puVar1 + 2) = param_1[1] - (int)(puVar1 + 8);
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}

