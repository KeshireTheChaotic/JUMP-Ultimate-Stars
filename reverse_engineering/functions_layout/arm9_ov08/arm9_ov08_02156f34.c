
void FUN_02156f34(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 local_110 [2];
  undefined1 auStack_10c [260];
  
  puVar5 = local_110;
  DAT_0216e6e8 = (undefined2 *)FUN_02166b8c(0x26c,4);
  DAT_0216e6e4 = 0;
  MIi_CpuClear16(0,local_110,0x104);
  local_110[0]._0_1_ = 0x50;
  local_110[1] = 0xc;
  FUN_02051890(s_NINTENDO_DS_0216a898,auStack_10c);
  *DAT_0216e6e8 = 3;
  puVar2 = DAT_0216e6e8;
  iVar3 = 0x82;
  puVar4 = DAT_0216e6e8;
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar4 = uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2[0x83] = 1;
  DAT_0216e6e8[0x84] = 0xffff;
  DAT_0216e6e8[0x85] = 1;
  DAT_0216e6e8[0x86] = 0xffff;
  DAT_0216e6e8[0x87] = 0xffff;
  FUN_020554a8(DAT_0216e6e8 + 0x88);
  iVar3 = FUN_0214f79c(&LAB_02156ea0_1,&LAB_02156e98_1);
  if (iVar3 != 0) {
    FUN_02055684();
  }
  return;
}

