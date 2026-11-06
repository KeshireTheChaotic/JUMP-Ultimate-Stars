
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02160418(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    if ((puVar3[2] == 0) && ((uint)puVar3[1] < 5)) {
                    /* WARNING: Switch is manually overridden */
      switch(puVar3[1]) {
      case 0:
        uVar2 = FUN_02070d14(0);
        FUN_02078b08(uVar2,(int)puVar3 + 0x2b7);
        FUN_02070d28(uVar2);
        break;
      case 1:
        puVar3[2] = 1;
        uVar2 = FUN_02071f10(DAT_020afeb4);
        FUN_02072570(uVar2,(int)puVar3 + 0x2b7,1);
        FUN_02070d28(uVar2);
        break;
      case 2:
        uVar2 = FUN_02070cdc(0);
        FUN_0207260c(uVar2,(int)puVar3 + 0x2b7,0);
      }
    }
    for (iVar1 = 0; iVar1 < *(short *)(puVar3 + 0xab); iVar1 = iVar1 + 1) {
      (**(code **)(*(int *)puVar3[iVar1 + 0x77] + 8))();
    }
    if (puVar3[0xaa] != 0) {
      FUN_0206ae98();
    }
    (**(code **)(*(int *)puVar3[0x17] + 8))();
    (**(code **)(*(int *)puVar3[0x25] + 8))();
    (**(code **)(*(int *)puVar3[6] + 8))();
    (**(code **)(*(int *)puVar3[7] + 8))();
    (**(code **)(*(int *)puVar3[8] + 8))();
    (**(code **)(*(int *)puVar3[9] + 8))();
    (**(code **)(*(int *)puVar3[10] + 8))();
    _DAT_021d5154 = 0;
    func_0x021b526c(1);
    func_0x021b526c(2);
    func_0x021b526c(3);
    iVar1 = 0;
    do {
      if ((int *)puVar3[iVar1 + 0x13] != (int *)0x0) {
        (**(code **)(*(int *)puVar3[iVar1 + 0x13] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    (**(code **)(**(int **)(puVar3[0x76] + 4) + 0xc))();
    iVar1 = 0;
    do {
      if ((int *)puVar3[iVar1 + 0x97] != (int *)0x0) {
        (**(code **)(*(int *)puVar3[iVar1 + 0x97] + 0xc))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    func_0x021bab64(*puVar3);
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_020afcb8 = puVar3[2];
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(puVar3[4] + 4) + 0xc))();
    (**(code **)(*(int *)puVar3[5] + 8))();
    FUN_0201b244(puVar3);
    func_0x021b65cc();
  }
  return;
}

