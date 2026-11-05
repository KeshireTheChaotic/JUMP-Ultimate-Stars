
undefined4 FUN_02161984(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  MIi_CpuClear16(0,DAT_0216e7ec + 0x1300,0x348);
  iVar2 = FUN_020594b0(DAT_0216e7ec,0x2161851,3);
  if (iVar2 != 2) {
    return 0;
  }
  do {
    FUN_02058b2c(DAT_0216e7ec + 0x168c);
    iVar2 = DAT_0216e7ec;
  } while (*(short *)(DAT_0216e7ec + 0x168c) != 2);
  puVar7 = &DAT_0216ad44;
  puVar6 = (undefined4 *)(DAT_0216e7ec + 0x1648);
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
  *(int *)(iVar2 + 0x1648) = iVar2 + 0xf00;
  uVar1 = FUN_020586ac();
  *(undefined2 *)(DAT_0216e7ec + 0x1650) = uVar1;
  iVar2 = FUN_02161954();
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

