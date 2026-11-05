
void FUN_0219decc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  uVar6 = FUN_02054b44();
  uVar2 = (int)((ulonglong)uVar6 >> 0x20) - (param_1[9] + (uint)((uint)uVar6 < param_1[8]));
  param_1[4] = (uint)uVar6 - param_1[8];
  param_1[5] = uVar2;
  uVar3 = param_1[1];
  uVar1 = param_1[4];
  uVar4 = *param_1;
  bVar5 = uVar2 <= uVar3;
  if (uVar3 == uVar2) {
    bVar5 = uVar1 <= uVar4;
  }
  if (!bVar5 || uVar3 == uVar2 && uVar4 == uVar1) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  uVar3 = param_1[5];
  uVar4 = param_1[3];
  bVar5 = uVar3 <= uVar4;
  if (uVar4 == uVar3) {
    bVar5 = param_1[4] <= param_1[2];
  }
  uVar1 = param_1[2];
  if (bVar5) {
    uVar4 = uVar3;
    uVar1 = param_1[4];
  }
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar4 = param_1[10];
  param_1[10] = uVar4 + param_1[4];
  param_1[0xb] = param_1[0xb] + param_1[5] + (uint)CARRY4(uVar4,param_1[4]);
  uVar4 = param_1[0xc];
  param_1[0xc] = uVar4 + 1;
  uVar6 = FUN_0200d0c4(param_1[10],param_1[0xb],uVar4 + 1,0);
  *(undefined8 *)(param_1 + 6) = uVar6;
  return;
}

