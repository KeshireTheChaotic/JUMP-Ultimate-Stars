
undefined4 FUN_02162ff4(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [20];
  ushort local_48;
  
  DAT_0216e800 = FUN_02166b8c(0x1ba0,0x20);
  *(undefined4 *)(DAT_0216e800 + 0x1370) = param_1;
  iVar2 = DAT_0216e800;
  uVar8 = OS_GetTick();
  *(undefined8 *)(iVar2 + 0x1b78) = uVar8;
  iVar2 = FUN_020594b0(iVar2,0x2162ea9,3);
  if (iVar2 == 2) {
    do {
      FUN_02058b2c(DAT_0216e800 + 0x13b8);
      iVar2 = DAT_0216e800;
    } while (*(short *)(DAT_0216e800 + 0x13b8) != 2);
    puVar7 = &DAT_0216add4;
    puVar6 = (undefined4 *)(DAT_0216e800 + 0x1374);
    iVar5 = 8;
    do {
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      puVar7 = puVar7 + 2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar6 = *puVar7;
    *(int *)(iVar2 + 0x1374) = iVar2 + 0xf00;
    uVar1 = FUN_020586ac();
    *(undefined2 *)(DAT_0216e800 + 0x137c) = uVar1;
    FUN_0205542c(auStack_60);
    FUN_02051890(s_NWCUSBAP_0216adc8,DAT_0216e800 + 5000,8);
    *(undefined1 *)(DAT_0216e800 + 0x1391) = 1;
    FUN_02051890(auStack_5c,DAT_0216e800 + 0x1394,(uint)local_48 << 1);
    iVar2 = FUN_02162fc4();
    if (iVar2 != 0) {
      uVar3 = FUN_02167814(0,0x2162bd9,0,0x78);
      *(undefined4 *)(DAT_0216e800 + 0x1b80) = uVar3;
      return 1;
    }
  }
  FUN_02166b5c(&DAT_0216e800);
  return 0;
}

