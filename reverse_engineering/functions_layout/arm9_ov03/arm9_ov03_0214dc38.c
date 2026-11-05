
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214dc38(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_r10;
  undefined4 uStack00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined1 uStack0000006c;
  undefined4 uStack00000070;
  
  (**(code **)(*param_1 + 0x10))(param_1,&uStack0000006c);
  iVar6 = 0;
  do {
    iVar1 = FUN_0203b424(iVar6);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
    iVar1 = FUN_0203b424(iVar6);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
    iVar1 = FUN_0203b424(iVar6);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0,0);
    iVar1 = FUN_0203b424(iVar6);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x90))(piVar2,0);
    iVar1 = FUN_0203b424(iVar6);
    uStack00000070 = iVar6 << 0xc;
    piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
    (**(code **)(*piVar2 + 0x10))(piVar2,&uStack00000070);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  iVar6 = 0;
  do {
    iVar1 = FUN_0203b414(iVar6 + 1);
    uVar3 = FUN_0214d3a8((&DAT_0215db3c)[iVar6],(&DAT_0215db34)[iVar6],*(undefined4 *)(iVar1 + 0x88)
                        );
    iVar1 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(unaff_r10 + iVar1 + 0x18) = uVar3;
  } while (iVar6 < 2);
  iVar6 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_0215db44)[iVar6],0);
    iVar1 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(unaff_r10 + iVar1 + 0xc) = uVar3;
  } while (iVar6 < 3);
  iVar6 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215dbec,&DAT_0215db1c,0x1de);
  piVar2 = (int *)0x0;
  if (iVar6 != 0) {
    piVar2 = (int *)func_0x021af26c(iVar6,FUN_0214ec20,FUN_0214eccc,0);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar2 = (int *)piVar2[6];
  func_0x021b3b7c(1,0,piVar2,0);
  _DAT_021d5154 = 1;
  iVar6 = (**(code **)(*(int *)piVar2[1] + 0xb0))((int *)piVar2[1],0x31305053);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0214d47c();
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 4) + 100);
  piVar4 = *(int **)(iVar6 + 0x2c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_02036430(*(undefined4 *)(iVar6 + 0x20));
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar6 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar4[6],0x21,2,5);
  *(int *)(unaff_r10 + 0x60) = iVar6;
  if (iVar6 != 0) {
    *(undefined2 *)(iVar6 + 0x18) = 0;
    *(undefined2 *)(iVar6 + 0x16) = 0x8df;
    *(undefined1 *)(iVar6 + 0x1a) = 0x1e;
    *(undefined1 *)(iVar6 + 0x1c) = 1;
    *(undefined1 *)(iVar6 + 0x1b) = 1;
  }
  (**(code **)(*piVar2 + 8))();
  iVar6 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 0x100;
  *(int *)(unaff_r10 + 0x20) = iVar6;
  in_stack_00000058 = 0x100;
  in_stack_0000005c = 0xc0;
  iVar6 = FUN_0203b3e4();
  iVar6 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),*(undefined4 *)(iVar6 + 0x88),
                              0x510000,0);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar6 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar6 + 4),0x20);
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))();
  uVar3 = FUN_0214e81c(0,0x215db58,&DAT_02093c8c);
  FUN_02020e98(iVar6,uVar3);
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),4,FUN_0214eb7c);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),4,FUN_0214eb94);
  FUN_02023894(*(undefined4 *)(iVar6 + 4),0x510000,0);
  func_0x021b3f78(*(undefined4 *)(iVar6 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar6 + 4),0x510001);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 4;
  *(int *)(unaff_r10 + 0x40) = iVar6;
  in_stack_00000058 = 0x80;
  in_stack_0000005c = 0;
  iVar6 = FUN_0203b404();
  iVar6 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),*(undefined4 *)(iVar6 + 0x88),
                              0x810000,0);
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
  *(int *)(unaff_r10 + 0x44) = iVar6;
  iVar6 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),_DAT_021d5154);
  FUN_0214e908(iVar6,*(undefined4 *)(unaff_r10 + 0x18));
  (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar6 + 4),0);
  FUN_02028384(*(undefined4 *)(iVar6 + 4),FUN_0214ed44);
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))();
  piVar2 = *(int **)(*(int *)(unaff_r10 + 0x18) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  *(int *)(unaff_r10 + 0x4c) = iVar6;
  iVar6 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x140) = 4;
  func_0x021b7744(*(undefined4 *)(iVar6 + 4),1);
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 0x101;
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214ea48);
  *(int *)(unaff_r10 + 0x24) = iVar6;
  uVar7 = 0;
  do {
    in_stack_00000034 = uVar7 * 0x20 + 0x30;
    in_stack_00000030 = 0xb8;
    iVar6 = FUN_0203b404();
    iVar6 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x24),*(undefined4 *)(iVar6 + 0x88),
                                0x810000,uVar7 + 5);
    FUN_02023940(*(undefined4 *)(iVar6 + 4));
    FUN_0214e940(&uStack00000038,iVar6,s_Position_0215dca8);
    uStack00000044 = in_stack_00000034 << 0xc;
    uStack00000040 = (in_stack_00000030 + 0xa0) * 0x1000;
    FUN_0214e990(iVar6,&uStack00000040,&uStack00000044);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack00000038,0,in_stack_0000003c);
    uStack0000004c = in_stack_00000034 << 0xc;
    uStack00000048 = in_stack_00000030 << 0xc;
    FUN_0214e990(iVar6,&uStack00000048,&uStack0000004c);
    FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack00000038,8,in_stack_0000003c);
    piVar2 = *(int **)(*(int *)(iVar6 + 4) + 0x68);
    (**(code **)(*piVar2 + 0xac))(piVar2,0);
    FUN_02023c80(*(undefined4 *)(iVar6 + 4),uStack00000038,0x494c,in_stack_0000003c);
    FUN_02023c70(*(undefined4 *)(iVar6 + 4),2);
    func_0x021b4034(*(undefined4 *)(iVar6 + 4),2);
    uVar3 = FUN_0214e81c(0,FUN_0215db50,&DAT_02093c8c);
    FUN_02020e98(iVar6,uVar3);
    func_0x021b65e8(*(undefined4 *)(iVar6 + 4),1,FUN_0214ed04);
    func_0x021b65e8(*(undefined4 *)(iVar6 + 4),4,FUN_0214eab0);
    func_0x021b6760(*(undefined4 *)(iVar6 + 4),4,FUN_0214eac8);
    func_0x021b65e8(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214ea7c);
    *(uint *)(*(int *)(iVar6 + 4) + 0x124) = uVar7;
    (**(code **)(**(int **)(iVar6 + 4) + 0x24))();
    uStack00000054 = in_stack_00000034 << 0xc;
    uStack00000050 = (in_stack_00000030 + 0xa0) * 0x1000;
    FUN_0214e990(iVar6,&uStack00000050,&uStack00000054);
    *(int *)(unaff_r10 + uVar7 * 4 + 0x30) = iVar6;
    if (uVar7 == *(byte *)(unaff_r10 + 1)) {
      func_0x021b6214(*(undefined4 *)(iVar6 + 4),1);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  iVar6 = 0;
  do {
    iVar1 = iVar6 + -1;
    if (iVar1 < 0) {
      iVar1 = 3;
    }
    iVar1 = *(int *)(unaff_r10 + iVar1 * 4 + 0x30);
    iVar5 = iVar6 + 1;
    if (3 < iVar5) {
      iVar5 = 0;
    }
    piVar2 = *(int **)(*(int *)(unaff_r10 + iVar6 * 4 + 0x30) + 4);
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 0x164))(piVar2,1);
    }
    else {
      (**(code **)(*piVar2 + 0x160))(piVar2,1,*(undefined4 *)(iVar1 + 4));
    }
    iVar1 = *(int *)(unaff_r10 + iVar5 * 4 + 0x30);
    piVar2 = *(int **)(*(int *)(unaff_r10 + iVar6 * 4 + 0x30) + 4);
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 0x164))(piVar2,2);
    }
    else {
      (**(code **)(*piVar2 + 0x160))(piVar2,2,*(undefined4 *)(iVar1 + 4));
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  iVar6 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 0x103;
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214ea48);
  *(int *)(unaff_r10 + 0x2c) = iVar6;
  in_stack_00000028 = 0x40;
  in_stack_0000002c = 0x6a;
  iVar6 = 8;
  do {
    uVar7 = (iVar6 + -8) * 2;
    iVar1 = FUN_0203b404();
    iVar1 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x2c),*(undefined4 *)(iVar1 + 0x88),
                                0x800000,uVar7 + 1);
    *(int *)(unaff_r10 + iVar6 * 4 + 0x30) = iVar1;
    FUN_02023894(*(undefined4 *)(iVar1 + 4),uVar7 | 0x800000,0);
    func_0x021b3f78(*(undefined4 *)(*(int *)(unaff_r10 + iVar6 * 4 + 0x30) + 4),uVar7 + 1 | 0x800000
                   );
    func_0x021b4034(*(undefined4 *)(*(int *)(unaff_r10 + iVar6 * 4 + 0x30) + 4),uVar7 | 0x800000);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  iVar6 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar6 + 4) + 0x24))();
  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = 0x102;
  func_0x021b65e8(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214e9dc);
  func_0x021b6760(*(undefined4 *)(iVar6 + 4),0x10,FUN_0214e9ec);
  *(int *)(unaff_r10 + 0x28) = iVar6;
  iVar6 = ALWidgetImp::Create(iVar6,_DAT_021d5154);
  FUN_0214e908(iVar6,*(undefined4 *)(unaff_r10 + 0x1c));
  piVar2 = *(int **)(*(int *)(unaff_r10 + 0x1c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  FUN_02023940(*(undefined4 *)(iVar6 + 4));
  FUN_0214e940(&uStack00000008,iVar6,s_Position_0215dca8);
  uStack00000014 = 0;
  uStack00000010 = 0x100000;
  FUN_0214e990(iVar6,&uStack00000010,&uStack00000014);
  FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack00000008,0,in_stack_0000000c);
  uStack0000001c = 0;
  uStack00000018 = 0;
  FUN_0214e990(iVar6,&uStack00000018,&uStack0000001c);
  FUN_02023c60(*(undefined4 *)(iVar6 + 4),uStack00000008,8,in_stack_0000000c);
  piVar2 = *(int **)(*(int *)(iVar6 + 4) + 0x68);
  (**(code **)(*piVar2 + 0xac))(piVar2,0);
  FUN_02023c80(*(undefined4 *)(iVar6 + 4),uStack00000008,0x494c,in_stack_0000000c);
  FUN_02023c70(*(undefined4 *)(iVar6 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar6 + 4),2);
  uStack00000024 = 0;
  uStack00000020 = 0x100000;
  FUN_0214e990(iVar6,&uStack00000020,&uStack00000024);
  *(int *)(unaff_r10 + 0x48) = iVar6;
  uVar3 = func_0x021bcf1c(1,1,1,0xffffffff);
  *(undefined4 *)(unaff_r10 + 0x5c) = uVar3;
  FUN_0214ed1c();
  FUN_02073ebc(2,1);
  piVar2 = *(int **)(*(int *)(unaff_r10 + 0x28) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  return *(undefined4 *)(unaff_r10 + 4);
}

