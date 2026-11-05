
void FUN_02158aa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  iVar4 = *(int *)(param_1 + 0x60);
  uVar1 = FUN_02158c08(*(undefined4 *)(param_1 + 0x70));
  uVar2 = FUN_02158c08(*(undefined4 *)(param_1 + 0x74));
  FUN_020239a0(*(undefined4 *)(iVar4 + 4));
  piVar3 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_0214f714(&local_1c,iVar4,s_Position_0216c840);
  FUN_0214f714(&local_24,*(undefined4 *)(param_1 + 0x70),&DAT_0216c8ec);
  FUN_0214f714(&local_2c,*(undefined4 *)(param_1 + 0x74),&DAT_0216c8ec);
  FUN_0214f714(&local_34,*(undefined4 *)(param_1 + 0x68),&DAT_0216c8ec);
  FUN_0214f714(&local_3c,*(undefined4 *)(param_1 + 0x6c),&DAT_0216c8ec);
  local_40 = 0x100000;
  FUN_0214f764(iVar4,&local_40);
  piVar3 = *(int **)(*(int *)(param_1 + 0x70) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_1c,0,local_18);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_24,0,local_20);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_2c,0,local_28);
  local_44 = 0;
  FUN_0214f764(iVar4,&local_44);
  piVar3 = *(int **)(*(int *)(param_1 + 0x70) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,uVar1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,uVar2);
  piVar3 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x6c) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_1c,8,local_18);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_24,8,local_20);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_2c,8,local_28);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_34,8,local_30);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_3c,8,local_38);
  FUN_02023c80(*(undefined4 *)(iVar4 + 4),local_1c,0x494c,local_18);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),1);
  local_48 = 0x100000;
  FUN_0214f764(iVar4,&local_48);
  func_0x021b4034(*(undefined4 *)(iVar4 + 4),1);
  return;
}

