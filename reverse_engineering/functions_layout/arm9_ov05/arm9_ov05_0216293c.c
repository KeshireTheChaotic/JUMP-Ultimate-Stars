
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216293c(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *unaff_r8;
  int iVar13;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 in_stack_00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined4 uStack00000074;
  undefined4 uStack00000078;
  undefined4 uStack0000007c;
  undefined1 uStack00000094;
  undefined1 uStack000000a0;
  undefined4 uStack000000ac;
  int in_stack_000000b0;
  undefined1 uStack000000b8;
  undefined4 uStack000000c4;
  int in_stack_000000c8;
  
  iVar2 = FUN_0203b414();
  uVar3 = FUN_021639d8(s_info_bg_021713a0,*(undefined4 *)(iVar2 + 0x88));
  unaff_r8[9] = uVar3;
  iVar2 = FUN_0203b414(2);
  uVar3 = FUN_021639d8(s_jpower_jp_021713a8,*(undefined4 *)(iVar2 + 0x88));
  unaff_r8[10] = uVar3;
  uVar11 = unaff_r8[9];
  uStack00000050 = 0xfff00000;
  uStack0000004c = 0;
  uStack00000054 = 0x100000;
  FUN_021595f4(&uStack00000094,&uStack00000054,&uStack00000050,&uStack0000004c);
  uStack00000058 = 0;
  uStack0000005c = 0;
  uStack00000060 = 0;
  FUN_021595f4(&uStack000000a0,&uStack00000060,&uStack0000005c,&uStack00000058);
  FUN_02151fcc(&uStack00000064,uVar11,s_Position_02171394);
  uVar5 = in_stack_00000068;
  uVar3 = uStack00000064;
  iVar2 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_021712dc,s_Create_021711c0,0x2b9);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)jus_TagIPCT::jus_TagIPCT(iVar2,0,uVar3,uVar5);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020f38(uVar11,piVar4[6]);
  FUN_021500cc(unaff_r8[10],unaff_r8[2]);
  iVar2 = FUN_0203b404();
  iVar2 = FUN_02163b38(0xb0002f,0xb00000,*(undefined4 *)(iVar2 + 0x88),unaff_r8[2]);
  unaff_r8[0x1a] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  iVar2 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0216f484,s_Create_021711b0,0x1de);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar2,FUN_02163898,FUN_02163900,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  func_0x021b3b7c(1,0,piVar4,0);
  uVar3 = FUN_021504d4(piVar4,0x31305053);
  uVar5 = FUN_0215b6d8();
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x41,1,3);
  FUN_02163884(uVar5,0x8df,0x1e);
  unaff_r8[0x22] = uVar5;
  uVar3 = FUN_0215b6d8(uVar3);
  uVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x31,1,3);
  FUN_02163884(uVar3,0x73f,8);
  unaff_r8[0x23] = uVar3;
  (**(code **)(*piVar4 + 8))();
  _DAT_021d5154 = 0xffffffff;
  uVar3 = ALWidgetBaseImp::Create();
  unaff_r8[0x1e] = uVar3;
  uVar3 = ALWidgetBaseImp::Create();
  unaff_r8[0x1f] = uVar3;
  FUN_0203b3e4();
  iVar2 = ALWidgetImp::Create();
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),0x510001);
  func_0x021b3fb0(*(undefined4 *)(iVar2 + 4),0x510000);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0x510000);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,FUN_02164ccc);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar2 + 4),0x20);
  _DAT_021d5154 = 1;
  iVar2 = ALWidgetBaseImp::Create();
  unaff_r8[0x20] = iVar2;
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  FUN_021500cc(unaff_r8[0x20],unaff_r8[2]);
  FUN_0203b404();
  uVar3 = ALWidgetImp::Create();
  unaff_r8[0x31] = uVar3;
  iVar2 = FUN_0203b404();
  iVar2 = FUN_02163b38(0xb00002,0xb00000,*(undefined4 *)(iVar2 + 0x88),unaff_r8[0x31]);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x414d4f4b;
  FUN_02163e70(unaff_r8[0x31]);
  func_0x021b65e8(*(undefined4 *)(unaff_r8[0x31] + 4),1,FUN_02164d1c);
  func_0x021b6760(*(undefined4 *)(unaff_r8[0x31] + 4),4,FUN_02164e04);
  FUN_021634b4(&uStack000000ac,&DAT_02171230);
  iVar12 = 0;
  iVar2 = DAT_02171234;
  do {
    iVar13 = 0;
    in_stack_000000b0 = iVar2;
    do {
      iVar6 = FUN_021653ac(unaff_r8[0x25],unaff_r8[0x41],iVar12,iVar13);
      FUN_0203b404();
      iVar7 = ALWidgetImp::Create();
      iVar8 = FUN_0203b404();
      uVar3 = FUN_02164140(iVar6);
      iVar8 = FUN_02163b38(uVar3,0xb00000,*(undefined4 *)(iVar8 + 0x88),iVar7);
      *(undefined4 *)(*(int *)(iVar8 + 4) + 0x54) = 0x414d4f4b;
      FUN_02163e70(iVar7);
      func_0x021b65e8(*(undefined4 *)(iVar7 + 4),1,FUN_02164d34);
      iVar8 = FUN_0203b404();
      uVar3 = FUN_02163b38(0xb00012,0xb00000,*(undefined4 *)(iVar8 + 0x88),0);
      FUN_021500cc(uVar3,iVar7);
      FUN_021639a8(uVar3,&DAT_0217123c);
      FUN_021506ec(unaff_r8[2],uVar3);
      FUN_021634b4(&uStack000000c4,&DAT_02171248);
      iVar8 = 0;
      do {
        sVar1 = *(short *)(iVar6 + iVar8 * 2 + 8);
        if (sVar1 != 0) {
          iVar9 = FUN_0203b404();
          uVar5 = FUN_02163b38(iVar8 + 0xb00015,0xb00000,*(undefined4 *)(iVar9 + 0x88),0);
          uStack0000007c = uStack000000c4 + -0xe000;
          uStack00000078 = in_stack_000000c8;
          FUN_0214ce68(uVar5,&uStack0000007c,&uStack00000078);
          FUN_021500cc(uVar5,uVar3);
          FUN_021506ec(unaff_r8[2],uVar5);
          iVar9 = 0;
          do {
            iVar10 = FUN_0203b404();
            uVar5 = FUN_02163b38(0xb0001b,0xb00000,*(undefined4 *)(iVar10 + 0x88),0);
            *(undefined4 *)(&uStack000000b8 + iVar9 * 4) = uVar5;
            FUN_021639a8(uVar5,&uStack000000c4);
            FUN_021500cc(*(undefined4 *)(&uStack000000b8 + iVar9 * 4),uVar3);
            FUN_021506ec(unaff_r8[2],*(undefined4 *)(&uStack000000b8 + iVar9 * 4));
            iVar9 = iVar9 + 1;
          } while (iVar9 < 3);
          FUN_021640c0(sVar1,&uStack000000b8,0xb0001b,3);
          in_stack_000000c8 = in_stack_000000c8 + 0x8000;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 6);
      unaff_r8[iVar12 * 3 + iVar13 + 0xb] = uVar3;
      iVar8 = FUN_02164234(iVar6);
      if (iVar8 == 0) {
        uVar3 = FUN_021641f8(iVar6,iVar12,0xb00025);
        iVar6 = FUN_0203b404();
        iVar6 = FUN_02163b38(uVar3,0xb00000,*(undefined4 *)(iVar6 + 0x88),iVar7);
        uStack00000070 = 0x83000;
        FUN_0214d494(iVar7,&uStack00000070);
        func_0x021b6760(*(undefined4 *)(iVar7 + 4),4,FUN_02164ebc);
      }
      else {
        uVar3 = FUN_021641f8(iVar6,iVar12,0xb0002a);
        iVar6 = FUN_0203b404();
        iVar6 = FUN_02163b38(uVar3,0xb00000,*(undefined4 *)(iVar6 + 0x88),iVar7);
        uStack0000006c = 0x84000;
        FUN_0214d494(iVar7,&uStack0000006c);
        func_0x021b6760(*(undefined4 *)(iVar7 + 4),4,FUN_0216524c);
        func_0x021b6760(*(undefined4 *)(iVar7 + 4),1,FUN_02164db0);
        (**(code **)(**(int **)(unaff_r8[iVar12 * 3 + iVar13 + 0xb] + 4) + 0xd8))
                  (*(int **)(unaff_r8[iVar12 * 3 + iVar13 + 0xb] + 4),0);
      }
      uStack00000074 = 0xffff4000;
      FUN_02150a10(iVar6,&uStack00000074);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x54) = 0x54554f52;
      *(int *)(*(int *)(iVar7 + 4) + 0x124) = iVar13 + iVar12 * 3;
      unaff_r8[iVar12 * 3 + iVar13 + 0x32] = iVar7;
      iVar13 = iVar13 + 1;
      in_stack_000000b0 = in_stack_000000b0 + 0x38000;
    } while (iVar13 < 3);
    iVar12 = iVar12 + 1;
    uStack000000ac = uStack000000ac + 0x28000;
  } while (iVar12 < 5);
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

