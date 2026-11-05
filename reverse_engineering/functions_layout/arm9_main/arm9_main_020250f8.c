
void FUN_020250f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  iVar1 = FUN_02019c74(iVar2 + 0x14,param_2,param_3,*(undefined4 *)(iVar2 + 0x34));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  return;
}

