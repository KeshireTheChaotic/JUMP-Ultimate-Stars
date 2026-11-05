
void FUN_02151b1c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  local_18 = (int)*(short *)(iVar2 + 0x34) << 0xc;
  local_14 = (int)*(short *)(iVar2 + 0x32) << 0xc;
  FUN_021519d0(*(undefined4 *)(iVar2 + 0x10),&local_14,&local_18);
  piVar1 = *(int **)(*(int *)(iVar2 + 0x10) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  FUN_02028330(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4));
  piVar1 = *(int **)(*(int *)(iVar2 + 0x28) + 4);
  (**(code **)(*(int *)piVar1[0x19] + 0x70))();
  (**(code **)(*piVar1 + 0xc4))();
  local_20 = (*(short *)(iVar2 + 0x34) + -0x36) * 0x1000;
  local_1c = (*(short *)(iVar2 + 0x32) + -0x6c) * 0x1000;
  FUN_021519d0(*(undefined4 *)(iVar2 + 0x28),&local_1c,&local_20);
  piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x28) + 4) + 100);
  (**(code **)(*piVar1 + 0x68))(piVar1,param_2);
  piVar1 = *(int **)(*(int *)(iVar2 + 0x28) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

