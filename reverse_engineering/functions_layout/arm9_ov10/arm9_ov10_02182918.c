
void FUN_02182918(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_02183fe4(param_1,1);
  FUN_02175814(*(undefined4 *)(iVar1 + 0x460));
  *(undefined4 *)(iVar1 + 0x460) = 0;
  FUN_02001650(*(undefined4 *)(iVar1 + 0x428));
  FUN_02175814(iVar1);
  *param_1 = 0;
  return;
}

