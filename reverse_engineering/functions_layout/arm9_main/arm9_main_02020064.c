
undefined2 * FUN_02020064(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uStack_18;
  
  puVar4 = (undefined2 *)param_1[0x12];
  if (puVar4 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
  uStack_18 = param_4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xa0))();
  uStack_18 = *puVar1;
  while (iVar2 = FUN_02016314(&uStack_18,*puVar4), iVar2 != 0) {
    puVar4 = puVar4 + -2;
  }
  while (iVar2 = FUN_02016328(puVar4[2],&uStack_18), iVar2 != 0) {
    puVar4 = puVar4 + 2;
  }
  if (param_1[0xf] < param_1[0xe]) {
    puVar5 = puVar4;
    while ((param_1[0xf] != 0 && (iVar2 = FUN_0202021c(puVar5[-2],param_1 + 0xf), iVar2 != 0))) {
      puVar5 = puVar5 + -2;
    }
    while( true ) {
      if (puVar4 < puVar5) {
        return (undefined2 *)0x0;
      }
      uVar3 = (uint)(ushort)puVar5[1];
      if (param_2 < (ushort)puVar5[uVar3]) break;
      param_2 = param_2 - (ushort)puVar5[uVar3];
      puVar5 = puVar5 + 2;
    }
    return puVar5 + uVar3 + (ushort)puVar5[uVar3 + param_2 + 1];
  }
  if (param_1[0xe] < param_1[0xf]) {
    puVar5 = puVar4;
    while (iVar2 = FUN_02020230(puVar5[2],param_1 + 0xf), iVar2 != 0) {
      puVar5 = puVar5 + 2;
    }
    while ((puVar4 < puVar5 || (iVar2 = FUN_02020244(*puVar5,param_1 + 0xe), iVar2 != 0))) {
      uVar3 = (uint)(ushort)puVar5[1];
      if (param_2 < (ushort)puVar5[uVar3]) {
        return puVar5 + uVar3 + (ushort)puVar5[uVar3 + param_2 + 1];
      }
      param_2 = param_2 - (ushort)puVar5[uVar3];
      puVar5 = puVar5 + -2;
    }
    return (undefined2 *)0x0;
  }
  iVar2 = FUN_02020244(*puVar4,param_1 + 0xe);
  if (iVar2 == 0) {
    return (undefined2 *)0x0;
  }
  return puVar4 + (uint)(ushort)puVar4[1] + (uint)(ushort)puVar4[(ushort)puVar4[1] + param_2 + 1];
}

