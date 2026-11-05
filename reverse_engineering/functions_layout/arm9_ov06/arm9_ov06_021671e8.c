
/* JUS-GAME BattleMapWall::BattleMapInitWall [source-string] __FILE__="BattleMapWall.cpp"
   __FUNCTION__="BattleMapInitWall" lines=[199] passed to 1 source-location call(s) */

void BattleMapWall::BattleMapInitWall(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  uVar2 = jus_AllocDebug((short)(ushort)*(byte *)(*(int *)(param_1 + 0x10) + 0x2c) * 0x34,
                         s_BattleMapWall_cpp_02172660,s_BattleMapInitWall_0217264c,199);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  FUN_020517fc(uVar2,0,(short)(ushort)*(byte *)(*(int *)(param_1 + 0x10) + 0x2c) * 0x34);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18);
  for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x2c); iVar8 = iVar8 + 1)
  {
    iVar5 = iVar8 * 0x34;
    iVar3 = iVar8 * 0x14;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
    iVar11 = param_2 + iVar3;
    iVar4 = *(int *)(param_1 + 0x18);
    iVar7 = *(short *)(param_2 + iVar3) * 0x18;
    *(undefined2 *)((int)puVar9 + 0x22) = *(undefined2 *)(iVar11 + 2);
    piVar10 = (int *)(iVar4 + iVar7);
    *(undefined2 *)((int)puVar9 + 0x1a) = *(undefined2 *)(iVar11 + 2);
    *(undefined2 *)(puVar9 + 6) = *(undefined2 *)(param_2 + iVar3);
    *(undefined2 *)(puVar9 + 9) = *(undefined2 *)(iVar11 + 4);
    *(undefined2 *)((int)puVar9 + 0x26) = *(undefined2 *)(iVar11 + 6);
    *(undefined2 *)(puVar9 + 10) = *(undefined2 *)(iVar11 + 8);
    *(undefined2 *)((int)puVar9 + 0x2a) = *(undefined2 *)(iVar11 + 10);
    *(undefined1 *)((int)puVar9 + 0x2d) = *(undefined1 *)(iVar11 + 0x12);
    *(undefined1 *)((int)puVar9 + 0x2e) = *(undefined1 *)(iVar11 + 0x13);
    *(undefined1 *)(puVar9 + 0xb) = 0;
    *(short *)(puVar9 + 7) = *(short *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x1a) / 2;
    uVar1 = FUN_0200d12c((int)*(short *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x1a),5);
    *(undefined2 *)((int)puVar9 + 0x1e) = uVar1;
    *(undefined2 *)(puVar9 + 8) = 0;
    *(undefined1 *)((int)puVar9 + 0x2f) = *(undefined1 *)(iVar11 + 0xc);
    *(undefined1 *)(puVar9 + 0xc) = *(undefined1 *)(iVar11 + 0xd);
    iVar3 = FUN_0203b414(1);
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
    DAT_02093c08 = DAT_02093c08 + -1;
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = uVar6;
    FUN_0214f068(&local_30,uVar2);
    iVar3 = (piVar10[1] >> 8) * 0x1000 - local_30;
    FUN_021536c4(&local_2c,uVar2);
    iVar7 = (*(int *)(iVar4 + iVar7) >> 8) * 0x1000 - local_2c;
    uVar6 = FUN_02167e10(uVar12,0,(int)((iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) * 0x10) >> 0x10,
                         (int)((iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) * 0x10) >> 0x10,uVar2,0x32);
    *puVar9 = uVar6;
    if (*(char *)(iVar11 + 0xe) != -1) {
      FUN_0214f068(&local_38,uVar2);
      iVar7 = ((piVar10[1] >> 8) + -0x10) * 0x1000 - local_38;
      FUN_021536c4(&local_34,uVar2);
      iVar3 = (*piVar10 >> 8) * 0x1000 - local_34;
      uVar6 = FUN_02167e10(uVar12,(int)*(char *)(iVar11 + 0xe),
                           (int)((iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) * 0x10) >> 0x10,
                           (int)((iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) * 0x10) >> 0x10,uVar2,0x2d
                          );
      puVar9[1] = uVar6;
    }
    if (*(char *)(iVar11 + 0xf) != -1) {
      FUN_0214f068(&local_40,uVar2);
      iVar7 = ((piVar10[1] >> 8) + 0x38) * 0x1000 - local_40;
      FUN_021536c4(&local_3c,uVar2);
      iVar3 = (*piVar10 >> 8) * 0x1000 - local_3c;
      uVar6 = FUN_02167e10(uVar12,(int)*(char *)(iVar11 + 0xf),
                           (int)((iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) * 0x10) >> 0x10,
                           (int)((iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) * 0x10) >> 0x10,uVar2,0x2d
                          );
      puVar9[2] = uVar6;
    }
    if (*(char *)(iVar11 + 0x10) != -1) {
      FUN_0214f068(&local_48,uVar2);
      iVar7 = (piVar10[1] >> 8) * 0x1000 - local_48;
      FUN_021536c4(&local_44,uVar2);
      iVar3 = ((*piVar10 >> 8) + -0x10) * 0x1000 - local_44;
      uVar6 = FUN_02167e10(uVar12,(int)*(char *)(iVar11 + 0x10),
                           (int)((iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) * 0x10) >> 0x10,
                           (int)((iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) * 0x10) >> 0x10,uVar2,0x2d
                          );
      puVar9[3] = uVar6;
    }
    if (*(char *)(iVar11 + 0x11) != -1) {
      FUN_0214f068(&local_50,uVar2);
      iVar7 = (piVar10[1] >> 8) * 0x1000 - local_50;
      FUN_021536c4(&local_4c,uVar2);
      iVar3 = ((*piVar10 >> 8) + 0x40) * 0x1000 - local_4c;
      uVar6 = FUN_02167e10(uVar12,(int)*(char *)(iVar11 + 0x11),
                           (int)((iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) * 0x10) >> 0x10,
                           (int)((iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) * 0x10) >> 0x10,uVar2,0x2d
                          );
      puVar9[4] = uVar6;
    }
    iVar7 = DAT_02093c08 + 1;
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = iVar7;
    if (*(char *)((int)puVar9 + 0x2d) != -1) {
      FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)((int)puVar9 + 0x2d),0);
    }
    if (*(char *)((int)puVar9 + 0x2e) != -1) {
      FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)((int)puVar9 + 0x2e),0);
    }
  }
  return;
}

