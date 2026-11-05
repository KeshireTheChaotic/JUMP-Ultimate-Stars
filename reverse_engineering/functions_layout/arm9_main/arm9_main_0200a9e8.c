
uint FUN_0200a9e8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 1 & 0x55555555;
  uVar4 = param_1 - uVar3;
  uVar2 = (param_2 - (param_2 >> 1 & 0x55555555)) - (uint)(param_1 < uVar3);
  uVar1 = uVar4 & 0x33333333;
  uVar3 = uVar4 >> 2 & 0x33333333;
  uVar4 = uVar1 + uVar3;
  uVar1 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333) + (uint)CARRY4(uVar1,uVar3);
  uVar3 = uVar4 >> 4 | uVar1 * 0x10000000;
  uVar2 = uVar4 + uVar3 & 0xf0f0f0f;
  uVar3 = uVar1 + (uVar1 >> 4) + (uint)CARRY4(uVar4,uVar3) & 0xf0f0f0f;
  uVar1 = uVar2 >> 8 | uVar3 << 0x18;
  uVar4 = uVar2 + uVar1;
  uVar3 = uVar3 + (uVar3 >> 8) + (uint)CARRY4(uVar2,uVar1);
  uVar1 = uVar4 >> 0x10 | uVar3 * 0x10000;
  return uVar4 + uVar1 + uVar3 + (uVar3 >> 0x10) + (uint)CARRY4(uVar4,uVar1) & 0xff;
}

