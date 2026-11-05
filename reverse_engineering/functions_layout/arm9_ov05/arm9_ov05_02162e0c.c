
undefined4 FUN_02162e0c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 uStack0000006c;
  undefined4 uStack00000070;
  undefined4 uStack00000074;
  undefined4 uStack00000078;
  undefined4 uStack0000007c;
  int in_stack_000000ac;
  int in_stack_000000b0;
  undefined1 uStack000000b8;
  undefined4 uStack000000c4;
  int in_stack_000000c8;
  
  do {
    uVar2 = FUN_02163b38(in_stack_00000024,0xb00000,*(undefined4 *)(param_1 + 0x88),0);
    FUN_021500cc(uVar2,unaff_r7);
    FUN_021639a8(uVar2,&DAT_0217123c);
    FUN_021506ec(unaff_r8[2],uVar2);
    FUN_021634b4(&uStack000000c4,&DAT_02171248);
    iVar6 = 0;
    do {
      sVar1 = *(short *)(unaff_r11 + iVar6 * 2 + 8);
      if (sVar1 != 0) {
        iVar3 = FUN_0203b404();
        uVar4 = FUN_02163b38(iVar6 + 0xb00015,0xb00000,*(undefined4 *)(iVar3 + 0x88),0);
        uStack0000007c = uStack000000c4 + -0xe000;
        uStack00000078 = in_stack_000000c8;
        FUN_0214ce68(uVar4,&uStack0000007c,&uStack00000078);
        FUN_021500cc(uVar4,uVar2);
        FUN_021506ec(unaff_r8[2],uVar4);
        iVar3 = 0;
        do {
          iVar5 = FUN_0203b404();
          uVar4 = FUN_02163b38(0xb0001b,0xb00000,*(undefined4 *)(iVar5 + 0x88),0);
          *(undefined4 *)(&uStack000000b8 + iVar3 * 4) = uVar4;
          FUN_021639a8(uVar4,&uStack000000c4);
          FUN_021500cc(*(undefined4 *)(&uStack000000b8 + iVar3 * 4),uVar2);
          FUN_021506ec(unaff_r8[2],*(undefined4 *)(&uStack000000b8 + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
        FUN_021640c0(sVar1,&uStack000000b8,0xb0001b,3);
        in_stack_000000c8 = in_stack_000000c8 + 0x8000;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    unaff_r9[unaff_r10 + 0xb] = uVar2;
    iVar6 = FUN_02164234(unaff_r11);
    if (iVar6 == 0) {
      uVar2 = FUN_021641f8(unaff_r11,unaff_r6,0xb00025);
      iVar6 = FUN_0203b404();
      iVar6 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar6 + 0x88),unaff_r7);
      uStack00000070 = 0x83000;
      FUN_0214d494(unaff_r7,&uStack00000070);
      func_0x021b6760(*(undefined4 *)(unaff_r7 + 4),4,FUN_02164ebc);
    }
    else {
      uVar2 = FUN_021641f8(unaff_r11,unaff_r6,0xb0002a);
      iVar6 = FUN_0203b404();
      iVar6 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar6 + 0x88),unaff_r7);
      uStack0000006c = 0x84000;
      FUN_0214d494(unaff_r7,&uStack0000006c);
      func_0x021b6760(*(undefined4 *)(unaff_r7 + 4),4,FUN_0216524c);
      func_0x021b6760(*(undefined4 *)(unaff_r7 + 4),1,FUN_02164db0);
      (**(code **)(**(int **)(unaff_r9[unaff_r10 + 0xb] + 4) + 0xd8))
                (*(int **)(unaff_r9[unaff_r10 + 0xb] + 4),0);
    }
    uStack00000074 = in_stack_00000028;
    FUN_02150a10(iVar6,&uStack00000074);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 0x54) = 0x54554f52;
    *(int *)(*(int *)(unaff_r7 + 4) + 0x124) = unaff_r10 + in_stack_00000014;
    unaff_r9[unaff_r10 + 0x32] = unaff_r7;
    unaff_r10 = unaff_r10 + 1;
    in_stack_000000b0 = in_stack_000000b0 + 0x38000;
    if (2 < unaff_r10) {
      unaff_r6 = unaff_r6 + 1;
      in_stack_000000ac = in_stack_000000ac + 0x28000;
      if (4 < unaff_r6) {
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
      unaff_r9 = unaff_r8 + unaff_r6 * 3;
      unaff_r10 = 0;
      in_stack_000000b0 = in_stack_00000018;
      in_stack_00000014 = unaff_r6 * 3;
      in_stack_00000028 = 0xffff4000;
      in_stack_00000024 = 0xb00012;
    }
    unaff_r11 = FUN_021653ac(unaff_r8[0x25],unaff_r8[0x41],unaff_r6,unaff_r10);
    FUN_0203b404();
    unaff_r7 = ALWidgetImp::Create();
    iVar6 = FUN_0203b404();
    uVar2 = FUN_02164140(unaff_r11);
    iVar6 = FUN_02163b38(uVar2,0xb00000,*(undefined4 *)(iVar6 + 0x88),unaff_r7);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 0x54) = 0x414d4f4b;
    FUN_02163e70(unaff_r7);
    func_0x021b65e8(*(undefined4 *)(unaff_r7 + 4),1,FUN_02164d34);
    param_1 = FUN_0203b404();
  } while( true );
}

