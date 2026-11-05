
void FUN_02165944(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_38;
  uint local_34;
  ushort local_28;
  short local_26;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0xfc))();
  iVar10 = *(int *)(param_2 + 0xc);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x150) & 0xf;
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  uVar14 = (uint)*(byte *)(*(int *)(iVar10 + 0x28) + (uint)*(byte *)(param_2 + 0x22) * 4 + 1);
  iVar13 = 1;
  local_34 = 0;
  if (uVar3 != 0) {
    local_34 = *(uint *)(DAT_02172960 + (uint)(byte)(&DAT_021715f0)[uVar3] * 4 + 0x4c);
  }
  FUN_02165eb0(param_1,&local_28);
  uVar2 = local_28;
  if (1 < uVar14) {
    uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    uVar2 = uVar2 & 0x7ff;
  }
  local_38 = (int)(short)uVar2;
  uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  iVar5 = -0x500 - (uVar3 & 0x3ff);
  iVar12 = 0;
  do {
    if ((int)uVar14 <= iVar12) {
      *(code **)(param_2 + 0x10) = FUN_02165660;
      *(code **)(param_2 + 0x14) = FUN_02165c00;
      FUN_0207342c(0x7a,0x38);
      FUN_02083b74(param_1,FUN_021657a4,1);
      return;
    }
    uVar6 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar6,1000000);
    cVar1 = *(char *)(iVar10 + 0x153);
    if (cVar1 == -1) {
      uVar7 = 0;
      uVar3 = extraout_r1;
      while (uVar11 = 0, uVar7 < 0xc) {
        uVar9 = *(uint *)((uint)*(byte *)((local_34 & 0xff) + *(int *)(DAT_02172960 + 0x158) * 4 +
                                         0x21715f4) * 0x30 + iVar10 + uVar7 * 4 + 0x88);
        uVar11 = uVar7;
        if (uVar3 < uVar9) break;
        uVar7 = uVar7 + 1 & 0xff;
        uVar3 = uVar3 - uVar9;
      }
      cVar1 = FUN_0215b3e0((&DAT_02171630)[uVar11]);
      cVar1 = (&DAT_02171624)[uVar11] + cVar1 * '\x02';
    }
    FUN_02164d48(cVar1,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),local_38,
                 iVar5 * 0x10000 >> 0x10,0);
    uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    iVar8 = iVar13 * (uVar3 & 0x7ff);
    uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    iVar13 = iVar13 * -0x1000000 >> 0x18;
    iVar5 = (int)local_26 + ((int)((-0x500 - (uVar3 & 0x3ff)) * 0x10000) >> 0x10);
    local_38 = ((int)(short)local_28 + (iVar8 * 0x10000 >> 0x10)) * 0x10000 >> 0x10;
    iVar12 = iVar12 + 1;
  } while( true );
}

