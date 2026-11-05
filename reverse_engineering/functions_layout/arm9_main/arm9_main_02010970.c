
void FUN_02010970(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[1] = param_2;
  uVar1 = jus_AllocDebug(param_2 * (uint)*(ushort *)((int)param_1 + 10));
  *param_1 = uVar1;
  return;
}

