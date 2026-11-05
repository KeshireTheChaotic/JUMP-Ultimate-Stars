
/* JUS-GAME BattleMapObj::BattleMapMoveFloorInit [source-string] __FILE__="BattleMapObj.cpp"
   __FUNCTION__="BattleMapMoveFloorInit" lines=[573] passed to 1 source-location call(s) */

int BattleMapObj::BattleMapMoveFloorInit
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* JUS-TAG strings=["BattleMapMoveFloorInit","BattleMapObj.cpp"] */
  iVar1 = jus_AllocDebug(0x38,s_BattleMapObj_cpp_020a0114,s_BattleMapMoveFloorInit_020a0090,0x23d);
  FUN_020517fc(iVar1,0,0x38);
  *(int *)(iVar1 + 0xc) = (int)*(short *)(param_2 + 4) << 8;
  *(int *)(iVar1 + 0x10) = (int)*(short *)(param_2 + 6) << 8;
  *(undefined1 *)(iVar1 + 0x19) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(iVar1 + 0x16) = 0;
  *(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(param_2 + 0x1e);
  *(short *)(iVar1 + 0x1c) = (short)*(char *)(param_2 + 2) << 8;
  *(short *)(iVar1 + 0x1e) = (short)*(char *)(param_2 + 3) << 8;
  *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(param_2 + 0x20);
  *(uint *)(iVar1 + 8) = param_2 + 0x24 + (uint)*(byte *)(param_2 + 0x1d) * 8;
  (*(code *)(&PTR_BattleMapMoveFloorInitNormal_020a00c0)[*(byte *)(param_2 + 0x20)])(iVar1);
  iVar2 = FUN_0203b3e4();
  FUN_02085aac(param_1,0x401100,*(undefined4 *)(iVar2 + 0x88),0x400,0xa3,param_4);
  FUN_02083b74(param_1,FUN_0208608c,0);
  *(code **)(param_1 + 0x28) = FUN_020865d8;
  iVar2 = *(int *)(iVar1 + 0x10);
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x50);
  piVar3[3] = *(int *)(iVar1 + 0xc) << 4;
  piVar3[4] = iVar2 << 4;
  piVar3[5] = 0;
  if (*(byte *)(piVar3 + 9) != (*(byte *)(piVar3 + 9) | 1)) {
    (**(code **)(*piVar3 + 0x18))();
  }
  *(byte *)(piVar3 + 9) = *(byte *)(piVar3 + 9) | 0x31;
  return iVar1;
}

