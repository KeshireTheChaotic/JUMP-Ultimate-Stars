
/* WARNING: Possible PIC construction at 0x021558ba: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x021554ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int extraout_r1;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iStack_1ac;
  int iStack_19c;
  int iStack_18c;
  undefined *puStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int aiStack_ec [42];
  undefined1 auStack_44 [20];
  undefined2 uStack_30;
  undefined4 uStack_18;
  
  uVar2 = _DAT_021d5154;
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 4);
  uStack_18 = param_4;
  iVar1 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_0216bd84,s_Create_0216c2b4,0x159);
  if (iVar1 != 0) {
    func_0x021ae114(iVar1,uVar11,uVar2,CreateDrawFunc);
  }
  iVar1 = FUN_0214d37c();
  iVar9 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar9 + 0x170) = 0xe8;
  *(undefined4 *)(iVar9 + 0x174) = 0x20;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x180) = 4;
  FUN_0214f7c0(iVar1,*(undefined4 *)(param_1 + 0x4c));
  aiStack_ec[0x28] = 0x2c000;
  aiStack_ec[0x29] = 0x4000;
  FUN_021511c8(iVar1,aiStack_ec + 0x29,aiStack_ec + 0x28);
  FUN_0214d354(iVar1,0);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
  func_0x021b7744(*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x13c) = 1;
  aiStack_ec[0x27] = 0xfe000;
  FUN_0214e6c0(iVar1,aiStack_ec + 0x27);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x144) = 1;
  *(int *)(param_1 + 0x30) = iVar1;
  iVar9 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar9 + 0x88));
  uVar2 = func_0x021caa0c(s_font_dsfont_aft_0216c3f8,0,0);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = func_0x021caa0c(s_font_jskfont_aft_0216c408,0,0);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  FUN_0214f834();
  iStack_1ac = 0;
  do {
    iVar9 = param_1 + iStack_1ac;
    *(undefined1 *)(iVar9 + 0xfc) = 0;
    uVar10 = 0;
    do {
      iVar3 = FUN_02072258((&DAT_02169d28)[uVar10],*(undefined1 *)(iVar9 + uVar10 * 0x14 + 0x178));
      if (iVar3 != 0) {
        *(byte *)(iVar9 + 0xfc) = *(byte *)(iVar9 + 0xfc) | (byte)(1 << uVar10);
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 4);
    *(undefined1 *)(iVar9 + 0x110) = *(undefined1 *)(iVar9 + 0xfc);
    iStack_1ac = iStack_1ac + 1;
  } while (iStack_1ac < 0x14);
  iVar9 = 0;
  do {
    func_0x021ae3a4(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4));
    iVar3 = FUN_0214d37c();
    FUN_0214d354(iVar3,0);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    uStack_140 = 0xfe000;
    FUN_0214e6c0(iVar3,&uStack_140);
    iVar4 = Create(iVar3,_DAT_021d5154);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    uStack_130 = 0;
    uStack_12c = 0;
    FUN_021511c8(iVar4,&uStack_12c,&uStack_130);
    uStack_134 = 0xfe000;
    FUN_0214e6c0(iVar4,&uStack_134);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    if (*(int *)(param_1 + 0xf4) == iVar9) {
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),1);
    }
    else {
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    }
    *(code **)(*(int *)(iVar4 + 4) + 0xdc) = FUN_02156f5c + 1;
    uVar2 = FUN_02150a40(0,&DAT_0216c1e0,&DAT_02093c8c);
    FUN_02020e98(iVar4,uVar2);
    iVar5 = FUN_0203b404();
    iVar5 = FUN_0214fba8(*(undefined4 *)(iVar5 + 0x88),0x8b0000,0,0xfe);
    uStack_13c = 0x10000;
    uStack_138 = 0x6b000;
    FUN_021511c8(iVar5,&uStack_138,&uStack_13c);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    FUN_0214e688(iVar4,iVar5);
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),iVar4);
    *(undefined1 **)(*(int *)(iVar3 + 4) + 0xdc) = &LAB_02156edc_1;
    *(code **)(*(int *)(iVar3 + 4) + 0xe0) = FUN_02156f1c + 1;
    iVar4 = Create(iVar3,_DAT_021d5154);
    uStack_f8 = 0;
    uStack_f4 = 0;
    FUN_021511c8(iVar4,&uStack_f4,&uStack_f8);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    uStack_fc = 0x61000;
    FUN_0214e6c0(iVar4,&uStack_fc);
    uStack_100 = 0x84000;
    FUN_0214ffd0(iVar4,&uStack_100);
    FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_02156a60 + 1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    uVar10 = (uint)*(byte *)(iVar9 + param_1 + (*(uint *)(param_1 + 0xf8) & 0xff) * 0x14 + 0x128);
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(uint *)(param_1 + 0xf8)])();
    if (uVar10 < 3) {
      iVar6 = FUN_0203b404();
      iVar6 = FUN_0214fba8(*(undefined4 *)(iVar6 + 0x88),0x850000,uVar10 + 0x18,0x61);
      uStack_120 = 0x14000;
      uStack_11c = 0x10000;
      FUN_021511c8(iVar6,&uStack_11c,&uStack_120);
      if (iVar5 == 0) {
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
      }
      else {
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
      }
      FUN_0214e688(iVar4,iVar6);
      iVar5 = FUN_0203b404();
      iVar5 = FUN_0214fba8(*(undefined4 *)(iVar5 + 0x88),0x850000,uVar10 + 0x18,0x61);
      uStack_128 = 0x14000;
      uStack_124 = 0x10000;
      FUN_021511c8(iVar5,&uStack_124,&uStack_128);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
      FUN_0214e688(iVar4,iVar5);
    }
    else {
      iVar6 = FUN_0200d12c(uVar10 + 1,10);
      FUN_0200d12c(uVar10 + 1,10);
      iVar7 = FUN_0203b404();
      iVar7 = FUN_0214fba8(*(undefined4 *)(iVar7 + 0x88),0x850000,iVar6 + 0x1b,0x61);
      uStack_108 = 0x10000;
      uStack_104 = 0xe000;
      FUN_021511c8(iVar7,&uStack_104,&uStack_108);
      FUN_0214e688(iVar4,iVar7);
      if ((iVar6 == 0) || (iVar5 == 0)) {
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
      }
      else {
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      }
      iVar7 = FUN_0203b404();
      iVar7 = FUN_0214fba8(*(undefined4 *)(iVar7 + 0x88),0x850000,extraout_r1 + 0x1b,0x61);
      if (iVar6 == 0) {
        uStack_118 = 0x10000;
        uStack_114 = 0x11000;
        FUN_021511c8(iVar7,&uStack_114,&uStack_118);
      }
      else {
        uStack_110 = 0x10000;
        uStack_10c = 0x16000;
        FUN_021511c8(iVar7,&uStack_10c,&uStack_110);
      }
      if (iVar5 == 0) {
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
      }
      else {
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      }
      FUN_0214e688(iVar4,iVar7);
    }
    iVar4 = Create(iVar3,_DAT_021d5154);
    aiStack_ec[9] = 0;
    aiStack_ec[10] = 0xc7000;
    FUN_021511c8(iVar4,aiStack_ec + 10,aiStack_ec + 9);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    aiStack_ec[8] = 0x81000;
    FUN_0214e6c0(iVar4,aiStack_ec + 8);
    aiStack_ec[7] = 0x84000;
    FUN_0214ffd0(iVar4,aiStack_ec + 7);
    FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_021566dc + 1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    iStack_18c = (int)*(short *)(iVar9 * 2 + param_1 + *(int *)(param_1 + 0xf8) * 0x28 + 0x1c8);
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(param_1 + 0xf8)])();
    if (iVar5 == 0) {
      iStack_18c = 0;
    }
    iVar5 = FUN_0200d12c(iStack_18c,100);
    iStack_18c = iStack_18c + iVar5 * -100;
    iVar6 = FUN_0200d12c(iStack_18c,10);
    iStack_19c = 0xc;
    iVar7 = FUN_0203b404();
    iVar7 = FUN_0214fba8(*(undefined4 *)(iVar7 + 0x88),0x850000,iVar5 + 0x2d,0x81);
    aiStack_ec[5] = 0xc000;
    aiStack_ec[6] = 0x4000;
    FUN_021511c8(iVar7,aiStack_ec + 6,aiStack_ec + 5);
    FUN_0214e688(iVar4,iVar7);
    if (iVar5 == 0) {
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
    }
    else {
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    }
    iVar7 = FUN_0203b404();
    iVar7 = FUN_0214fba8(*(undefined4 *)(iVar7 + 0x88),0x850000,iVar6 + 0x2d,0x81);
    if (iVar5 == 0) {
      if (iVar6 != 0) {
        aiStack_ec[1] = 0xc000;
        aiStack_ec[2] = 0x8000;
        FUN_021511c8(iVar7,aiStack_ec + 2,aiStack_ec + 1);
        iStack_19c = 0x10;
      }
    }
    else {
      aiStack_ec[3] = 0xc000;
      aiStack_ec[4] = 0xc000;
      FUN_021511c8(iVar7,aiStack_ec + 4,aiStack_ec + 3);
      iStack_19c = 0x14;
    }
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    FUN_0214e688(iVar4,iVar7);
    if ((iVar5 == 0) && (iVar6 == 0)) {
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),0);
    }
    else {
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    }
    iVar5 = FUN_0203b404();
    iVar5 = FUN_0214fba8(*(undefined4 *)(iVar5 + 0x88),0x850000,iStack_18c + iVar6 * -10 + 0x2d,0x81
                        );
    uStack_f0 = 0xc000;
    aiStack_ec[0] = iStack_19c << 0xc;
    FUN_021511c8(iVar5,aiStack_ec,&uStack_f0);
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    FUN_0214e688(iVar4,iVar5);
    iVar4 = Create(iVar3,_DAT_021d5154);
    aiStack_ec[0xf] = 0x8000;
    aiStack_ec[0x10] = 0xab000;
    FUN_021511c8(iVar4,aiStack_ec + 0x10,aiStack_ec + 0xf);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    aiStack_ec[0xe] = 0x81000;
    FUN_0214e6c0(iVar4,aiStack_ec + 0xe);
    aiStack_ec[0xd] = 0x84000;
    FUN_0214ffd0(iVar4,aiStack_ec + 0xd);
    FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_021569b0 + 1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(param_1 + 0xf8)])();
    iVar6 = FUN_02156fa0(*(uint *)(param_1 + 0xf8) & 0xff,
                         *(undefined1 *)(iVar9 + param_1 + *(uint *)(param_1 + 0xf8) * 0x14 + 0x178)
                        );
    iVar7 = FUN_0203b404();
    iVar6 = FUN_0214fba8(*(undefined4 *)(iVar7 + 0x88),0x850000,s_________02169d2c[iVar6],0x81);
    aiStack_ec[0xb] = 0x8000;
    aiStack_ec[0xc] = 0x8000;
    piVar8 = aiStack_ec + 0xb;
    FUN_021511c8(iVar6,aiStack_ec + 0xc);
    if (iVar5 == 0) {
      (*(code *)*piVar8)(*(undefined4 *)(iVar6 + 4),0);
    }
    else {
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    }
    FUN_0214e688(iVar4,iVar6);
    iVar4 = Create(iVar3,_DAT_021d5154);
    aiStack_ec[0x15] = 0x10000;
    aiStack_ec[0x16] = 0x90000;
    FUN_021511c8(iVar4,aiStack_ec + 0x16,aiStack_ec + 0x15);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    aiStack_ec[0x14] = 0x81000;
    FUN_0214e6c0(iVar4,aiStack_ec + 0x14);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    aiStack_ec[0x13] = 0x84000;
    FUN_0214ffd0(iVar4,aiStack_ec + 0x13);
    FUN_02028384(*(undefined4 *)(iVar4 + 4),&LAB_021565f0_1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(param_1 + 0xf8)])();
    iVar6 = FUN_0203b404();
    iVar6 = FUN_0214fba8(*(undefined4 *)(iVar6 + 0x88),0x850000,0x25,0x81);
    aiStack_ec[0x11] = 0x8000;
    aiStack_ec[0x12] = 0x8000;
    FUN_021511c8(iVar6,aiStack_ec + 0x12,aiStack_ec + 0x11);
    if (((1 << (*(uint *)(param_1 + 0xf8) & 0xff) & (uint)*(byte *)(param_1 + iVar9 + 0xfc)) == 0)
       || (iVar5 == 0)) {
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),0);
    }
    else {
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    }
    FUN_0214e688(iVar4,iVar6);
    iVar4 = Create(iVar3,_DAT_021d5154);
    aiStack_ec[0x1f] = 0;
    aiStack_ec[0x20] = 0x20000;
    FUN_021511c8(iVar4,aiStack_ec + 0x20,aiStack_ec + 0x1f);
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar9;
    aiStack_ec[0x1e] = 0x81000;
    FUN_0214e6c0(iVar4,aiStack_ec + 0x1e);
    aiStack_ec[0x1d] = 0x84000;
    FUN_0214ffd0(iVar4,aiStack_ec + 0x1d);
    FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_0215687c + 1);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    iVar5 = FUN_0203b404();
    FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
    iVar5 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(param_1 + 0xf8)])();
    if (iVar5 == 0) {
      uStack_17c = DAT_0216c1a8;
      puStack_180 = &DAT_02169d34;
    }
    else {
      uStack_17c = FUN_02156f78(*(undefined4 *)(param_1 + 0xe8),*(uint *)(param_1 + 0xf8) & 0xff,
                                *(undefined1 *)
                                 (iVar9 + param_1 + *(uint *)(param_1 + 0xf8) * 0x14 + 0x178));
      uVar2 = FUN_0207216c((&DAT_02169d28)[*(uint *)(param_1 + 0xf8) & 0xff],
                           *(undefined1 *)
                            (iVar9 + param_1 + *(uint *)(param_1 + 0xf8) * 0x14 + 0x178));
      FUN_02051890(uVar2,auStack_44,0x14);
      puStack_180 = auStack_44;
      uStack_30 = 0;
    }
    func_0x021c5fb4(*(undefined4 *)(*(int *)(param_1 + 0x78) + 4));
    iVar5 = FUN_0214d37c();
    piVar8 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar8 + 0xa8))(piVar8,0);
    aiStack_ec[0x1b] = 0x10000;
    aiStack_ec[0x1c] = 0;
    FUN_021511c8(iVar5,aiStack_ec + 0x1c,aiStack_ec + 0x1b);
    piVar8 = *(int **)(iVar5 + 4);
    (**(code **)(*(int *)piVar8[0x19] + 0x70))();
    (**(code **)(*piVar8 + 0xc4))();
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    aiStack_ec[0x1a] = 0x81000;
    FUN_0214e6c0(iVar5,aiStack_ec + 0x1a);
    piVar8 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar8 + 0x6c))(piVar8,puStack_180,0xffffffff);
    FUN_0214e688(iVar4,iVar5);
    func_0x021c5fb4(*(undefined4 *)(*(int *)(param_1 + 0x74) + 4));
    iVar5 = FUN_0214d37c();
    aiStack_ec[0x18] = 0x3000;
    aiStack_ec[0x19] = 0;
    FUN_021511c8(iVar5,aiStack_ec + 0x19,aiStack_ec + 0x18);
    piVar8 = *(int **)(iVar5 + 4);
    (**(code **)(*(int *)piVar8[0x19] + 0x70))();
    (**(code **)(*piVar8 + 0xc4))();
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    aiStack_ec[0x17] = 0x81000;
    FUN_0214e6c0(iVar5,aiStack_ec + 0x17);
    piVar8 = *(int **)(*(int *)(iVar5 + 4) + 100);
    (**(code **)(*piVar8 + 0x68))(piVar8,uStack_17c);
    FUN_0214e688(iVar4,iVar5);
    FUN_0214f834();
    iVar3 = Create(iVar3,_DAT_021d5154);
    aiStack_ec[0x25] = 0;
    aiStack_ec[0x26] = 0;
    FUN_021511c8(iVar3,aiStack_ec + 0x26,aiStack_ec + 0x25);
    *(int *)(*(int *)(iVar3 + 4) + 0x124) = iVar9;
    aiStack_ec[0x24] = 0x83000;
    FUN_0214e6c0(iVar3,aiStack_ec + 0x24);
    aiStack_ec[0x23] = 0x84000;
    FUN_0214ffd0(iVar3,aiStack_ec + 0x23);
    FUN_02028384(*(undefined4 *)(iVar3 + 4),&LAB_02156e6c_1);
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
    func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
    iVar4 = FUN_0203b404();
    iVar4 = FUN_0214fba8(*(undefined4 *)(iVar4 + 0x88),0x850000,0xb,0x83);
    aiStack_ec[0x21] = 0x10000;
    aiStack_ec[0x22] = 0x73000;
    FUN_021511c8(iVar4,aiStack_ec + 0x22,aiStack_ec + 0x21);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    FUN_0214e688(iVar3,iVar4);
    uVar2 = FUN_02155920(iVar4);
    uVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar2,0x21,0xf,5,0x80);
    *(undefined4 *)(param_1 + iVar9 * 4 + 0x84) = uVar2;
    iVar4 = *(int *)(param_1 + iVar9 * 4 + 0x84);
    if (iVar4 != 0) {
      FUN_02155968(iVar4,0x79f,0x1e);
    }
    iVar4 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(param_1 + 0xf8)])();
    iVar5 = FUN_02156fa0(*(uint *)(param_1 + 0xf8) & 0xff,
                         *(undefined1 *)(iVar9 + param_1 + *(uint *)(param_1 + 0xf8) * 0x14 + 0x178)
                        );
    if ((iVar5 == 0) && (iVar4 != 0)) {
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x14);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + 4) + 0xc))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 4) + 0xc))();
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  (**(code **)(**(int **)(iVar1 + 4) + 0x1a0))(*(int **)(iVar1 + 4),*(undefined4 *)(param_1 + 0xf4))
  ;
  (**(code **)(**(int **)(iVar1 + 4) + 0x198))(*(int **)(iVar1 + 4),*(undefined4 *)(param_1 + 0xf4))
  ;
  return;
}

