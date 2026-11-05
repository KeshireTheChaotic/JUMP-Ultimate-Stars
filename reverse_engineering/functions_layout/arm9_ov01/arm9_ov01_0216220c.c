
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02162ad4) */
/* WARNING: Removing unreachable block (ram,0x02162af8) */
/* WARNING: Removing unreachable block (ram,0x02162b00) */
/* WARNING: Removing unreachable block (ram,0x02162b04) */
/* WARNING: Removing unreachable block (ram,0x02162b08) */
/* WARNING: Removing unreachable block (ram,0x02162b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0216220c(void)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint extraout_r1;
  uint uVar10;
  int extraout_r1_00;
  undefined4 *unaff_r4;
  undefined4 *puVar11;
  int *piVar12;
  int *unaff_r6;
  uint *puVar13;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 in_cr1;
  undefined8 uVar19;
  undefined4 in_stack_00000000;
  int in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000070;
  undefined4 in_stack_00000074;
  undefined4 uStack00000078;
  undefined4 in_stack_0000007c;
  undefined4 uStack00000080;
  undefined4 in_stack_00000084;
  undefined4 uStack00000088;
  undefined4 uStack0000008c;
  undefined4 uStack00000090;
  undefined4 uStack00000094;
  undefined4 uStack00000098;
  undefined4 uStack0000009c;
  undefined1 *in_stack_000000ac;
  uint in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined1 uStack000000b8;
  uint uStack000000d4;
  uint *in_stack_000000d8;
  undefined1 uStack000000e0;
  undefined1 uStack0000010c;
  undefined1 uStack0000014c;
  
  func_0x021b3b7c();
  _DAT_021d5154 = 1;
  iVar4 = FUN_02155a9c(unaff_r6,0x31305053);
  iVar4 = *(int *)(*(int *)(iVar4 + 4) + 100);
  piVar12 = *(int **)(iVar4 + 0x2c);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)FUN_02036430(*(undefined4 *)(iVar4 + 0x20));
  }
  if (piVar12[6] == 0) {
    (**(code **)(*piVar12 + 0x10))();
  }
  in_stack_00000000 = 0x80;
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar12[6],0x32,4,5);
  unaff_r4[0x35] = uVar5;
  iVar4 = unaff_r4[0x35];
  *(undefined2 *)(iVar4 + 0x18) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0x8df;
  *(undefined1 *)(iVar4 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar4 + 0x1c) = 1;
  *(undefined1 *)(iVar4 + 0x1b) = 1;
  (**(code **)(*unaff_r6 + 8))();
  uVar5 = ALWidgetBaseImp::Create();
  unaff_r4[0x1f] = uVar5;
  FUN_0214f7c0(unaff_r4[5],unaff_r4[0x1f]);
  _DAT_021d5154 = 0xffffffff;
  uVar5 = ALWidgetBaseImp::Create();
  unaff_r4[0x20] = uVar5;
  func_0x021b7744(*(undefined4 *)(unaff_r4[0x20] + 4),0);
  iVar4 = FUN_0203b3e4();
  uVar5 = ALWidgetImp::Create(unaff_r4,0x216cee8,unaff_r4[0x20],*(undefined4 *)(iVar4 + 0x88));
  unaff_r4[0x21] = uVar5;
  *(undefined4 *)(*(int *)(unaff_r4[0x21] + 4) + 0x54) = 0;
  *(undefined4 *)(*(int *)(unaff_r4[0x21] + 4) + 0xdc) = 0;
  func_0x021b3fb0(*(undefined4 *)(unaff_r4[0x21] + 4),uRam0216cef0);
  *(undefined1 *)(*(int *)(unaff_r4[0x21] + 4) + 0xab) = 0;
  func_0x021b6760(*(undefined4 *)(unaff_r4[0x21] + 4),4,uRam0216cf10);
  *(undefined1 *)(*(int *)(unaff_r4[0x21] + 4) + 0xb1) = 1;
  iVar4 = FUN_0203b404();
  uVar5 = ALWidgetImp::Create(unaff_r4,0x216cf18,unaff_r4[0x20],*(undefined4 *)(iVar4 + 0x88));
  unaff_r4[0x22] = uVar5;
  *(undefined4 *)(*(int *)(unaff_r4[0x22] + 4) + 0x54) = 1;
  *(undefined4 *)(*(int *)(unaff_r4[0x22] + 4) + 0xdc) = 0;
  func_0x021b6760(*(undefined4 *)(unaff_r4[0x22] + 4),4,uRam0216cf40);
  iVar4 = 2;
  *(undefined1 *)(*(int *)(unaff_r4[0x22] + 4) + 0xb1) = 1;
  _DAT_021d5154 = 1;
  do {
    iVar6 = FUN_0203b404();
    uVar5 = ALWidgetImp::Create(unaff_r4,iVar4 * 0x30 + 0x216cee8,unaff_r4[0x1f],
                                *(undefined4 *)(iVar6 + 0x88));
    unaff_r4[iVar4 + 0x21] = uVar5;
    *(int *)(*(int *)(unaff_r4[iVar4 + 0x21] + 4) + 0x124) = iVar4;
    func_0x021b6760(*(undefined4 *)(unaff_r4[iVar4 + 0x21] + 4),4,0x21639e9);
    func_0x021b65e8(*(undefined4 *)(unaff_r4[iVar4 + 0x21] + 4),4,
                    *(undefined4 *)(iVar4 * 0x30 + 0x216cf10));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  iVar4 = 1;
  do {
    func_0x021b400c(*(undefined4 *)(unaff_r4[iVar4 + 0x21] + 4),0x85003e);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xe);
  *(undefined1 *)(*(int *)(unaff_r4[0x21] + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(unaff_r4[0x21] + 4),0x20);
  func_0x021b3fc4(*(undefined4 *)(unaff_r4[0x21] + 4),0x510001);
  *(undefined1 *)(*(int *)(unaff_r4[0x22] + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(unaff_r4[0x22] + 4),0x8000);
  func_0x021b3fc4(*(undefined4 *)(unaff_r4[0x22] + 4),0x850004);
  func_0x021b3fb0(*(undefined4 *)(unaff_r4[0x22] + 4),0x850003);
  iVar4 = 0xe;
  do {
    func_0x021b65e8(*(undefined4 *)(unaff_r4[iVar4 + 0x21] + 4),4,&LAB_021641b8_1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  iVar4 = 2;
  *(code **)(*(int *)(unaff_r4[0x23] + 4) + 0xdc) = FUN_021639b8 + 1;
  do {
    in_stack_00000014 = iVar4 * 0x30 + 0x216cee8;
    in_stack_00000030 = iVar4 * 4;
    piVar12 = *(int **)(unaff_r4[iVar4 + 0x21] + 4);
    if (unaff_r4[*(byte *)(iVar4 * 0x30 + 0x216cf04) + 0x21] == 0) {
      (**(code **)(*piVar12 + 0x164))(piVar12,8);
    }
    else {
      (**(code **)(*piVar12 + 0x160))
                (piVar12,8,*(undefined4 *)(unaff_r4[*(byte *)(iVar4 * 0x30 + 0x216cf04) + 0x21] + 4)
                );
    }
    FUN_0215b838(unaff_r4[iVar4 + 0x21],unaff_r4[*(byte *)(iVar4 * 0x30 + 0x216cf05) + 0x21]);
    piVar12 = *(int **)(unaff_r4[iVar4 + 0x21] + 4);
    if (unaff_r4[*(byte *)(iVar4 * 0x30 + 0x216cf06) + 0x21] == 0) {
      (**(code **)(*piVar12 + 0x164))(piVar12,4);
    }
    else {
      (**(code **)(*piVar12 + 0x160))
                (piVar12,4,*(undefined4 *)(unaff_r4[*(byte *)(iVar4 * 0x30 + 0x216cf06) + 0x21] + 4)
                );
    }
    FUN_0215b7fc(*(undefined4 *)((int)unaff_r4 + in_stack_00000030 + 0x84),
                 unaff_r4[*(byte *)(in_stack_00000014 + 0x1f) + 0x21]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  iVar4 = unaff_r4[0x1f];
  FUN_020239a0(*(undefined4 *)(iVar4 + 4));
  piVar12 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar12 + 0xac))(piVar12,0);
  FUN_0214f714(&uStack00000070,iVar4,s_Position_0216d2c4);
  FUN_0214f714(&uStack00000078,unaff_r4[0x21],&DAT_0216d2d0);
  FUN_0214f714(&uStack00000080,unaff_r4[0x22],&DAT_0216d2d0);
  uStack00000088 = 0xfff00000;
  FUN_0215b3f4(iVar4,&uStack00000088);
  (**(code **)(**(int **)(unaff_r4[0x21] + 4) + 0xd8))(*(int **)(unaff_r4[0x21] + 4),0);
  (**(code **)(**(int **)(unaff_r4[0x22] + 4) + 0xd8))(*(int **)(unaff_r4[0x22] + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000070,0,in_stack_00000074);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000078,0,in_stack_0000007c);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000080,0,in_stack_00000084);
  uStack0000008c = 0;
  FUN_0215b3f4(iVar4,&uStack0000008c);
  (**(code **)(**(int **)(unaff_r4[0x21] + 4) + 0xd8))(*(int **)(unaff_r4[0x21] + 4),1);
  (**(code **)(**(int **)(unaff_r4[0x22] + 4) + 0xd8))(*(int **)(unaff_r4[0x22] + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000070,8,in_stack_00000074);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000078,8,in_stack_0000007c);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000080,8,in_stack_00000084);
  FUN_02023c80(*(undefined4 *)(iVar4 + 4),uStack00000070,0x494c,in_stack_00000074);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),1);
  uStack00000090 = 0xfff00000;
  FUN_0215b3f4(iVar4,&uStack00000090);
  func_0x021b4034(*(undefined4 *)(iVar4 + 4),1);
  iVar4 = 0;
  do {
    iVar6 = iVar4 * 0x14;
    in_stack_00000034 = iVar6;
    iVar7 = FUN_0203b404();
    uVar5 = FUN_02162e10(*(undefined4 *)(iVar6 + 0x2169ef0),*(undefined4 *)(iVar6 + 0x2169ef4),
                         *(undefined4 *)(iVar7 + 0x88),*(undefined4 *)(iVar6 + 0x2169ef8));
    unaff_r4[iVar4 + 7] = uVar5;
    uStack0000005c = *(int *)(iVar6 + 0x2169eec) << 0xc;
    uStack00000058 = *(int *)(in_stack_00000034 + 0x2169ee8) << 0xc;
    FUN_021511c8(unaff_r4[iVar4 + 7],&uStack00000058,&uStack0000005c);
    FUN_0214f7c0(unaff_r4[iVar4 + 7],unaff_r4[0x1f]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  iVar4 = 0;
  do {
    FUN_0214f7c0(unaff_r4[iVar4 + 0x15],unaff_r4[iVar4 + 0x29]);
    FUN_0214f7c0(unaff_r4[iVar4 + 0x18],unaff_r4[iVar4 + 0x2c]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = func_0x02162d88(*(undefined1 *)((int)unaff_r4 + 0xe1));
  if (iVar4 == 0) {
    FUN_0215853c(unaff_r4[6],0);
    iVar4 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar4 + 4),s_Jarena_arena_bg_ncl_0216d308);
  }
  else {
    FUN_0215853c(unaff_r4[5],0);
    iVar4 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar4 + 4),s_ruleselect_rule_t_sel00_ncl_0216d2d8);
    FUN_0215853c(unaff_r4[6],0);
    iVar4 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar4 + 4),s_commu_com_bg_ncl_0216d2f4);
    FUN_02023894(*(undefined4 *)(unaff_r4[7] + 4),0x850001,0);
    (**(code **)(**(int **)(*(int *)(unaff_r4[7] + 4) + 0x68) + 0x6c))();
  }
  iVar4 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar4 + 0x88));
  in_stack_0000002c = func_0x021caa0c(s_font_DSFont_aft_0216d31c,0,0);
  in_stack_00000028 = func_0x021caa0c(s_font_jskfont_aft_0216d32c,0,0);
  in_stack_00000024 = ComicDeck::ComicDeckCreate(0,1);
  in_stack_00000020 = FUN_02076908();
  iVar4 = 0;
  do {
    iVar6 = FUN_02086bd4();
    if ((iVar6 == 0) || (DAT_020afe94 <= iVar4)) {
      if ((&DAT_020afeb0)[iVar4] == '\0') {
        uVar5 = FUN_02071f10((&DAT_020afeb4)[iVar4]);
        FUN_020769cc(in_stack_00000020,uVar5);
        iVar6 = FUN_0207879c(in_stack_00000020);
        if (iVar6 != 0) {
          (&DAT_020afeb0)[iVar4] = 1;
          (&DAT_020afeb4)[iVar4] = 0;
        }
      }
      uStack00000094 = 0;
      uStack00000098 = (iVar4 * 0x18 + 0x51) * 0x1000;
      uStack0000009c = 0x20000;
      puVar11 = &uStack00000094;
      FUN_0214dc68(&uStack000000d4,&uStack0000009c,&uStack00000098);
      puVar3 = in_stack_000000d8;
      puVar13 = &uStack000000d4;
      in_stack_00000018 = (uint)(byte)(&DAT_020afeb4)[iVar4];
      cVar2 = (&DAT_020afeb0)[iVar4];
      switch(cVar2) {
      case '\0':
        iVar6 = FUN_02071f10(in_stack_00000018);
        puVar13 = in_stack_000000d8;
        in_stack_0000001c =
             func_0x02162e80(unaff_r4,in_stack_00000028,
                             (int)(uStack000000d4 + ((uint)((int)uStack000000d4 >> 0xb) >> 0x14)) >>
                             0xc,(int)((int)in_stack_000000d8 +
                                      ((uint)((int)in_stack_000000d8 >> 0xb) >> 0x14)) >> 0xc);
        piVar12 = *(int **)(*(int *)(in_stack_0000001c + 4) + 100);
        (**(code **)(*piVar12 + 0x68))(piVar12,iVar6 + 0x40);
        break;
      case '\x01':
      case '\a':
      case '\b':
        in_stack_0000001c =
             func_0x02162e80(unaff_r4,in_stack_00000028,
                             (int)(uStack000000d4 + ((uint)((int)uStack000000d4 >> 0xb) >> 0x14)) >>
                             0xc,(int)((int)in_stack_000000d8 +
                                      ((uint)((int)in_stack_000000d8 >> 0xb) >> 0x14)) >> 0xc);
        FUN_02070a28(&uStack0000010c,(int)cVar2,in_stack_00000018);
        piVar12 = *(int **)(*(int *)(in_stack_0000001c + 4) + 100);
        (**(code **)(*piVar12 + 0x68))(piVar12,&uStack0000014c);
        puVar13 = puVar3;
        break;
      case '\x02':
        uVar8 = FUN_02072050(in_stack_00000018);
        FUN_020517fc(&uStack000000b8,0,0x1c);
        bVar18 = false;
        bVar16 = false;
        uVar10 = 0x14;
        bVar17 = false;
        bVar15 = false;
        FUN_02051890(uVar8,&uStack000000b8);
        if (bVar18) {
          in_stack_000000b4 = 0x2162944;
          in_stack_000000ac = &uStack000000b8;
          in_stack_000000b0 = unaff_r11;
        }
        if (bVar15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar18 && !bVar17) {
          puVar13 = (uint *)(uVar10 & (uint)puVar11 >> (unaff_r8 & 0xff));
          puVar11 = (undefined4 *)(uVar10 + (unaff_r10 << (unaff_r10 & 0xff)));
        }
        if (bVar17) {
          coprocessor_load(2,in_cr1,uVar10 - 0x368);
        }
        uVar14 = extraout_r1;
        if (bVar16) {
          in_r12 = *puVar13;
          unaff_r11 = puVar13[-1];
          uVar8 = puVar13[-2];
          unaff_r4 = (undefined4 *)puVar13[-3];
          puVar11 = (undefined4 *)puVar13[-4];
          uVar14 = puVar13[-5];
          puVar13 = puVar13 + -6;
        }
        if (bVar18 && !bVar17) {
          uVar10 = uVar14 - ((int)&uStack000000b8 * 4 + (uint)!bVar18);
        }
        if (bVar17) {
          coprocessor_load(2,in_cr1,unaff_r11 - 0x3cc);
        }
        if (!bVar18 || bVar17) {
          *(uint *)(unaff_r11 - 4) = in_r12;
          *(uint *)(unaff_r11 - 8) = unaff_r11;
          *(uint *)(unaff_r11 - 0xc) = uVar8;
          *(uint **)(unaff_r11 - 0x10) = puVar13;
          *(int *)(unaff_r11 - 0x14) = iVar4;
          *(undefined4 **)(unaff_r11 - 0x18) = unaff_r4;
          *(uint *)(unaff_r11 - 0x1c) = uVar14;
          *(undefined1 **)(unaff_r11 - 0x20) = &uStack000000b8;
        }
        in_stack_0000001c = func_0x02162e80(unaff_r4,uVar14,(int)uVar10 >> 0xc,(int)puVar11 >> 0xc);
        piVar12 = *(int **)(*(int *)(in_stack_0000001c + 4) + 100);
        (**(code **)(*piVar12 + 0x6c))(piVar12,&uStack000000b8,0xffffffff);
      }
      unaff_r4[iVar4 + 0x1b] = in_stack_0000001c;
    }
    else {
      FUN_020517fc(&uStack000000e0,0,0x16);
      puVar13 = unaff_r4 + iVar4;
      uVar8 = func_0x02162e80(unaff_r4,in_stack_0000002c,0x20,iVar4 * 0x18 + 0x51);
      puVar13[0x1b] = uVar8;
      uVar5 = FUN_02070cdc(iVar4);
      FUN_02051890(uVar5,&uStack000000e0,0x14);
      piVar12 = *(int **)(*(int *)(puVar13[0x1b] + 4) + 100);
      (**(code **)(*piVar12 + 0x6c))(piVar12,&uStack000000e0,0xffffffff);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  (**(code **)(**(int **)(in_stack_0000002c + 4) + 0xc))();
  (**(code **)(**(int **)(in_stack_00000028 + 4) + 0xc))();
  FUN_0207698c(in_stack_00000020);
  FUN_020763e0(in_stack_00000024);
  FUN_0214f834();
  cVar2 = *(char *)((int)unaff_r4 + 0xe1);
  if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    iVar6 = FUN_0203b3e4();
    uVar5 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar6 + 0x88),0x20,0);
    unaff_r4[0x36] = uVar5;
    iVar6 = unaff_r4[0x36];
    *(undefined4 *)(iVar6 + 0x4c) = 0x2164321;
    *(undefined4 **)(iVar6 + 0x50) = unaff_r4;
  }
  else if ((byte)(cVar2 - 6U) < 3) {
    iVar6 = FUN_0203b3e4();
    uVar5 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar6 + 0x88),0x20,1);
    unaff_r4[0x36] = uVar5;
    iVar6 = unaff_r4[0x36];
    *(undefined4 *)(iVar6 + 0x4c) = 0x2164321;
    *(undefined4 **)(iVar6 + 0x50) = unaff_r4;
    iVar6 = unaff_r4[0x36];
    *(undefined4 *)(iVar6 + 0x38) = 0x21642a8;
    *(undefined4 **)(iVar6 + 0x50) = unaff_r4;
  }
  uVar5 = func_0x021ba49c(0,1,1);
  unaff_r4[0x34] = uVar5;
  iVar6 = func_0x02162d88(*(undefined1 *)((int)unaff_r4 + 0xe1));
  if (iVar6 == 0) {
    uVar5 = func_0x021bcf1c(6,1,1,0xffffffff);
    unaff_r4[0x33] = uVar5;
  }
  else {
    iVar6 = 1;
    uVar5 = 0xffffffff;
    bVar17 = true;
    bVar18 = false;
    bVar15 = false;
    uVar14 = 0x2162a81;
    uVar19 = func_0x021bcf1c(0x11,0);
    uVar10 = (uint)((ulonglong)uVar19 >> 0x20);
    uVar8 = (uint)uVar19;
    if (!bVar15) {
      uVar10 = in_r12 & ~(uVar10 >> 0x18);
    }
    if (bVar17) {
      uVar14 = 0x9040481e;
      register0x00000054 = (BADSPACEBASE *)0x903f943e;
      uVar5 = FUN_02162a80;
    }
    if (!bVar15 || bVar18) {
      uVar1 = (uint)unaff_r4 & 0xff;
      bVar15 = uVar1 == 0 && bVar15 || uVar1 != 0 && (bool)((byte)(uVar14 >> uVar1 - 1) & 1);
      bVar18 = uVar14 >> uVar1 == 0x2162a90;
    }
    puVar11 = unaff_r4;
    if (!bVar15 || bVar18) {
      puVar11 = (undefined4 *)(uVar10 - (uVar14 << (unaff_r8 & 0xff)));
    }
    if (!bVar15) {
      bVar15 = uVar8 >> 0x18 < uVar8;
      bVar18 = uVar8 == (uVar8 >> 0x18) + 1;
    }
    if (!bVar15 || bVar18) {
      puVar13 = (uint *)(iVar6 + uVar8 * -0x10000);
    }
    uVar9 = FUN_02086798((undefined1 *)((int)register0x00000054 + 0xf8));
    puVar11[0x37] = uVar9;
    *(undefined4 *)(puVar11[0x36] + 0x54) = puVar11[0x37];
    unaff_r4 = puVar11;
    if ((byte)(*(char *)((int)puVar11 + 0xe1) - 6U) < 3) {
      func_0x021b77dc(*(undefined4 *)(puVar11[0x21] + 4));
      unaff_r4 = (undefined4 *)(unaff_r11 & (int)register0x00000054 << 0x12);
      bVar15 = (unaff_r4 == (undefined4 *)0x0 &&
               (undefined1 *)((uint)puVar13 & 0x8000000d) == (undefined1 *)0x0) &&
               (undefined1 *)((uint)puVar13 & 0x4000000f) == (undefined1 *)0x0;
      if (bVar15) {
        puVar11 = (undefined4 *)(iVar4 + extraout_r1_00);
      }
                    /* WARNING: Jumptable at 0x02162af4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      if (((bVar15 && (undefined1 *)((uint)puVar13 & 0x20000000) == (undefined1 *)0x0) &&
          (undefined1 *)((uint)puVar13 & 0x70000000) == (undefined1 *)0x0) &&
          (undefined1 *)((uint)puVar13 & 0xb0000000) == (undefined1 *)0x0) {
        uVar5 = (*(code *)(unaff_r10 & 0x900))();
        return uVar5;
      }
      *(undefined4 *)(iVar6 + extraout_r1_00) = uVar5;
      iVar4 = FUN_02155a9c(puVar11,extraout_r1_00 + 0x30);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
      (**(code **)(**(int **)(unaff_r4[0x21] + 4) + 0xd8))(*(int **)(unaff_r4[0x21] + 4),0);
      func_0x021b65d8(*(undefined4 *)(unaff_r4[0x21] + 4));
      (**(code **)(**(int **)(unaff_r4[0x21] + 4) + 0x148))(*(int **)(unaff_r4[0x21] + 4),8);
    }
  }
  iVar4 = FUN_02086bd4();
  if ((iVar4 == 0) && (DAT_020afec3 < '\x01')) {
    DAT_020afec3 = '\x01';
    DAT_020afe90 = DAT_020afe90 + 1;
  }
  cVar2 = *(char *)((int)unaff_r4 + 0xe1);
  if ((cVar2 == '\x04') || (cVar2 == '\x05')) {
    (**(code **)(**(int **)(unaff_r4[9] + 4) + 0xd8))(*(int **)(unaff_r4[9] + 4),1);
    (**(code **)(**(int **)(unaff_r4[10] + 4) + 0xd8))(*(int **)(unaff_r4[10] + 4),1);
    (**(code **)(**(int **)(unaff_r4[0xb] + 4) + 0xd8))(*(int **)(unaff_r4[0xb] + 4),0);
    (**(code **)(**(int **)(unaff_r4[0x12] + 4) + 0xd8))(*(int **)(unaff_r4[0x12] + 4),0);
    (**(code **)(**(int **)(unaff_r4[0x13] + 4) + 0xd8))(*(int **)(unaff_r4[0x13] + 4),0);
    FUN_0215b838(unaff_r4[0x26],unaff_r4[0x25]);
    FUN_0215b838(unaff_r4[0x27],unaff_r4[0x25]);
  }
  else {
    if ((byte)(cVar2 - 6U) < 3) {
      (**(code **)(**(int **)(unaff_r4[0x14] + 4) + 0xd8))(*(int **)(unaff_r4[0x14] + 4),0);
      (**(code **)(**(int **)(unaff_r4[0xb] + 4) + 0xd8))(*(int **)(unaff_r4[0xb] + 4),1);
      FUN_0215b7fc(unaff_r4[0x2b],unaff_r4[0x24]);
    }
    else {
      (**(code **)(**(int **)(unaff_r4[0xb] + 4) + 0xd8))(*(int **)(unaff_r4[0xb] + 4),0);
    }
    (**(code **)(**(int **)(unaff_r4[9] + 4) + 0xd8))(*(int **)(unaff_r4[9] + 4),0);
    (**(code **)(**(int **)(unaff_r4[10] + 4) + 0xd8))(*(int **)(unaff_r4[10] + 4),0);
    (**(code **)(**(int **)(unaff_r4[0x12] + 4) + 0xd8))(*(int **)(unaff_r4[0x12] + 4),1);
    (**(code **)(**(int **)(unaff_r4[0x13] + 4) + 0xd8))(*(int **)(unaff_r4[0x13] + 4),1);
  }
  iVar4 = 0;
  do {
    if ((&DAT_020afec4)[iVar4] == '\0') {
      (&DAT_020afec4)[iVar4] = 3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = FUN_02086bd4();
  if ((iVar4 == 0) || (DAT_020afe98 != 0)) {
    *(undefined1 *)(unaff_r4 + 0x38) = 0;
  }
  else {
    *(undefined1 *)(unaff_r4 + 0x38) = 1;
  }
  func_0x02163168(unaff_r4);
  bVar15 = false;
  uVar8 = (uint)(byte)(*(char *)((int)unaff_r4 + 0xe1) - 1);
  if ((uVar8 < 8) && ((1 << uVar8 & 0x95U) != 0)) {
    bVar15 = true;
  }
  if (bVar15) {
    func_0x021b6214(*(undefined4 *)(unaff_r4[DAT_020afedd + 0x2e] + 4));
    func_0x021bd730(unaff_r4[0x33],0x12,0);
  }
  else if (*(char *)((int)unaff_r4 + 0xe1) == '\x04') {
    func_0x021b6214(*(undefined4 *)(unaff_r4[0x26] + 4),1);
    func_0x021bd730(unaff_r4[0x33],0xe,0);
  }
  else {
    func_0x021b6214(*(undefined4 *)(unaff_r4[0x23] + 4),1);
    func_0x021bd730(unaff_r4[0x33],DAT_020afea0 + 10,0);
  }
  FUN_02073ebc(2,1);
  FUN_020734e0(0x2f);
  FUN_0207361c(0x2f,0);
  (**(code **)(**(int **)(unaff_r4[0x1f] + 4) + 0x148))(*(int **)(unaff_r4[0x1f] + 4),0x10);
  func_0x021b65bc();
  return *unaff_r4;
}

