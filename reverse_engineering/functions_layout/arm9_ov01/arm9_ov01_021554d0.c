
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021554d0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined *puStack00000050;
  undefined4 uStack00000054;
  undefined4 in_stack_00000058;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  undefined4 uStack00000130;
  undefined4 uStack00000134;
  undefined4 uStack00000138;
  undefined4 uStack0000013c;
  undefined4 uStack00000140;
  undefined4 uStack00000144;
  undefined4 uStack00000148;
  undefined4 uStack0000014c;
  undefined4 uStack00000150;
  undefined4 uStack00000154;
  undefined4 uStack00000158;
  undefined4 uStack0000015c;
  undefined4 uStack00000160;
  undefined4 uStack00000164;
  undefined4 uStack00000168;
  undefined4 uStack0000016c;
  undefined4 uStack00000170;
  undefined4 uStack00000174;
  undefined4 uStack00000178;
  undefined4 uStack0000017c;
  undefined uStack0000018c;
  undefined2 in_stack_000001a0;
  
  iVar1 = ALWidgetImp::Create(param_1,*param_2);
  uStack00000138 = 0x10000;
  uStack0000013c = 0x90000;
  FUN_021511c8(iVar1,&uStack0000013c,&uStack00000138);
  *(int *)(*(int *)(iVar1 + 4) + 0x124) = unaff_r4;
  uStack00000134 = 0x81000;
  FUN_0214e6c0(iVar1,&uStack00000134);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  uStack00000130 = 0x84000;
  FUN_0214ffd0(iVar1,&uStack00000130);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),&LAB_021565f0_1);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),unaff_r5);
  iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(unaff_r5 + 0xf8)])();
  iVar3 = FUN_0203b404();
  iVar3 = FUN_0214fba8(*(undefined4 *)(iVar3 + 0x88),0x850000,0x25,0x81);
  uStack00000128 = 0x8000;
  uStack0000012c = 0x8000;
  FUN_021511c8(iVar3,&uStack0000012c,&uStack00000128);
  if (((1 << (*(uint *)(unaff_r5 + 0xf8) & 0xff) & (uint)*(byte *)(unaff_r5 + unaff_r4 + 0xfc)) == 0
      ) || (iVar2 == 0)) {
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  }
  else {
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  }
  FUN_0214e688(iVar1,iVar3);
  iVar1 = ALWidgetImp::Create(in_stack_00000058,_DAT_021d5154);
  uStack00000160 = 0;
  uStack00000164 = 0x20000;
  FUN_021511c8(iVar1,&uStack00000164,&uStack00000160);
  *(int *)(*(int *)(iVar1 + 4) + 0x124) = unaff_r4;
  uStack0000015c = 0x81000;
  FUN_0214e6c0(iVar1,&uStack0000015c);
  uStack00000158 = 0x84000;
  FUN_0214ffd0(iVar1,&uStack00000158);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0215687c + 1);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),unaff_r5);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar2 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(unaff_r5 + 0xf8)])();
  if (iVar2 == 0) {
    uStack00000054 = DAT_0216c1a8;
    puStack00000050 = &DAT_02169d34;
  }
  else {
    uStack00000054 =
         FUN_02156f78(*(undefined4 *)(unaff_r5 + 0xe8),*(uint *)(unaff_r5 + 0xf8) & 0xff,
                      *(undefined1 *)
                       (unaff_r4 + unaff_r5 + *(uint *)(unaff_r5 + 0xf8) * 0x14 + 0x178));
    uVar5 = FUN_0207216c((&DAT_02169d28)[*(uint *)(unaff_r5 + 0xf8) & 0xff],
                         *(undefined1 *)
                          (unaff_r4 + unaff_r5 + *(uint *)(unaff_r5 + 0xf8) * 0x14 + 0x178));
    FUN_02051890(uVar5,&uStack0000018c,0x14);
    puStack00000050 = &uStack0000018c;
    in_stack_000001a0 = 0;
  }
  func_0x021c5fb4(*(undefined4 *)(*(int *)(unaff_r5 + 0x78) + 4));
  iVar2 = FUN_0214d37c();
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,0);
  uStack00000150 = 0x10000;
  uStack00000154 = 0;
  FUN_021511c8(iVar2,&uStack00000154,&uStack00000150);
  piVar4 = *(int **)(iVar2 + 4);
  (**(code **)(*(int *)piVar4[0x19] + 0x70))();
  (**(code **)(*piVar4 + 0xc4))();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  uStack0000014c = 0x81000;
  FUN_0214e6c0(iVar2,&uStack0000014c);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar4 + 0x6c))(piVar4,puStack00000050,0xffffffff);
  FUN_0214e688(iVar1,iVar2);
  func_0x021c5fb4(*(undefined4 *)(*(int *)(unaff_r5 + 0x74) + 4));
  iVar2 = FUN_0214d37c();
  uStack00000144 = 0x3000;
  uStack00000148 = 0;
  FUN_021511c8(iVar2,&uStack00000148,&uStack00000144);
  piVar4 = *(int **)(iVar2 + 4);
  (**(code **)(*(int *)piVar4[0x19] + 0x70))();
  (**(code **)(*piVar4 + 0xc4))();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  uStack00000140 = 0x81000;
  FUN_0214e6c0(iVar2,&uStack00000140);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar4 + 0x68))(piVar4,uStack00000054);
  FUN_0214e688(iVar1,iVar2);
  FUN_0214f834();
  iVar1 = ALWidgetImp::Create(in_stack_00000058,_DAT_021d5154);
  uStack00000178 = 0;
  uStack0000017c = 0;
  FUN_021511c8(iVar1,&uStack0000017c,&uStack00000178);
  *(int *)(*(int *)(iVar1 + 4) + 0x124) = unaff_r4;
  uStack00000174 = 0x83000;
  FUN_0214e6c0(iVar1,&uStack00000174);
  uStack00000170 = 0x84000;
  FUN_0214ffd0(iVar1,&uStack00000170);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),&LAB_02156e6c_1);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),unaff_r5);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  iVar2 = FUN_0203b404();
  iVar2 = FUN_0214fba8(*(undefined4 *)(iVar2 + 0x88),0x850000,0xb,0x83);
  uStack00000168 = 0x10000;
  uStack0000016c = 0x73000;
  FUN_021511c8(iVar2,&uStack0000016c,&uStack00000168);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_0214e688(iVar1,iVar2);
  uVar5 = FUN_02155920(iVar2);
  uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x21,0xf,5);
  *(undefined4 *)(unaff_r5 + unaff_r4 * 4 + 0x84) = uVar5;
  iVar2 = *(int *)(unaff_r5 + unaff_r4 * 4 + 0x84);
  if (iVar2 != 0) {
    FUN_02155968(iVar2,0x79f,0x1e);
  }
  iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(unaff_r5 + 0xf8)])();
  iVar3 = FUN_02156fa0(*(uint *)(unaff_r5 + 0xf8) & 0xff,
                       *(undefined1 *)
                        (unaff_r4 + unaff_r5 + *(uint *)(unaff_r5 + 0xf8) * 0x14 + 0x178));
  if ((iVar3 == 0) && (iVar2 != 0)) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  }
  if (unaff_r4 + 1 < 0x14) {
    func_0x02154e9a();
  }
  (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x78) + 4) + 0xc))();
  (**(code **)(**(int **)(*(int *)(unaff_r5 + 0x74) + 4) + 0xc))();
  *(undefined4 *)(unaff_r5 + 0x78) = 0;
  *(undefined4 *)(unaff_r5 + 0x74) = 0;
  (**(code **)(**(int **)(unaff_r7 + 4) + 0x1a0))
            (*(int **)(unaff_r7 + 4),*(undefined4 *)(unaff_r5 + 0xf4));
  (**(code **)(**(int **)(unaff_r7 + 4) + 0x198))
            (*(int **)(unaff_r7 + 4),*(undefined4 *)(unaff_r5 + 0xf4));
  return;
}

