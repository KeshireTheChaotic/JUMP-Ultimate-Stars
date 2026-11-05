
undefined1 FUN_0214d1fc(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[2];
  uVar3 = param_1[3];
  FUN_0200d338(*param_1 + 1,uVar3);
  uVar5 = extraout_r1 & 0xff;
  bVar1 = *(byte *)(uVar4 + uVar5);
  FUN_0200d338((uint)bVar1 + param_1[1],uVar3);
  uVar3 = extraout_r1_00 & 0xff;
  bVar2 = *(byte *)(uVar4 + uVar3);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  *(byte *)(uVar4 + uVar3) = bVar1;
  *(byte *)(uVar4 + uVar5) = bVar2;
  FUN_0200d338((uint)bVar1 + (uint)bVar2,param_1[3]);
  return *(undefined1 *)(uVar4 + extraout_r1_01);
}

