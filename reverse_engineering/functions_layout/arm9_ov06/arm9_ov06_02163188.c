
/* JUS-GAME BattleMapGimmick::BattleMapGimmick_Create [source-string]
   __FILE__="BattleMapGimmick.cpp" __FUNCTION__="BattleMapGimmick_Create" lines=[313, 340] passed to
   2 source-location call(s) */

int * BattleMapGimmick::BattleMapGimmick_Create
                (int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_124;
  undefined1 auStack_120 [256];
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (DAT_020afebc != '\0') {
    cVar1 = *(char *)(param_3 + 1);
  }
  if (DAT_020afebc != '\0' && cVar1 != '\0') {
    uStack_20 = param_4;
    piVar2 = (int *)thunk_FUN_0201a228(0x20,s_BattleMapGimmick_cpp_02172538,
                                       s_BattleMapGimmick_Create_02172420,0x139);
    FUN_020517fc(piVar2,0,0x20);
    *(undefined1 *)(piVar2 + 7) = *(undefined1 *)(param_3 + 1);
    piVar2[4] = param_1;
    iVar3 = FUN_02026f94();
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),piVar2);
    FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021634fc);
    local_124 = 0x89000;
    (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),&local_124);
    (**(code **)(**(int **)(iVar3 + 4) + 0x94))(*(int **)(iVar3 + 4),0x20000);
    *piVar2 = iVar3;
    FUN_020517fc(auStack_120,0,0x100);
    thunk_FUN_0207400c(auStack_120,s_stage__02172550);
    thunk_FUN_020741c4(auStack_120,*(undefined4 *)(&DAT_02092d08 + param_2 * 8));
    thunk_FUN_020741c4(auStack_120,s__gimmick_aar_02172558);
    iVar3 = FUN_020101f4(auStack_120,0);
    piVar2[1] = iVar3;
    iVar3 = FUN_0203b404();
    FUN_02163548(*(undefined4 *)(iVar3 + 0x88));
    piVar4 = (int *)FUN_02035e88(0x401200);
    if (piVar4[0xe] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar3 = piVar4[0xe];
    piVar2[2] = iVar3;
    piVar4 = *(int **)(iVar3 + 4);
    (**(code **)(*piVar4 + 0x50))(piVar4,1);
    FUN_02153324();
    (**(code **)(**(int **)(piVar2[1] + 8) + 0x50))();
    iVar3 = BattlePrmData::Battle_PrmDataInit(2,0);
    piVar2[6] = iVar3;
    *(undefined **)(iVar3 + 0x10) = &DAT_02172438;
    iVar3 = thunk_FUN_0201a228((short)(ushort)*(byte *)(piVar2 + 7) * 0x14,
                               s_BattleMapGimmick_cpp_02172538,s_BattleMapGimmick_Create_02172420,
                               0x154);
    piVar2[5] = iVar3;
    FUN_020517fc(iVar3,0,(short)(ushort)*(byte *)(piVar2 + 7) * 0x14);
    iVar3 = FUN_02083624(FUN_021635c0,0,0x2000,0x8002800,0);
    *(int *)(*(int *)(iVar3 + 0x10) + 0x6c) = piVar2[6];
    FUN_02163584(iVar3,1);
    FUN_021635a4(iVar3,1);
    piVar2[3] = iVar3;
    *(undefined1 *)(iVar3 + 0x39) = 0xc;
    piVar4 = (int *)(param_3 + 4);
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(piVar2 + 7); iVar3 = iVar3 + 1) {
      iVar5 = iVar3 * 0x14;
      *(int **)(piVar2[5] + iVar5 + 4) = piVar4;
      *(int **)(piVar2[5] + iVar5 + 8) = piVar2;
      *(int **)(piVar2[5] + iVar5 + 0xc) = piVar4 + 4;
      *(undefined1 *)(piVar2[5] + iVar5 + 0x12) = 0;
      (*(code *)(&PTR_FUN_021715c0)[*(byte *)(piVar4 + 3)])(piVar2[5] + iVar5);
      piVar4 = (int *)((int)piVar4 + *piVar4);
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

