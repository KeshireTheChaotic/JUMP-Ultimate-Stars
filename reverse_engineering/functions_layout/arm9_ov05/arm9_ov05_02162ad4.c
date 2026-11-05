
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02162ad4(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  int *piVar10;
  int iVar11;
  undefined4 *unaff_r8;
  int iVar12;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined4 uStack00000074;
  undefined4 uStack00000078;
  undefined4 uStack0000007c;
  undefined4 uStack000000ac;
  int in_stack_000000b0;
  undefined1 uStack000000b8;
  undefined4 uStack000000c4;
  int in_stack_000000c8;
  
  (**(code **)(*param_1 + 0x14))();
  piVar10 = *(int **)(unaff_r4 + 0x18);
  func_0x021b3b7c(1,0,piVar10,0);
  uVar2 = FUN_021504d4(piVar10,0x31305053);
  uVar3 = FUN_0215b6d8();
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x41,1,3);
  FUN_02163884(uVar3,0x8df,0x1e);
  unaff_r8[0x22] = uVar3;
  uVar2 = FUN_0215b6d8(uVar2);
  uVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar2,0x31,1,3);
  FUN_02163884(uVar2,0x73f,8);
  unaff_r8[0x23] = uVar2;
  (**(code **)(*piVar10 + 8))();
  _DAT_021d5154 = 0xffffffff;
  uVar2 = ALWidgetBaseImp::Create();
  unaff_r8[0x1e] = uVar2;
  uVar2 = ALWidgetBaseImp::Create();
  unaff_r8[0x1f] = uVar2;
  FUN_0203b3e4();
  iVar4 = ALWidgetImp::Create();
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0x510001);
  func_0x021b3fb0(*(undefined4 *)(iVar4 + 4),0x510000);
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4),0x510000);
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,FUN_02164ccc);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar4 + 4),0x20);
  _DAT_021d5154 = 1;
  iVar4 = ALWidgetBaseImp::Create();
  unaff_r8[0x20] = iVar4;
  func_0x021b7744(*(undefined4 *)(iVar4 + 4),1);
  FUN_021500cc(unaff_r8[0x20],unaff_r8[2]);
  FUN_0203b404();
  uVar2 = ALWidgetImp::Create();
  unaff_r8[0x31] = uVar2;
  iVar4 = FUN_0203b404();
  iVar4 = FUN_02163b38(0xb00002,0xb00000,*(undefined4 *)(iVar4 + 0x88),unaff_r8[0x31]);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x54) = 0x414d4f4b;
  FUN_02163e70(unaff_r8[0x31]);
  func_0x021b65e8(*(undefined4 *)(unaff_r8[0x31] + 4),1,&LAB_02164d1c);
  func_0x021b6760(*(undefined4 *)(unaff_r8[0x31] + 4),4,&LAB_02164e04);
  FUN_021634b4(&uStack000000ac,&DAT_02171230);
  iVar11 = 0;
  iVar4 = DAT_02171234;
  do {
    iVar12 = 0;
    in_stack_000000b0 = iVar4;
    do {
      iVar5 = FUN_021653ac(unaff_r8[0x25],unaff_r8[0x41],iVar11,iVar12);
      FUN_0203b404();
      iVar6 = ALWidgetImp::Create();
      iVar7 = FUN_0203b404();
      uVar2 = FUN_02164140(iVar5);
      iVar7 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar7 + 0x88),iVar6);
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0x54) = 0x414d4f4b;
      FUN_02163e70(iVar6);
      func_0x021b65e8(*(undefined4 *)(iVar6 + 4),1,FUN_02164d34);
      iVar7 = FUN_0203b404();
      uVar2 = FUN_02163b38(0xb00012,0xb00000,*(undefined4 *)(iVar7 + 0x88),0);
      FUN_021500cc(uVar2,iVar6);
      FUN_021639a8(uVar2,&DAT_0217123c);
      FUN_021506ec(unaff_r8[2],uVar2);
      FUN_021634b4(&uStack000000c4,&DAT_02171248);
      iVar7 = 0;
      do {
        sVar1 = *(short *)(iVar5 + iVar7 * 2 + 8);
        if (sVar1 != 0) {
          iVar8 = FUN_0203b404();
          uVar3 = FUN_02163b38(iVar7 + 0xb00015,0xb00000,*(undefined4 *)(iVar8 + 0x88),0);
          uStack0000007c = uStack000000c4 + -0xe000;
          uStack00000078 = in_stack_000000c8;
          FUN_0214ce68(uVar3,&uStack0000007c,&uStack00000078);
          FUN_021500cc(uVar3,uVar2);
          FUN_021506ec(unaff_r8[2],uVar3);
          iVar8 = 0;
          do {
            iVar9 = FUN_0203b404();
            uVar3 = FUN_02163b38(0xb0001b,0xb00000,*(undefined4 *)(iVar9 + 0x88),0);
            *(undefined4 *)(&uStack000000b8 + iVar8 * 4) = uVar3;
            FUN_021639a8(uVar3,&uStack000000c4);
            FUN_021500cc(*(undefined4 *)(&uStack000000b8 + iVar8 * 4),uVar2);
            FUN_021506ec(unaff_r8[2],*(undefined4 *)(&uStack000000b8 + iVar8 * 4));
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          FUN_021640c0(sVar1,&uStack000000b8,0xb0001b,3);
          in_stack_000000c8 = in_stack_000000c8 + 0x8000;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 6);
      unaff_r8[iVar11 * 3 + iVar12 + 0xb] = uVar2;
      iVar7 = FUN_02164234(iVar5);
      if (iVar7 == 0) {
        uVar2 = FUN_021641f8(iVar5,iVar11,0xb00025);
        iVar5 = FUN_0203b404();
        iVar5 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar5 + 0x88),iVar6);
        uStack00000070 = 0x83000;
        FUN_0214d494(iVar6,&uStack00000070);
        func_0x021b6760(*(undefined4 *)(iVar6 + 4),4,FUN_02164ebc);
      }
      else {
        uVar2 = FUN_021641f8(iVar5,iVar11,0xb0002a);
        iVar5 = FUN_0203b404();
        iVar5 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar5 + 0x88),iVar6);
        uStack0000006c = 0x84000;
        FUN_0214d494(iVar6,&uStack0000006c);
        func_0x021b6760(*(undefined4 *)(iVar6 + 4),4,FUN_0216524c);
        func_0x021b6760(*(undefined4 *)(iVar6 + 4),1,FUN_02164db0);
        (**(code **)(**(int **)(unaff_r8[iVar11 * 3 + iVar12 + 0xb] + 4) + 0xd8))
                  (*(int **)(unaff_r8[iVar11 * 3 + iVar12 + 0xb] + 4),0);
      }
      uStack00000074 = 0xffff4000;
      FUN_02150a10(iVar5,&uStack00000074);
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x54) = 0x54554f52;
      *(int *)(*(int *)(iVar6 + 4) + 0x124) = iVar12 + iVar11 * 3;
      unaff_r8[iVar11 * 3 + iVar12 + 0x32] = iVar6;
      iVar12 = iVar12 + 1;
      in_stack_000000b0 = in_stack_000000b0 + 0x38000;
    } while (iVar12 < 3);
    iVar11 = iVar11 + 1;
    uStack000000ac = uStack000000ac + 0x28000;
  } while (iVar11 < 5);
  FUN_02164aec();
  FUN_021634d0();
  FUN_02164b94();
  FUN_02073ebc(2,1);
  (**(code **)(**(int **)(*(int *)(unaff_r8[2] + 4) + 0x68) + 0x6c))();
  FUN_02166234(unaff_r8[0x24]);
  FUN_020734e0(4);
  FUN_0207361c(4,0);
  return *unaff_r8;
}

