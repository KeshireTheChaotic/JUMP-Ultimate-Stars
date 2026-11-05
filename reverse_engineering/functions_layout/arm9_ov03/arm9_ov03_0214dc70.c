
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214dc70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9;
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
  int in_stack_00000070;
  
  while( true ) {
    FUN_0203d0b4(*(undefined4 *)(param_1 + 4));
    iVar1 = FUN_0203b424(unaff_r9);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4));
    iVar1 = FUN_0203b424(unaff_r9);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4));
    iVar1 = FUN_0203b424(unaff_r9);
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x88) + 4) + 0x90))();
    iVar1 = FUN_0203b424(unaff_r9);
    in_stack_00000070 = unaff_r9 << 0xc;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x88) + 4) + 0x10))();
    unaff_r9 = unaff_r9 + 1;
    if (3 < unaff_r9) break;
    iVar1 = FUN_0203b424(unaff_r9);
    param_1 = *(int *)(iVar1 + 0x88);
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_0203b414(iVar1 + 1);
    uVar3 = FUN_0214d3a8((&DAT_0215db3c)[iVar1],(&DAT_0215db34)[iVar1],*(undefined4 *)(iVar2 + 0x88)
                        );
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(unaff_r10 + iVar2 + 0x18) = uVar3;
  } while (iVar1 < 2);
  iVar1 = 0;
  do {
    uVar3 = FUN_020101f4((&DAT_0215db44)[iVar1],0);
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(unaff_r10 + iVar2 + 0xc) = uVar3;
  } while (iVar1 < 3);
  iVar1 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215dbec,&DAT_0215db1c,0x1de);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar1,FUN_0214ec20,FUN_0214eccc,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  func_0x021b3b7c(1,0,piVar4,0);
  _DAT_021d5154 = 1;
  iVar1 = (**(code **)(*(int *)piVar4[1] + 0xb0))((int *)piVar4[1],0x31305053);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0214d47c();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 100);
  piVar5 = *(int **)(iVar1 + 0x2c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_02036430(*(undefined4 *)(iVar1 + 0x20));
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x10))();
  }
  iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar5[6],0x21,2,5);
  *(int *)(unaff_r10 + 0x60) = iVar1;
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 0x16) = 0x8df;
    *(undefined1 *)(iVar1 + 0x1a) = 0x1e;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x1b) = 1;
  }
  (**(code **)(*piVar4 + 8))();
  iVar1 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x100;
  *(int *)(unaff_r10 + 0x20) = iVar1;
  in_stack_00000058 = 0x100;
  in_stack_0000005c = 0xc0;
  iVar1 = FUN_0203b3e4();
  iVar1 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),*(undefined4 *)(iVar1 + 0x88),
                              0x510000,0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar1 + 4),0x20);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))();
  uVar3 = FUN_0214e81c(0,0x215db58,&DAT_02093c8c);
  FUN_02020e98(iVar1,uVar3);
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_0214eb7c);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),4,FUN_0214eb94);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x510000,0);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),0x510001);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 4;
  *(int *)(unaff_r10 + 0x40) = iVar1;
  in_stack_00000058 = 0x80;
  in_stack_0000005c = 0;
  iVar1 = FUN_0203b404();
  iVar1 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),*(undefined4 *)(iVar1 + 0x88),
                              0x810000,0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  *(int *)(unaff_r10 + 0x44) = iVar1;
  iVar1 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x20),_DAT_021d5154);
  FUN_0214e908(iVar1,*(undefined4 *)(unaff_r10 + 0x18));
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0214ed44);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))();
  piVar4 = *(int **)(*(int *)(unaff_r10 + 0x18) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  *(int *)(unaff_r10 + 0x4c) = iVar1;
  iVar1 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x140) = 4;
  func_0x021b7744(*(undefined4 *)(iVar1 + 4),1);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x101;
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214ea48);
  *(int *)(unaff_r10 + 0x24) = iVar1;
  uVar7 = 0;
  do {
    in_stack_00000034 = uVar7 * 0x20 + 0x30;
    in_stack_00000030 = 0xb8;
    iVar1 = FUN_0203b404();
    iVar1 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x24),*(undefined4 *)(iVar1 + 0x88),
                                0x810000,uVar7 + 5);
    FUN_02023940(*(undefined4 *)(iVar1 + 4));
    FUN_0214e940(&uStack00000038,iVar1,s_Position_0215dca8);
    uStack00000044 = in_stack_00000034 << 0xc;
    uStack00000040 = (in_stack_00000030 + 0xa0) * 0x1000;
    FUN_0214e990(iVar1,&uStack00000040,&uStack00000044);
    FUN_02023c60(*(undefined4 *)(iVar1 + 4),uStack00000038,0,in_stack_0000003c);
    uStack0000004c = in_stack_00000034 << 0xc;
    uStack00000048 = in_stack_00000030 << 0xc;
    FUN_0214e990(iVar1,&uStack00000048,&uStack0000004c);
    FUN_02023c60(*(undefined4 *)(iVar1 + 4),uStack00000038,8,in_stack_0000003c);
    piVar4 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
    (**(code **)(*piVar4 + 0xac))(piVar4,0);
    FUN_02023c80(*(undefined4 *)(iVar1 + 4),uStack00000038,0x494c,in_stack_0000003c);
    FUN_02023c70(*(undefined4 *)(iVar1 + 4),2);
    func_0x021b4034(*(undefined4 *)(iVar1 + 4),2);
    uVar3 = FUN_0214e81c(0,FUN_0215db50,&DAT_02093c8c);
    FUN_02020e98(iVar1,uVar3);
    func_0x021b65e8(*(undefined4 *)(iVar1 + 4),1,FUN_0214ed04);
    func_0x021b65e8(*(undefined4 *)(iVar1 + 4),4,FUN_0214eab0);
    func_0x021b6760(*(undefined4 *)(iVar1 + 4),4,FUN_0214eac8);
    func_0x021b65e8(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214ea7c);
    *(uint *)(*(int *)(iVar1 + 4) + 0x124) = uVar7;
    (**(code **)(**(int **)(iVar1 + 4) + 0x24))();
    uStack00000054 = in_stack_00000034 << 0xc;
    uStack00000050 = (in_stack_00000030 + 0xa0) * 0x1000;
    FUN_0214e990(iVar1,&uStack00000050,&uStack00000054);
    *(int *)(unaff_r10 + uVar7 * 4 + 0x30) = iVar1;
    if (uVar7 == *(byte *)(unaff_r10 + 1)) {
      func_0x021b6214(*(undefined4 *)(iVar1 + 4),1);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + -1;
    if (iVar2 < 0) {
      iVar2 = 3;
    }
    iVar2 = *(int *)(unaff_r10 + iVar2 * 4 + 0x30);
    iVar6 = iVar1 + 1;
    if (3 < iVar6) {
      iVar6 = 0;
    }
    piVar4 = *(int **)(*(int *)(unaff_r10 + iVar1 * 4 + 0x30) + 4);
    if (iVar2 == 0) {
      (**(code **)(*piVar4 + 0x164))(piVar4,1);
    }
    else {
      (**(code **)(*piVar4 + 0x160))(piVar4,1,*(undefined4 *)(iVar2 + 4));
    }
    iVar2 = *(int *)(unaff_r10 + iVar6 * 4 + 0x30);
    piVar4 = *(int **)(*(int *)(unaff_r10 + iVar1 * 4 + 0x30) + 4);
    if (iVar2 == 0) {
      (**(code **)(*piVar4 + 0x164))(piVar4,2);
    }
    else {
      (**(code **)(*piVar4 + 0x160))(piVar4,2,*(undefined4 *)(iVar2 + 4));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = ALWidgetBaseImp::Create();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x103;
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214ea38);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214ea48);
  *(int *)(unaff_r10 + 0x2c) = iVar1;
  in_stack_00000028 = 0x40;
  in_stack_0000002c = 0x6a;
  iVar1 = 8;
  do {
    uVar7 = (iVar1 + -8) * 2;
    iVar2 = FUN_0203b404();
    iVar2 = ALWidgetImp::Create(*(undefined4 *)(unaff_r10 + 0x2c),*(undefined4 *)(iVar2 + 0x88),
                                0x800000,uVar7 + 1);
    *(int *)(unaff_r10 + iVar1 * 4 + 0x30) = iVar2;
    FUN_02023894(*(undefined4 *)(iVar2 + 4),uVar7 | 0x800000,0);
    func_0x021b3f78(*(undefined4 *)(*(int *)(unaff_r10 + iVar1 * 4 + 0x30) + 4),uVar7 + 1 | 0x800000
                   );
    func_0x021b4034(*(undefined4 *)(*(int *)(unaff_r10 + iVar1 * 4 + 0x30) + 4),uVar7 | 0x800000);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xb);
  iVar1 = ALWidgetBaseImp::Create();
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x124) = 0x102;
  func_0x021b65e8(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214e9dc);
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),0x10,FUN_0214e9ec);
  *(int *)(unaff_r10 + 0x28) = iVar1;
  iVar1 = ALWidgetImp::Create(iVar1,_DAT_021d5154);
  FUN_0214e908(iVar1,*(undefined4 *)(unaff_r10 + 0x1c));
  piVar4 = *(int **)(*(int *)(unaff_r10 + 0x1c) + 4);
  (**(code **)(*piVar4 + 0xd8))(piVar4,1);
  FUN_02023940(*(undefined4 *)(iVar1 + 4));
  FUN_0214e940(&uStack00000008,iVar1,s_Position_0215dca8);
  uStack00000014 = 0;
  uStack00000010 = 0x100000;
  FUN_0214e990(iVar1,&uStack00000010,&uStack00000014);
  FUN_02023c60(*(undefined4 *)(iVar1 + 4),uStack00000008,0,in_stack_0000000c);
  uStack0000001c = 0;
  uStack00000018 = 0;
  FUN_0214e990(iVar1,&uStack00000018,&uStack0000001c);
  FUN_02023c60(*(undefined4 *)(iVar1 + 4),uStack00000008,8,in_stack_0000000c);
  piVar4 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar1 + 4),uStack00000008,0x494c,in_stack_0000000c);
  FUN_02023c70(*(undefined4 *)(iVar1 + 4),2);
  func_0x021b4034(*(undefined4 *)(iVar1 + 4),2);
  uStack00000024 = 0;
  uStack00000020 = 0x100000;
  FUN_0214e990(iVar1,&uStack00000020,&uStack00000024);
  *(int *)(unaff_r10 + 0x48) = iVar1;
  uVar3 = func_0x021bcf1c(1,1,1,0xffffffff);
  *(undefined4 *)(unaff_r10 + 0x5c) = uVar3;
  FUN_0214ed1c();
  FUN_02073ebc(2,1);
  piVar4 = *(int **)(*(int *)(unaff_r10 + 0x28) + 4);
  (**(code **)(*piVar4 + 0x148))(piVar4,0x10);
  return *(undefined4 *)(unaff_r10 + 4);
}

