
void FUN_02155a24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_02155c68(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
  local_18 = 0x1000;
  local_14 = 0x1000;
  uVar1 = FUN_02155ae0(param_1);
  FUN_02155ab0(uVar1,&local_14,&local_18);
  piVar2 = (int *)FUN_02155b08(param_1,0x54435049,0);
  (**(code **)(*piVar2 + 0x34))();
  FUN_02013aec(piVar2[1]);
  uVar1 = FUN_02155ae0(param_1);
  iVar3 = FUN_02155b08(uVar1,0x54435049,0);
  FUN_02013aec(*(undefined4 *)(iVar3 + 4));
  return;
}

