
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021522e4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_5c [13];
  undefined4 local_28;
  
  _DAT_021d5154 = 4;
  iVar2 = ALWidgetBaseImp::Create(param_1,0x1f,0,1);
  local_5c[0xb] = 0x120000;
  FUN_02150a10(iVar2,local_5c + 0xb);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151fcc(local_5c + 0xc,iVar2,s_Position_0216f9f8);
  local_5c[9] = 0x10000;
  local_5c[10] = 0x100000;
  FUN_0214ce68(iVar2,local_5c + 10,local_5c + 9);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[0xc],0,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x802000);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_5c[7] = 0x10000;
  local_5c[8] = 0x100000;
  FUN_0214ce68(iVar2,local_5c + 8,local_5c + 7);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[0xc],0,local_28);
  local_5c[5] = 0x10000;
  local_5c[6] = 0xc0000;
  FUN_0214ce68(iVar2,local_5c + 6,local_5c + 5);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[0xc],4,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_5c[0xc],0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x802001);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_5c[3] = 0x10000;
  local_5c[4] = 0xc0000;
  FUN_0214ce68(iVar2,local_5c + 4,local_5c + 3);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[0xc],0,local_28);
  local_5c[1] = 0x10000;
  local_5c[2] = 0x100000;
  FUN_0214ce68(iVar2,local_5c + 2,local_5c + 1);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_5c[0xc],4,local_28);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_5c[0xc],0x494c,local_28);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0x802002);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x10,FUN_021527a8);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),0x20,FUN_02152848);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02152894);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),0x802001);
  func_0x021b409c(*(undefined4 *)(iVar2 + 4),0x802002);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x802000);
  *(undefined *)(param_1 + 0x46c) = (&DAT_0216d52a)[*(int *)(param_1 + 0x3f0) * 7];
  for (iVar6 = 0; iVar6 < *(char *)(param_1 + 0x46c); iVar6 = iVar6 + 1) {
    cVar1 = (&DAT_0216d52b)[iVar6 + *(int *)(param_1 + 0x3f0) * 7];
    uVar4 = FUN_0215e9e4(iVar2,cVar1 * 0x24 + 0x216f5e4,0,0x1f,1);
    iVar5 = param_1 + iVar6 * 4;
    *(undefined4 *)(iVar5 + 0xb4) = uVar4;
    local_5c[0] = (iVar6 * 0x13 + 0x1c) * 0x1000;
    FUN_02150070(*(undefined4 *)(iVar5 + 0xb4),local_5c);
    iVar5 = param_1 + iVar6 * 4;
    *(int *)(*(int *)(*(int *)(iVar5 + 0xb4) + 4) + 0x124) = (int)cVar1;
    piVar3 = *(int **)(*(int *)(iVar5 + 0xb4) + 4);
    (**(code **)(*piVar3 + 0x24))(piVar3,param_1);
    iVar5 = param_1 + iVar6 * 4;
    *(code **)(*(int *)(*(int *)(iVar5 + 0xb4) + 4) + 0xec) = FUN_02152714;
    *(undefined1 *)(*(int *)(*(int *)(iVar5 + 0xb4) + 4) + 0xb1) = 1;
  }
  for (iVar6 = 0; iVar5 = *(char *)(param_1 + 0x46c) + -1, iVar6 < iVar5; iVar6 = iVar6 + 1) {
    iVar5 = param_1 + iVar6 * 4;
    piVar3 = *(int **)(*(int *)(iVar5 + 0xb8) + 4);
    (**(code **)(*piVar3 + 0x160))(piVar3,1,*(undefined4 *)(*(int *)(iVar5 + 0xb4) + 4));
    iVar5 = param_1 + iVar6 * 4;
    piVar3 = *(int **)(*(int *)(iVar5 + 0xb4) + 4);
    (**(code **)(*piVar3 + 0x160))(piVar3,2,*(undefined4 *)(*(int *)(iVar5 + 0xb8) + 4));
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0xb4) + 4);
  (**(code **)(*piVar3 + 0x160))(piVar3,1,*(undefined4 *)(*(int *)(param_1 + iVar5 * 4 + 0xb4) + 4))
  ;
  piVar3 = *(int **)(*(int *)(param_1 + (*(char *)(param_1 + 0x46c) + -1) * 4 + 0xb4) + 4);
  (**(code **)(*piVar3 + 0x160))(piVar3,2,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 4));
  return iVar2;
}

