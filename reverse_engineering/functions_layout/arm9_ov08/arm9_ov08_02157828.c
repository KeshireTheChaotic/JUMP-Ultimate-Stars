
void FUN_02157828(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0216e718;
  uVar2 = param_1[1];
  *DAT_0216e718 = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = param_1[2];
  return;
}

