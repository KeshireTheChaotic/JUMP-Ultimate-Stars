
void FUN_0216bf78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(int *)(iVar1 + 0x1a0) = iVar2;
  (**(code **)(iVar1 + 0xc))
            (iVar1,*(undefined4 *)(iVar1 + 0x10),1,u_KLMNOPQRSTU_02171b98[iVar2],param_4);
  return;
}

