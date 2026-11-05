
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02153ce8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  int *unaff_r9;
  int iVar6;
  undefined4 uStack00000004;
  undefined4 in_stack_00000008;
  undefined1 uStack0000000c;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  
  uStack0000001c = param_1;
  uStack00000020 = param_1;
  FUN_0214e1b8();
  FUN_02023c60(*(undefined4 *)(unaff_r4 + 4),in_stack_00000034,8,in_stack_00000038);
  piVar1 = *(int **)(*(int *)(unaff_r4 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c80(*(undefined4 *)(unaff_r4 + 4),in_stack_00000034,0x494c,in_stack_00000038);
  FUN_02023c70(*(undefined4 *)(unaff_r4 + 4),1);
  FUN_020239a0(*(undefined4 *)(unaff_r4 + 4));
  (**(code **)(**(int **)(unaff_r4 + 4) + 0xd8))(*(int **)(unaff_r4 + 4),1);
  FUN_02023c60(*(undefined4 *)(unaff_r4 + 4),in_stack_0000002c,0,in_stack_00000030);
  piVar1 = *(int **)(*(int *)(unaff_r4 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c70(*(undefined4 *)(unaff_r4 + 4),2);
  FUN_020239a0(*(undefined4 *)(unaff_r4 + 4));
  (**(code **)(**(int **)(unaff_r4 + 4) + 0xd8))(*(int **)(unaff_r4 + 4),0);
  FUN_02023c60(*(undefined4 *)(unaff_r4 + 4),in_stack_0000002c,0,in_stack_00000030);
  piVar1 = *(int **)(*(int *)(unaff_r4 + 4) + 0x68);
  (**(code **)(*piVar1 + 0xac))(piVar1,0);
  FUN_02023c70(*(undefined4 *)(unaff_r4 + 4),3);
  func_0x021b4034(*(undefined4 *)(unaff_r4 + 4),1);
  func_0x021b3f78(*(undefined4 *)(unaff_r4 + 4),2);
  func_0x021b409c(*(undefined4 *)(unaff_r4 + 4),3);
  func_0x021b65e8(*(undefined4 *)(unaff_r4 + 4),0x10,FUN_0215461c);
  func_0x021b6760(*(undefined4 *)(unaff_r4 + 4),0x10,FUN_02154720);
  iVar2 = ALWidgetImp::Create();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  (**(code **)(**(int **)(unaff_r5 + 4) + 0xd8))(*(int **)(unaff_r5 + 4),1);
  FUN_0214e478(iVar2);
  unaff_r9[4] = unaff_r5;
  unaff_r9[5] = iVar2;
  uVar3 = FUN_021545b0();
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0xc5,1,6);
  unaff_r9[0xf] = iVar2;
  FUN_021545f8(iVar2,1);
  iVar2 = ALWidgetBaseImp::Create();
  unaff_r9[3] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  iVar5 = 0;
  do {
    iVar4 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    FUN_0214e6e4(&uStack0000000c,5,iVar5 * 0x30 + 5,0xfa);
    piVar1 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_021608f4,s_Create_02160e78,0x1b2);
    if (piVar1 != (int *)0x0) {
      func_0x021b054c(piVar1,0,&DAT_02093c8c);
      *piVar1 = (int)&jus_Class_0216094c::vftable;
      FUN_0214e6d0(piVar1 + 0x1a,&uStack0000000c);
      *piVar1 = 0x21d1c58;
    }
    if (piVar1[6] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    FUN_02020e98(iVar4,piVar1[6]);
    (**(code **)(**(int **)(iVar4 + 4) + 0x24))();
    FUN_02023940(*(undefined4 *)(iVar4 + 4));
    FUN_02151ebc(&uStack00000004,iVar4,&DAT_02160ecc);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar4 + 4),uStack00000004,0,in_stack_00000008);
    piVar1 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
    (**(code **)(*piVar1 + 0xac))(piVar1,0);
    FUN_02023c70(*(undefined4 *)(iVar4 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0);
    iVar5 = iVar5 + 1;
    *(int *)(*(int *)(iVar4 + 4) + 0x124) = iVar5;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    iVar4 = FUN_0203b3f4();
    iVar4 = FUN_0214e9f0(*(undefined4 *)(iVar4 + 0x88),0x820000,1,0x1f);
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    uStack00000018 = (iVar5 * 0x2f + 0x19) * 0x1000;
    uStack00000014 = 0x80000;
    FUN_0214e1b8(iVar4,&uStack00000014,&uStack00000018);
    FUN_0214e478(iVar2,iVar4);
    iVar6 = iVar5 + 1;
    unaff_r9[iVar5 + 6] = iVar4;
    iVar5 = iVar6;
  } while (iVar6 < 4);
  iVar5 = FUN_0203b3f4();
  iVar5 = FUN_0214e9f0(*(undefined4 *)(iVar5 + 0x88),0x820000,0,0x20);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  FUN_0214e478(iVar2,iVar5);
  unaff_r9[10] = iVar5;
  iVar4 = 0;
  do {
    uVar3 = FUN_021545b0(iVar5);
    iVar6 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,iVar4 + 0x41U & 0xffff,1,7);
    unaff_r9[iVar4 + 0xc] = iVar6;
    FUN_021545f8(iVar6,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  uVar3 = FUN_021545b0(iVar5);
  iVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x41,3,6);
  unaff_r9[0xb] = iVar5;
  FUN_021545f8(iVar5,1);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  iVar2 = FUN_02026f94();
  *unaff_r9 = iVar2;
  uStack00000040 = 0x80000;
  FUN_02152ca0(*unaff_r9,&uStack00000040);
  FUN_02028384(*(undefined4 *)(*unaff_r9 + 4),&DAT_02154870);
  (**(code **)(**(int **)(*unaff_r9 + 4) + 0x24))();
  iVar2 = FUN_02026f94();
  unaff_r9[1] = iVar2;
  uStack0000003c = 0x80000;
  FUN_02152ca0(unaff_r9[1],&uStack0000003c);
  FUN_02028384(*(undefined4 *)(unaff_r9[1] + 4),&LAB_021548d8);
  (**(code **)(**(int **)(unaff_r9[1] + 4) + 0x24))();
  return;
}

