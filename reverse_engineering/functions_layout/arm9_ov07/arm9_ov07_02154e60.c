
void FUN_02154e60(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_02023940(*(undefined4 *)(param_1 + 4));
  FUN_0214f2a4(&local_18,param_1,s_Position_02169d68);
  FUN_0214f2a4(&local_20,param_1,&DAT_02169d74);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_20,0,local_1c);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c70(*(undefined4 *)(param_1 + 4),1);
  FUN_020239a0(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  local_28 = param_2[1] << 0xc;
  local_24 = (*param_2 + 0xd8) * 0x1000;
  FUN_0214f218(param_1,&local_24,&local_28);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_18,0,local_14);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_20,0,local_1c);
  local_30 = param_2[1] << 0xc;
  local_2c = *param_2 << 0xc;
  FUN_0214f218(param_1,&local_2c,&local_30);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_18,0x10,local_14);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_20,0x10,local_1c);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c80(*(undefined4 *)(param_1 + 4),local_18,0x494c,local_14);
  FUN_02023c70(*(undefined4 *)(param_1 + 4),3);
  FUN_020239a0(*(undefined4 *)(param_1 + 4));
  local_38 = param_2[1] << 0xc;
  local_34 = *param_2 << 0xc;
  FUN_0214f218(param_1,&local_34,&local_38);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_18,0,local_14);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  FUN_02023c60(*(undefined4 *)(param_1 + 4),local_20,0,local_1c);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c70(*(undefined4 *)(param_1 + 4),5);
  return;
}

