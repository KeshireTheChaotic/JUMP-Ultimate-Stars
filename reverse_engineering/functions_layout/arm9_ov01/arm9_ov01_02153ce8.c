
undefined4 FUN_02153ce8(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined1 uStack00000074;
  undefined4 uStack00000078;
  
  do {
    _uStack00000074 = param_1 << 0xc;
    FUN_021511c8(unaff_r9,&uStack00000074,&uStack00000078);
    FUN_0214e688(unaff_r10,unaff_r9);
    do {
      unaff_r6 = unaff_r6 + 1;
      if (2 < unaff_r6) {
        FUN_02073ebc(2,1);
        iVar1 = ResultMission::ResultMission_Create(1);
        *(int *)(unaff_r8 + 0x50) = iVar1;
        *(int *)(iVar1 + 0x44) = unaff_r8;
        *(code **)(*(int *)(unaff_r8 + 0x50) + 0x3c) = FUN_02154098;
        piVar2 = *(int **)(*(int *)(unaff_r8 + 0x28) + 4);
        (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
        return *(undefined4 *)(unaff_r8 + 4);
      }
      iVar1 = FUN_02071d3c((int)DAT_020afedc,unaff_r6);
    } while (iVar1 == 0);
    unaff_r10 = ALWidgetImp::Create();
    *(int *)(*(int *)(unaff_r10 + 4) + 0x124) = unaff_r6;
    uStack00000068 = unaff_r5;
    uStack0000006c = unaff_r5;
    FUN_021511c8(unaff_r10,&uStack00000068,&uStack0000006c);
    FUN_02028384(*(undefined4 *)(unaff_r10 + 4),FUN_02154048);
    uStack00000070 = unaff_r11;
    FUN_0214ffd0(unaff_r10,&uStack00000070);
    (**(code **)(**(int **)(unaff_r10 + 4) + 0x24))();
    if (*(int *)(unaff_r8 + unaff_r6 * 4 + 0x40) != 0) {
      FUN_0214f7c0(unaff_r10);
    }
    iVar1 = FUN_0203b3f4();
    unaff_r9 = FUN_0214fba8(*(undefined4 *)(iVar1 + 0x88),0x8a1000,4,0x9e);
    (**(code **)(**(int **)(unaff_r9 + 4) + 0xd8))(*(int **)(unaff_r9 + 4),1);
    uStack00000078 = 0;
    if (unaff_r6 == 0) {
      param_1 = unaff_r4;
    }
    else {
      param_1 = unaff_r4 + 0x10;
    }
  } while( true );
}

