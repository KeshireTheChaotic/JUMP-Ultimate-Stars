
void FUN_0216d010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x80) * 0x24;
  uStack_10 = param_4;
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x74) + 4),
               (&DAT_02171eec)[*(int *)(param_1 + 0x80) * 9] + 0x810000,0);
  local_18 = (int)*(short *)(&DAT_02171efa + iVar1) << 0xc;
  local_14 = (int)*(short *)(&DAT_02171ef8 + iVar1) << 0xc;
  FUN_0214ce68(*(undefined4 *)(param_1 + 0x74),&local_14,&local_18);
  return;
}

