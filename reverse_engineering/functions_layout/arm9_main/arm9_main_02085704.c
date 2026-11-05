
/* JUS-GAME BattleMapObj::BattleMapMoveFloorCreate [source-string] __FILE__="BattleMapObj.cpp"
   __FUNCTION__="BattleMapMoveFloorCreate" lines=[253, 262] passed to 2 source-location call(s) */

int * BattleMapObj::BattleMapMoveFloorCreate(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ushort *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_128;
  undefined1 auStack_124 [256];
  
                    /* JUS-TAG
                       strings=["BattleMapMoveFloorCreate","BattleMapObj.cpp","_floor.aar","stage/"]
                        */
  puVar6 = (ushort *)(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\0') {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)jus_AllocDebug(0x14,s_BattleMapObj_cpp_020a0114,
                                   s_BattleMapMoveFloorCreate_020a00d8,0xfd);
    FUN_020517fc(piVar2,0,0x14);
    *(undefined1 *)(piVar2 + 4) = *(undefined1 *)(param_2 + 1);
    piVar2[3] = param_1;
    iVar3 = jus_AllocDebug((uint)*(byte *)(piVar2 + 4) << 2,s_BattleMapObj_cpp_020a0114,
                           s_BattleMapMoveFloorCreate_020a00d8,0x106);
    piVar2[2] = iVar3;
    FUN_020517fc(iVar3,0,(uint)*(byte *)(piVar2 + 4) << 2);
    if (param_1 != 0) {
      iVar3 = FUN_02026f94();
      (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),piVar2);
      local_128 = 0xa4000;
      (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_128);
      (**(code **)(**(int **)(iVar3 + 4) + 0x94))(*(int **)(iVar3 + 4),0x20000);
      FUN_02028384(*(undefined4 *)(iVar3 + 4),&LAB_020860c0);
      *piVar2 = iVar3;
    }
    FUN_020517fc(auStack_124,0,0x100);
    thunk_FUN_0207400c(auStack_124,s_stage__020a0128);
    thunk_FUN_020741c4(auStack_124,*(undefined4 *)(&DAT_02092d08 + param_3 * 8));
    thunk_FUN_020741c4(auStack_124,s__floor_aar_020a0130);
    iVar3 = FUN_020101f4(auStack_124,0);
    piVar2[1] = iVar3;
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(piVar2 + 4); iVar3 = iVar3 + 1) {
      *(char *)((int)puVar6 + 0x23) = (char)param_3;
      uVar4 = FUN_02083624(BattleMapMoveFloorInit,puVar6,0x800,0,0);
      *(undefined4 *)(piVar2[2] + iVar3 * 4) = uVar4;
      iVar7 = *(int *)(piVar2[2] + iVar3 * 4);
      piVar8 = *(int **)(iVar7 + 0x30);
      if (*(char *)((int)piVar8 + 0x17) != '\0') {
        iVar9 = piVar8[1] + (uint)*(byte *)((int)piVar8 + 0x16) * 0x10;
        FUN_02085a04(iVar7,(int)*(short *)(iVar9 + 8),(int)*(short *)(iVar9 + 10));
        *(undefined2 *)(piVar8 + 5) = *(undefined2 *)(iVar9 + 0xc);
      }
      iVar9 = *(int *)(*(int *)(iVar7 + 0x10) + 0x5c);
      *(uint *)(iVar9 + 0x34) = *(uint *)(iVar9 + 0x34) | 2;
      *(undefined2 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x5c) + 0x3c) = 0;
      sVar1 = 0;
      if (param_1 != 0) {
        sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x30) + (short)iVar3;
      }
      *(short *)((int)piVar8 + 0x1a) = sVar1;
      *piVar8 = param_1;
      FUN_0207d16c(*(undefined4 *)(iVar7 + 0x10),(int)*(short *)((int)piVar8 + 0x1a));
      if (iVar7 != 0) {
        FUN_0207a878(*(undefined4 *)(iVar7 + 0x14));
      }
      FUN_02023894(*(undefined4 *)(*(int *)(iVar7 + 8) + 4),*(byte *)((int)puVar6 + 0x1f) + 0x401100
                   ,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar7 + 8) + 4) + 0x68) + 0x6c))();
      piVar5 = *(int **)(*(int *)(iVar7 + 8) + 4);
      if (param_4 == 0) {
        (**(code **)(*piVar5 + 0xd4))(piVar5,0);
      }
      else {
        (**(code **)(*piVar5 + 0xd4))(piVar5,*(undefined4 *)(param_4 + 4));
      }
      if (DAT_020afebc == '\0') {
        FUN_02083b74(iVar7,FUN_020865b8,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(iVar7 + 8) + 4) + 0x68) + 0x70))();
      }
      piVar8[0xc] = *(byte *)((int)puVar6 + 0x1f) + 0x401100;
      puVar6 = (ushort *)((int)puVar6 + (uint)*puVar6);
    }
  }
  return piVar2;
}

