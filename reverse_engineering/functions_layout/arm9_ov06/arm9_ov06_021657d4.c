
undefined4 FUN_021657d4(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  undefined4 local_30;
  int local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  int iStack_20;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar2 = *(int *)(param_1 + 0x154);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
    iStack_20 = param_4;
    FUN_02037c24(param_1 + 0x154,iVar2);
    FUN_02037b98(param_1 + 0x15c,iVar2);
    FUN_020517fc(&local_34,0,0x14);
    local_2c = param_4 + -1;
    local_24 = 0x4f;
    local_34 = iVar3;
    local_30 = param_3;
    iVar2 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_34,0x200,0x8afc200,0);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x6c) = *(undefined4 *)(param_1 + 0x20);
      FUN_02165074(iVar2,(int)local_28,(int)local_26);
      FUN_02165088(iVar2,1);
      FUN_021650b4(iVar2,1);
      FUN_021650a4(iVar2,0x14);
      if (iVar2 != 0) {
        FUN_0207a878(*(undefined4 *)(iVar2 + 0x14));
      }
      iVar4 = param_2 * 2 + 0x300000;
      FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 4),iVar4,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0xc) + 4) + 0x68) + 0x6c))();
      *(code **)(iVar3 + 0x14) = FUN_02165944;
      *(code **)(iVar3 + 0x28) = FUN_021661fc;
      *(code **)(iVar3 + 0x18) = FUN_02166288;
      *(char *)(iVar3 + 0x22) = (char)param_2;
      uVar1 = 1;
      *(undefined1 *)(iVar3 + 0x27) = 1;
      *(int *)(iVar3 + 0x1c) = iVar4;
      *(undefined1 *)(iVar3 + 0x23) = param_5;
      *(int *)(iVar3 + 0xc) = param_1;
      *(char *)(param_1 + 0x14d) = *(char *)(param_1 + 0x14d) + '\x01';
    }
  }
  return uVar1;
}

