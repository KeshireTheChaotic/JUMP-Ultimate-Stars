
/* JUS-GAME BattleMapObj::BattleMapMoveFloorInitNormal [source-string] __FILE__="BattleMapObj.cpp"
   __FUNCTION__="BattleMapMoveFloorInitNormal" lines=[648] passed to 1 source-location call(s) */

void BattleMapObj::BattleMapMoveFloorInitNormal
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
                    /* JUS-TAG strings=["BattleMapMoveFloorInitNormal","BattleMapObj.cpp"] */
  iVar7 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x10);
  if (DAT_020afebc == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  else {
    uVar3 = jus_AllocDebug((uint)*(byte *)(param_1 + 0x17) << 4,s_BattleMapObj_cpp_020a0114,
                           s_BattleMapMoveFloorInitNormal_020a00f4,0x288,iVar7,iVar6,param_4);
    *(undefined4 *)(param_1 + 4) = uVar3;
    for (uVar9 = 0; uVar9 < *(byte *)(param_1 + 0x17); uVar9 = uVar9 + 1) {
      cVar1 = *(char *)(param_2 + uVar9 * 8);
      iVar4 = param_2 + uVar9 * 8;
      piVar8 = (int *)(*(int *)(param_1 + 4) + uVar9 * 0x10);
      if (cVar1 == '\0') {
        *piVar8 = (int)*(short *)(iVar4 + 4) << 8;
        iVar6 = *(short *)(iVar4 + 6) * 0x100 - iVar6 >> 8;
        piVar8[1] = (int)*(short *)(iVar4 + 6) << 8;
        iVar7 = *piVar8 - iVar7 >> 8;
        FUN_0200c954(iVar7 * iVar7 + iVar6 * iVar6);
        uVar3 = FUN_0200cb80();
        uVar3 = FUN_0200c9e4(0x43800000,uVar3);
        uVar5 = FUN_0200c954((int)*(short *)(&DAT_02092ea8 + (uint)*(byte *)(param_1 + 0x19) * 2));
        FUN_0200c5ac(uVar3,uVar5);
        uVar2 = FUN_0200c914();
        *(undefined2 *)(piVar8 + 3) = uVar2;
        uVar2 = FUN_0200d12c(iVar7 << 8,(short)piVar8[3]);
        *(undefined2 *)(piVar8 + 2) = uVar2;
        uVar2 = FUN_0200d12c(iVar6 << 8,(short)piVar8[3]);
        *(undefined2 *)((int)piVar8 + 10) = uVar2;
        *(short *)(piVar8 + 3) = (short)piVar8[3] + -1;
      }
      else if (cVar1 == '\x01') {
        *(undefined2 *)(piVar8 + 2) = 0;
        *(undefined2 *)((int)piVar8 + 10) = 0;
        *piVar8 = iVar7;
        piVar8[1] = iVar6;
        *(short *)(piVar8 + 3) = (short)*(undefined4 *)(iVar4 + 4);
      }
      iVar7 = *piVar8;
      iVar6 = piVar8[1];
    }
  }
  return;
}

