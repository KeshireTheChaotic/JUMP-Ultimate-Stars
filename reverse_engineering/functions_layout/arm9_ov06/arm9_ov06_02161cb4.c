
/* WARNING: Control flow encountered bad instruction data */
/* JUS-GAME BattleMap::BattleMapInit [source-string] __FILE__="BattleMap.cpp"
   __FUNCTION__="BattleMapInit" lines=[331] passed to 1 source-location call(s) */

void BattleMap::BattleMapInit(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uStack_228;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  
  piVar2 = (int *)thunk_FUN_0201a228(0x48,uRam0216208c,uRam02162090,uRam02162094);
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_020517fc(piVar2,0,0x48);
  iVar3 = FUN_02026f94();
  *piVar2 = iVar3;
  uStack_228 = 0x8a000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&uStack_228);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),PTR_FUN_02162098);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
  (**(code **)(**(int **)(*piVar2 + 4) + 0x94))(*(int **)(*piVar2 + 4),0x20000);
  FUN_020517fc(auStack_224,0,0x100);
  FUN_020517fc(auStack_124,0,0x100);
  uVar7 = *(undefined4 *)(PTR_DAT_0216209c + param_1 * 8);
  thunk_FUN_0207400c(auStack_224,PTR_s_stage__021620a0);
  thunk_FUN_020741c4(auStack_224,uVar7);
  thunk_FUN_020741c4(auStack_224,PTR_DAT_021620a4);
  thunk_FUN_0207400c(auStack_124,PTR_s_stage__021620a0);
  thunk_FUN_020741c4(auStack_124,uVar7);
  thunk_FUN_020741c4(auStack_124,PTR_DAT_021620a8);
  iVar3 = FUN_020101f4(PTR_s_stage_stage_aar_021620ac,0);
  piVar2[3] = iVar3;
  iVar3 = ALStreamImp::Create(auStack_224);
  piVar2[1] = iVar3;
  uVar8 = ALStreamImp::Create(auStack_124);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (param_2 == 1) {
    uVar7 = 1;
  }
  piVar2[2] = (int)uVar8;
  if (param_2 != 1) {
    uVar7 = 0;
  }
  iVar3 = BattleMapBG::BattleMapBG_Create
                    (param_1,*(undefined4 *)(*(int *)PTR_DAT_021620b0 + 4),piVar2[1],0,1,uVar7);
  piVar2[10] = iVar3;
  iVar3 = (**(code **)(**(int **)(piVar2[1] + 4) + 0x2c))(*(int **)(piVar2[1] + 4),0);
  iVar4 = iVar3 + *(int *)(iVar3 + 4);
  piVar2[4] = iVar4;
  piVar2[5] = iVar4 + 0x34;
  piVar5 = (int *)(**(code **)(**(int **)(piVar2[2] + 4) + 0x2c))(*(int **)(piVar2[2] + 4),0);
  iVar4 = BattleMapObj::BattleMapMoveFloorCreate
                    (piVar2,(int)piVar5 + *piVar5,param_1,
                     *(undefined4 *)(*(int *)PTR_DAT_021620b0 + 4));
  piVar2[0xc] = iVar4;
  puVar1 = PTR_DAT_021620b4;
  if ((*(short *)(piVar2[4] + 0x2e) != 0) &&
     (piVar2[6] = iVar3 + *(int *)(iVar3 + 8), puVar1[0x2c] == '\0')) {
    for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(piVar2[4] + 0x2e); iVar4 = iVar4 + 1) {
      iVar6 = iVar4 * 0x18 + piVar2[6];
      *(byte *)(iVar6 + 0x15) = *(byte *)(iVar6 + 0x15) & 0xf7;
    }
  }
  iVar4 = BattleMapItem::BattleMapLoadItem((int)piVar5 + piVar5[1],param_3,param_4);
  piVar2[9] = iVar4;
  iVar4 = BattleMapItem::BattleMapGripLoad(iVar4,(int)piVar5 + piVar5[2]);
  piVar2[0xb] = iVar4;
  if (*(char *)(piVar2[4] + 0x2c) != '\0') {
    BattleMapWall::BattleMapInitWall(piVar2,iVar3 + *(int *)(iVar3 + 0xc));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

