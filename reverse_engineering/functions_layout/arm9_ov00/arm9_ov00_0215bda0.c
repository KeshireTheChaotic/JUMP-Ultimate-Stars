
void FUN_0215bda0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x44) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  piVar1 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  DAT_020a10a8 = 0xc00;
  iVar2 = FUN_0203b424(3);
  uVar3 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0203b3e4();
  FUN_0215c628(param_1,param_1 + 0x44,0,*(undefined4 *)(iVar2 + 0x88),uVar3,1,param_4);
  *(char *)(param_1 + 0x1b5) = *(char *)(param_1 + 0x1b5) + -1;
  iVar2 = FUN_0203b414(3);
  uVar3 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0203b3f4();
  FUN_0215c628(param_1,param_1 + 0xfc,0,*(undefined4 *)(iVar2 + 0x88),uVar3,0);
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  *(undefined4 *)(param_1 + 0x68) = 0x3999;
  *(undefined4 *)(param_1 + 0x17c) = 0x3999;
  piVar1 = *(int **)(*(int *)(param_1 + 0xfc) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x158) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  return;
}

