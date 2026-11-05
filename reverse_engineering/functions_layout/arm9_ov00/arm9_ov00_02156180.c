
void FUN_02156180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x214); iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 * 0x48 + param_1 + 0x35) = 0;
  }
  *(undefined1 *)(param_1 + 0x21e) = 1;
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x124) + 4),FUN_02156378,*(int *)(param_1 + 0x214)
               ,0,param_4);
  return;
}

