
undefined4 * FUN_021c7460(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_02032fe8();
  uVar2 = FUN_0200c99c(*(ushort *)(param_1 + 0x10) & 0x1f);
  uVar2 = FUN_0200c5ac(uVar2,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar2);
  uVar2 = FUN_0200c8e0();
  *puVar1 = uVar2;
  uVar2 = FUN_0200c99c((int)(uint)*(ushort *)(param_1 + 0x10) >> 5 & 0x1f);
  uVar2 = FUN_0200c5ac(uVar2,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar2);
  uVar2 = FUN_0200c8e0();
  puVar1[1] = uVar2;
  uVar2 = FUN_0200c99c((int)(uint)*(ushort *)(param_1 + 0x10) >> 10 & 0x1f);
  uVar2 = FUN_0200c5ac(uVar2,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar2);
  uVar2 = FUN_0200c8e0();
  puVar1[2] = uVar2;
  uVar2 = FUN_0200c99c(*(undefined2 *)(param_1 + 0x12));
  uVar2 = FUN_0200c5ac(uVar2,0x437f0000);
  FUN_0200c9e4(0x45800000,uVar2);
  uVar2 = FUN_0200c8e0();
  puVar1[3] = uVar2;
  return puVar1;
}

