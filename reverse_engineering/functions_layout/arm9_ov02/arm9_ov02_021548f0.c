
void FUN_021548f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int local_d4;
  int local_d0 [4];
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84 [4];
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  undefined4 uStack_28;
  
  iVar10 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar13 = (uint)*(byte *)(iVar10 + 0x35d) * 0x3c + *(int *)(*(int *)(iVar10 + 0x330) + 0x30);
  uStack_28 = param_4;
  uVar2 = FUN_02154380(*(undefined4 *)(iVar10 + 8));
  FUN_0214fa00(&local_34,uVar2);
  local_68 = *(undefined4 *)(iVar10 + 0x344);
  sVar1 = *(short *)(iVar10 + 0x354);
  local_70 = -local_34;
  FUN_02154e54(&local_6c,&local_70,&local_68);
  local_34 = local_6c + sVar1 * 0x1000;
  sVar1 = *(short *)(iVar10 + 0x356);
  local_84[3] = -local_30;
  FUN_02154e54(&local_74,local_84 + 3,&local_68);
  local_30 = local_74 + sVar1 * 0x1000;
  for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar13 + 0x2c); iVar7 = iVar7 + 1) {
    iVar12 = iVar13 + iVar7;
    iVar9 = *(int *)(iVar10 + 0xd8 + iVar7 * 0x28);
    iVar11 = (uint)*(byte *)(iVar12 + 0x2d) * 0x48 + *(int *)(*(int *)(iVar10 + 0x330) + 0x34);
    pcVar6 = *(code **)(**(int **)(iVar9 + 4) + 0xd8);
    iVar8 = iVar10 + 0xd8 + iVar7 * 0x28;
    (*pcVar6)(*(int **)(iVar9 + 4),1);
    iVar4 = local_30 + *(short *)(iVar11 + 0x2e) * -0x1000;
    iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc;
    if ((iVar4 < 0x101) && (-0x101 < iVar4)) {
      pcVar5 = (code *)(uint)*(byte *)(*(int *)(iVar10 + 0x330) + 0x56);
      bVar14 = pcVar5 != (code *)0x1;
      if (!bVar14) {
        pcVar6 = (code *)(uint)*(byte *)(iVar10 + 0x35c);
        pcVar5 = (code *)(uint)*(byte *)(iVar12 + 0x2d);
      }
      if (((bVar14 || pcVar6 != pcVar5) || (iVar4 < -0x20)) || (0x20 < iVar4)) {
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            uVar2 = FUN_0200c954();
            uVar2 = FUN_0200c5ac(uVar2,0x43e00000);
            FUN_0200c9e4(0x45800000,uVar2);
            local_a8 = FUN_0200c8e0();
            FUN_02151858(iVar9,&local_a8);
            FUN_021518d4(&local_58);
            sVar1 = *(short *)(iVar10 + 0x354);
            local_b4 = *(short *)(iVar11 + 0x2c) * 0x1000 - local_34;
            uVar2 = FUN_0200c954(0x1c0 - iVar4);
            FUN_02154ea8(&local_b0,&local_b4,uVar2);
            iVar12 = local_34;
            iVar3 = FUN_0200d12c(local_b0,0x1c0);
            local_ac = iVar12 + iVar3 + sVar1 * -0x1000;
            FUN_02153260(&local_ac,&local_68);
            local_58 = local_ac;
            sVar1 = *(short *)(iVar10 + 0x356);
            local_c0 = *(short *)(iVar11 + 0x2e) * 0x1000 - local_30;
            uVar2 = FUN_0200c954(0x1c0 - iVar4);
            FUN_02154ea8(&local_bc,&local_c0,uVar2);
            iVar12 = local_30;
            iVar3 = FUN_0200d12c(local_bc,0x1c0);
            local_b8 = iVar12 + iVar3 + sVar1 * -0x1000;
            FUN_02153260(&local_b8,&local_68);
            local_54 = local_b8;
            FUN_0214f960(iVar9,&local_58);
            for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar9 = iVar9 + 1) {
              uVar2 = FUN_0200c954(iVar4 + 0x1c0);
              uVar2 = FUN_0200c5ac(uVar2,0x43e00000);
              FUN_0200c9e4(0x45800000,uVar2);
              local_d0[3] = FUN_0200c8e0();
              FUN_02154e84(*(undefined4 *)(iVar8 + iVar9 * 4 + 0x14),local_d0 + 3);
            }
          }
          else {
            for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar4 = iVar4 + 1) {
              local_d0[2] = 0x1000;
              FUN_02154e84(*(undefined4 *)(iVar8 + iVar4 * 4 + 0x14),local_d0 + 2);
            }
            local_d0[1] = 0x1000;
            FUN_02151858(iVar9,local_d0 + 1);
            FUN_021518d4(&local_64);
            local_d0[0] = ((int)*(short *)(iVar11 + 0x2c) - (int)*(short *)(iVar10 + 0x354)) *
                          0x1000;
            FUN_02153260(local_d0,&local_68);
            local_64 = local_d0[0];
            local_d4 = ((int)*(short *)(iVar11 + 0x2e) - (int)*(short *)(iVar10 + 0x356)) * 0x1000;
            FUN_02153260(&local_d4,&local_68);
            local_60 = local_d4;
            FUN_0214f960(iVar9,&local_64);
          }
        }
        else {
          iVar4 = 0x1c0 - iVar4;
          uVar2 = FUN_0200c954(iVar4);
          uVar2 = FUN_0200c5ac(uVar2,0x43e00000);
          FUN_0200c9e4(0x45800000,uVar2);
          local_8c = FUN_0200c8e0();
          FUN_02151858(iVar9,&local_8c);
          FUN_021518d4(&local_4c);
          sVar1 = *(short *)(iVar10 + 0x354);
          local_98 = *(short *)(iVar11 + 0x2c) * 0x1000 - local_34;
          uVar2 = FUN_0200c954(iVar4);
          FUN_02154ea8(&local_94,&local_98,uVar2);
          iVar8 = local_34;
          iVar12 = FUN_0200d12c(local_94,0x1c0);
          local_90 = iVar8 + iVar12 + sVar1 * -0x1000;
          FUN_02153260(&local_90,&local_68);
          local_4c = local_90;
          sVar1 = *(short *)(iVar10 + 0x356);
          local_a4 = *(short *)(iVar11 + 0x2e) * 0x1000 - local_30;
          uVar2 = FUN_0200c954(iVar4);
          FUN_02154ea8(&local_a0,&local_a4,uVar2);
          iVar4 = local_30;
          iVar8 = FUN_0200d12c(local_a0,0x1c0);
          local_9c = iVar4 + iVar8 + sVar1 * -0x1000;
          FUN_02153260(&local_9c,&local_68);
          local_48 = local_9c;
          FUN_0214f960(iVar9,&local_4c);
        }
      }
      else {
        for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar4 = iVar4 + 1) {
          local_84[2] = 0x1000;
          FUN_02154e84(*(undefined4 *)(iVar8 + iVar4 * 4 + 0x14),local_84 + 2);
        }
        local_84[1] = 0x1000;
        FUN_02151858(iVar9,local_84 + 1);
        FUN_021518d4(&local_40);
        local_84[0] = ((int)*(short *)(iVar11 + 0x2c) - (int)*(short *)(iVar10 + 0x354)) * 0x1000;
        FUN_02153260(local_84,&local_68);
        local_40 = local_84[0];
        local_88 = ((int)*(short *)(iVar11 + 0x2e) - (int)*(short *)(iVar10 + 0x356)) * 0x1000;
        FUN_02153260(&local_88,&local_68);
        local_3c = local_88;
        FUN_0214f960(iVar9,&local_40);
      }
    }
  }
  return;
}

