
undefined4 * FUN_02022540(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = (**(code **)(*(int *)param_1[5] + 0x2c))();
  if (param_2 < uVar1) {
    return param_1;
  }
  puVar3 = (undefined4 *)param_1[7];
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)param_1[0x17];
      while( true ) {
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if (param_2 == uVar1) break;
        puVar3 = (undefined4 *)*puVar3;
        uVar1 = uVar1 + 1;
      }
      return puVar3 + -0x12;
    }
    iVar2 = (**(code **)(*(int *)puVar3[-3] + 0x54))();
    if (iVar2 != 0) {
      if (param_2 == uVar1) {
        return puVar3 + -8;
      }
      uVar1 = uVar1 + 1;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

