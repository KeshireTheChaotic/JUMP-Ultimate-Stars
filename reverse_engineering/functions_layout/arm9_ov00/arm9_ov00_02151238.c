
int FUN_02151238(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_0214ed48(param_3);
  FUN_020329ec(param_2);
  iVar1 = FUN_0214ed84();
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_02151170(iVar1,param_4);
  local_18 = 0x60000;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214edac();
  return iVar1;
}

