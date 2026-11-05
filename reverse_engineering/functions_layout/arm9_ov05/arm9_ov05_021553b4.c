
void FUN_021553b4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  local_18 = param_4;
  iVar1 = FUN_0203b414(1);
  FUN_021552bc(*(undefined4 *)(iVar1 + 0x88),param_2);
  iVar1 = FUN_0203b414(2);
  FUN_021552bc(*(undefined4 *)(iVar1 + 0x88),param_2);
  iVar1 = 0;
  do {
    local_18 = param_3 << 0xc;
    FUN_0214d494(*(undefined4 *)(param_1 + iVar1 * 4 + 0x41c),&local_18);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

