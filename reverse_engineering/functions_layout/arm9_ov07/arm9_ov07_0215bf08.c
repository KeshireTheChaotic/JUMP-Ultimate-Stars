
void FUN_0215bf08(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = param_2 * 4;
  iVar7 = *(int *)(*(int *)(param_1 + 0x48) + iVar1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + iVar1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar1);
  uVar2 = FUN_0214f898(iVar6,0x67625053);
  piVar3 = *(int **)(iVar1 + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  local_1c = DAT_0216a208;
  local_18 = DAT_0216a20c;
  uVar4 = FUN_02020ed0(iVar6,0);
  FUN_02020eb4(iVar6,uVar4);
  uVar4 = FUN_0214f3bc(0,&local_1c,&DAT_02093c8c);
  FUN_02020e98(iVar6,uVar4);
  uVar4 = FUN_0214f474(&local_1c);
  uVar5 = FUN_0214f45c(&local_1c);
  func_0x021b5900(*(undefined4 *)(iVar6 + 4),uVar5,uVar4);
  FUN_021524c8(uVar2,param_3);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = param_4;
  piVar3 = *(int **)(iVar7 + 4);
  if (param_5 == '\0') {
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  }
  FUN_0215c10c(param_1,param_2,iVar7,0);
  return;
}

