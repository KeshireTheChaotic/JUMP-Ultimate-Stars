
undefined4
FUN_02164d48(uint param_1,undefined4 param_2,undefined4 param_3,short param_4,short param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short local_24;
  short local_22;
  undefined2 local_20;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar2 = *(int *)(DAT_02172988 + 0x154);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 8);
    FUN_02037c24(DAT_02172988 + 0x154,iVar2);
    FUN_02037b98(DAT_02172988 + 0x15c,iVar2);
    FUN_020517fc(&local_30,0,0x14);
    local_22 = param_5;
    local_20 = 0x4e;
    local_30 = uVar1;
    local_2c = param_2;
    local_28 = param_3;
    local_24 = param_4;
    if (param_1 == 0xc0) {
      iVar2 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_30,0x100,0x48afc200,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x30);
      FUN_02083b74(iVar2,FUN_02166780,1);
      *(code **)(iVar3 + 0x14) = FUN_0216682c;
      *(code **)(iVar3 + 0x18) = FUN_02166810;
      *(char *)(DAT_02172988 + 0x152) = *(char *)(DAT_02172988 + 0x152) + '\x01';
    }
    else if (param_1 == 0x3d) {
      iVar2 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_30,0x400,0x8afc200,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x30);
      *(code **)(iVar3 + 0x14) = FUN_02165c3c;
      *(code **)(iVar3 + 0x28) = FUN_02165c3c;
      *(undefined2 *)(iVar3 + 0x20) = 0xb4;
      *(undefined1 *)(iVar3 + 0x27) = 2;
    }
    else if ((param_1 < 0x34) || (0x39 < param_1)) {
      if ((param_1 < 0x18) || (0x1d < param_1)) {
        if ((param_1 < 8) || (0x15 < param_1)) {
          iVar2 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_30,0x100,0x8afc200,0);
        }
        else {
          iVar2 = FUN_020834d4(BattleMapItem::BattleMapItemInit,&local_30,0x100,0x4000,0x8afc200,0);
        }
      }
      else {
        iVar2 = FUN_020834d4(BattleMapItem::BattleMapItemInit,&local_30,0x100,0x8000,0x8afc200,0);
      }
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x30);
      *(undefined2 *)(iVar3 + 0x20) = 300;
    }
    else {
      iVar2 = FUN_02083624(BattleMapItem::BattleMapItemInit,&local_30,0x100,0x8afc200,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x30);
      *(undefined2 *)(iVar3 + 0x20) = 300;
      *(code **)(iVar3 + 0x14) = FUN_02166ac8;
      *(code **)(iVar3 + 0x28) = FUN_02166ac8;
    }
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x6c) = *(undefined4 *)(DAT_02172988 + 0x20);
    FUN_02165074(iVar2,(int)local_24,(int)local_22);
    FUN_02165088(iVar2,1);
    FUN_021650a4(iVar2,0x14);
    if (iVar2 != 0) {
      FUN_0207a878(*(undefined4 *)(iVar2 + 0x14));
    }
    iVar4 = *(int *)(iVar2 + 0xc);
    FUN_02023894(*(undefined4 *)(iVar4 + 4),param_1 + 0x300000,0);
    (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
    *(char *)(iVar3 + 0x22) = (char)param_1;
    *(uint *)(iVar3 + 0x1c) = param_1 + 0x300000;
    *(int *)(iVar3 + 0xc) = DAT_02172988;
    if (param_1 != 0xc0) {
      FUN_0207ce7c(*(undefined4 *)(iVar2 + 0x10),0x10000000);
      FUN_021650b4(iVar2,1);
      *(code **)(iVar3 + 0x10) = FUN_02165578;
    }
    uVar1 = 1;
  }
  return uVar1;
}

