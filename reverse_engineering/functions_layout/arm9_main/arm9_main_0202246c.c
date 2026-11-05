
undefined4 FUN_0202246c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  if (param_2 < uVar1) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(*(int **)(param_1 + 0x14),param_2);
    return uVar2;
  }
  for (puVar4 = *(undefined4 **)(param_1 + 0x1c); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    iVar3 = (**(code **)(*(int *)puVar4[-3] + 0x54))();
    if (iVar3 != 0) {
      if (param_2 == uVar1) {
        uVar2 = (**(code **)(*(int *)puVar4[-3] + 0x54))();
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x5c);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_2 == uVar1) break;
    puVar4 = (undefined4 *)*puVar4;
    uVar1 = uVar1 + 1;
  }
  uVar2 = (**(code **)(*(int *)puVar4[-0xd] + 0x54))();
  return uVar2;
}

