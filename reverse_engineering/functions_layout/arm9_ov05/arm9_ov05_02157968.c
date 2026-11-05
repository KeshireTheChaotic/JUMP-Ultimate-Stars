
undefined4 FUN_02157968(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_02155824();
  FUN_0214cfbc(*(undefined4 *)(param_1 + 0x3c0));
  FUN_02157ba8(param_1);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 6);
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = *(uint *)(param_1 + 0x3b4);
      param_2 = (undefined4 *)*param_2;
    }
    if (bVar4 && uVar2 == 0) {
      iVar3 = FUN_0203b3e4();
      iVar1 = CharaData::CharaData_Create
                        ((int)*(char *)(iVar1 + 8),*(undefined1 *)(iVar1 + 7),
                         *(undefined4 *)(iVar3 + 0x88),0,0);
      *(int *)(param_1 + 0x3b4) = iVar1;
      FUN_021500cc(*(undefined4 *)(iVar1 + 8),param_2);
      local_14 = 0x1f000;
      FUN_0214d494(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 8),&local_14);
      FUN_02157b4c(*(undefined4 *)(param_1 + 0x3b4),0);
      iVar1 = *(int *)(param_1 + 0x3b4);
      FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),*(undefined4 *)(iVar1 + 0x88),0);
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0xc) + 4) + 0x68) + 0x6c))();
      FUN_02157b4c(*(undefined4 *)(param_1 + 0x3b4),1);
      local_18 = 0xb8000;
      local_1c = 0xc0000;
      FUN_0214ce68(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 8),&local_1c,&local_18);
    }
  }
  *(code **)(param_1 + 0x3a8) = FUN_02157a7c;
  return 0;
}

