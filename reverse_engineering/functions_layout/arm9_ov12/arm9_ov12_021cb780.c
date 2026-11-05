
void FUN_021cb780(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)((int)param_2 + 0xe);
  return;
}

